// code owner->Emon->Daffodil International university

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct Student
{
    int Roll;
    float CGPA;
    char Name[50];
    char BranchId[10];
    struct Student *next1;
} *first = NULL, *last, *delete;
struct University
{
    int UniversityID, Yearofstart;
    char UniversityName[50];
    char UniversityLocation[50];
    struct University *next2;
} *second = NULL, *last2;
struct Branch
{
    int UID;
    char BranchID[10];
    char BranchName[50];
    struct Branch *next3;
} *third = NULL, *last3;

// To convert lower-case letters in Upper-case
char *caps(char *letter)
{
    for (int i = 0; letter[i]; i++)
    {
        if (letter[i] >= 'a' && letter[i] <= 'z')
        {
            letter[i] = letter[i] - 32;
        }
    }

    return letter;
}

//---------------------------------------------------------------UNIVERSITY---------------------------------------------------------------

// To display university details
void display_university(struct University *p)
{
    if (p == NULL)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : University details is not available in the database\nSOLUTION          : Please enter the details of University in the database\n\n");
        system("pause");
        return;
    }

    int i = 1;

    printf("\nUNIVERSITY DETAILS\n");
    printf("------------------\n");

    while (p != NULL)
    {
        printf("\n%d.", i);
        printf(" University ID                 : %d\n", p->UniversityID);
        printf("   University Name               : %s\n", p->UniversityName);
        printf("   University Establishment Year : %d\n", p->Yearofstart);
        printf("   University Location           : %s\n", p->UniversityLocation);
        p = p->next2;
        i++;
    }

    printf("\n");
    system("pause");
}

// In order to have unique university ID
int check_uid(int x)
{
    if (second == NULL)
    {
        return 0;
    }

    struct University *t = second;

    // Traverse the Linked List
    while (t)
    {
        if (t->UniversityID == x)
        {
            return 1;
        }

        t = t->next2;
    }

    return 0;
}

// Inserting data of university structure
void insert_for_university()
{
    FILE *fp;
    int ID, year;
    static int i = 1;
    char uname[50], ulocation[50];
    char *uname1;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\nENTER THE FOLLOWING DETAILS OF UNIVERSITY %d :-\n", i);

    do
    {
        printf("\nUNIVERSITY ID                 : ");
        scanf("%d", &ID);

        if (check_uid(ID) == 1)
        {
            printf("\nERROR !!\n\nERROR DESCRIPTION : University with this ID already exists\nSOLUTION          : Please enter unique University ID\n");
        }
    } while (check_uid(ID) == 1);

    printf("UNIVERSITY NAME               : ");
    getchar();
    scanf("%[^\n]s", uname);
    uname1 = caps(uname);

    printf("UNIVERSITY LOCATION           : ");
    getchar();
    scanf("%[^\n]s", ulocation);

    do
    {
        printf("UNIVERSITY ESTABLISHMENT YEAR : ");
        scanf("%d", &year);

        if (year > (tm.tm_year + 1900))
        {
            printf("\nERROR !!\n\nERROR DESCRIPTION : University establishment year is invalid\nSOLUTION          : Please enter valid university establishment year\n\n");
        }
    } while (year > (tm.tm_year + 1900));

    if (strcmp(uname1, "KIIT") == 0)
    {
        fp = fopen("KIIT.txt", "w+");

        if (fp == NULL)
        {
            fp = fopen("KIIT.txt", "w+");

            if (fp == NULL)
            {
                printf("\nERROR !!\n\nERROR DESCRIPTION : Cannot create the file\nSOLUTION          : Please check the system / storage space in the device\n\n");
                system("pause");
                return;
            }
        }
    }

    struct University *temp;

    temp = (struct University *)malloc(sizeof(struct University));
    temp->UniversityID = ID;
    strcpy(temp->UniversityName, uname1);
    strcpy(temp->UniversityLocation, ulocation);
    temp->Yearofstart = year;
    temp->next2 = NULL;

    // If the list is empty
    if (second == NULL)
    {
        second = last2 = temp;
    }

    else
    {
        last2->next2 = temp;
        last2 = temp;
    }

    printf("\nDetails of University %d has been uploaded in the database\n\n", i);
    system("pause");

    i++;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------BRANCH------------------------------------------------------------------

// To display branch details
void display_branch(struct Branch *p)
{
    if (p == NULL)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : Branch details is not available in the database\nSOLUTION          : Please enter the details of Branch in the database\n\n");
        system("pause");
        return;
    }

    int i = 1;

    printf("\nBRANCH DETAILS\n");
    printf("--------------\n");

    while (p != NULL)
    {
        printf("\n%d.", i);
        printf(" Branch ID       : %s\n", p->BranchID);
        printf("   Branch Name     : %s\n", p->BranchName);
        printf("   University ID   : %d\n", p->UID);
        p = p->next3;
        i++;
    }

    printf("\n");
    system("pause");
}

// To Keep the Branch ID Unique
int check_bid(char *x)
{
    if (third == NULL)
    {
        return 0;
    }

    struct Branch *t = third;

    // Traverse the Linked List
    while (t)
    {
        if (strcmp(x, t->BranchID) == 0)
        {
            return 1;
        }

        t = t->next3;
    }

    return 0;
}

// To check if particular university ID exist or not
int check_uid_repeat(int x)
{
    int a = 1;

    if (second == NULL)
    {
        return 1;
    }

    struct University *t = second;

    // Traverse the Linked List
    while (t)
    {
        if (t->UniversityID == x)
        {
            a = 0;
            return a;
        }

        t = t->next2;
    }

    return a;
}

// Inserting data of branch structure
void insert_for_branch()
{
    FILE *fp;
    char branchid[10], branchname[50];
    char *branchname1;
    int uid;
    static int i = 1;

    printf("\nENTER THE FOLLOWING DETAILS OF THE BRANCH %d :-\n", i);

    do
    {
        printf("UNIVERSITY ID (In which the Branch has to be registered) : ");
        scanf("%d", &uid);

        if (check_uid_repeat(uid) == 1)
        {
            printf("\nERROR !!\n\nERROR DESCRIPTION : University with this ID does not exists\nSOLUTION          : Please enter valid University ID\n\n");
        }
    } while (check_uid_repeat(uid) == 1);

    do
    {
        printf("BRANCH ID                                                : ");
        getchar();
        scanf("%[^\n]s", branchid);

        if (check_bid(branchid) == 1)
        {
            printf("\nERROR !!\n\nERROR DESCRIPTION : Branch with this ID already exists\nSOLUTION          : Please enter unique Branch ID\n\n");
        }
    } while (check_bid(branchid) == 1);

    printf("BRANCH NAME                                              : ");
    getchar();
    scanf("%[^\n]s", branchname);
    branchname1 = caps(branchname);

    struct University *u = second;

    while (u)
    {
        if ((strcmp(branchname1, "CSE") == 0) && (strcmp(u->UniversityName, "KIIT") == 0))
        {
            fp = fopen("KIIT_CSE.txt", "w+");

            if (fp == NULL)
            {
                fp = fopen("KIIT_CSE.txt", "w+");

                if (fp == NULL)
                {
                    printf("\nERROR !!\n\nERROR DESCRIPTION : Cannot create the file\nSOLUTION          : Please check the system / storage space in the device\n\n");
                    system("pause");
                    return;
                }
            }
        }

        u = u->next2;
    }

    // struct node *last;
    struct Branch *temp;

    temp = (struct Branch *)malloc(sizeof(struct Branch));
    strcpy(temp->BranchID, branchid);
    strcpy(temp->BranchName, branchname1);
    temp->UID = uid;
    temp->next3 = NULL;

    // If the list is empty
    if (third == NULL)
    {
        third = last3 = temp;
    }

    else
    {
        last3->next3 = temp;
        last3 = temp;
    }

    printf("\nDetails of Branch %d has been uploaded in the database\n\n", i);
    system("pause");

    i++;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------STUDENT------------------------------------------------------------------

// To display student's branch name
void branch_name(char *x)
{
    struct Branch *b = third;

    while (b)
    {
        if (strcmp(x, b->BranchID) == 0)
        {
            printf("   Branch Name : %s\n", b->BranchName);
        }

        b = b->next3;
    }
}

// To display student details
void display_student(struct Student *p)
{
    if (p == NULL)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : Student details is not available in the database\nSOLUTION          : Please enter the details of Student in the database\n\n");
        system("pause");
        return;
    }

    int i = 1;

    printf("\nSTUDENT DETAILS\n");
    printf("---------------\n");

    while (p != NULL)
    {
        printf("\n%d.", i);
        printf(" Roll No.    : %d\n", p->Roll);
        printf("   Name        : %s\n", p->Name);
        printf("   Branch ID   : %s\n", p->BranchId);
        branch_name(p->BranchId);
        printf("   CGPA        : %.2f\n", p->CGPA);
        p = p->next1;
        i++;
    }

    printf("\n");
    system("pause");
}

// To Keep the Roll No. Unique
int check_roll(int x)
{
    if (first == NULL)
    {
        return 0;
    }

    struct Student *t = first;

    // Traverse the Linked List
    while (t)
    {
        if (t->Roll == x)
        {
            return 1;
        }

        t = t->next1;
    }

    return 0;
}

// To check if a particular university name exist or not
int check_univ_repeat(char *x)
{
    int a = 1;

    if (second == NULL)
    {
        return 0;
    }

    struct University *t = second;

    // Traverse the Linked List
    while (t)
    {
        if (strcmp(t->UniversityName, x) == 0)
        {
            a = 0;
            return a;
        }

        t = t->next2;
    }

    return a;
}

// To check if a particular branch ID exist or not
int check_bid_repeat(char *x)
{
    int a = 1;

    if (third == NULL)
    {
        return 0;
    }

    struct Branch *t = third;

    // Traverse the Linked List
    while (t)
    {
        if (strcmp(t->BranchID, x) == 0)
        {
            a = 0;
            return a;
        }

        t = t->next3;
    }

    return a;
}

// Inserting data of student structure
void insert_for_student()
{
    FILE *fp, *ft;
    int r;
    float cgpa;
    static int i = 1;
    char branchid[50], name[50], univname[50];
    char *name1, *name2;

    printf("\nENTER THE FOLLOWING DETAILS OF THE STUDENT %d :-\n", i);

    do
    {
        printf("STUDENT ROLL NO.          : ");
        scanf("%d", &r);

        if (check_roll(r))
        {
            printf("\nERROR !!\n\nERROR DESCRIPTION : Student with this Roll No. already exists\nSOLUTION          : Please enter unique Roll No.\n\n");
        }
    } while (check_roll(r));

    printf("STUDENT NAME              : ");
    getchar();
    scanf("%[^\n]s", name);
    name1 = caps(name);

    do
    {
        printf("STUDENT's UNIVERSITY NAME : ");
        getchar();
        scanf("%[^\n]s", univname);
        name2 = caps(univname);

        if (check_univ_repeat(name2) == 1)
        {
            printf("\nERROR !!\n\nERROR DESCRIPTION : University with this name does not exists\nSOLUTION          : Please enter valid University name\n\n");
            system("pause");
            return;
        }
    } while (check_univ_repeat(name2) == 1);

    do
    {
        printf("STUDENT's BRANCH ID       : ");
        getchar();
        scanf("%[^\n]s", branchid);

        if (check_bid_repeat(branchid) == 1)
        {
            printf("\nERROR !!\n\nERROR DESCRIPTION : Branch with this ID does not exists\nSOLUTION          : Please enter valid Branch ID\n\n");
            system("pause");
            return;
        }
    } while (check_bid_repeat(branchid) == 1);

    printf("STUDENT CGPA              : ");
    scanf("%f", &cgpa);

    struct Branch *b = third;

    if (strcmp(name2, "KIIT") == 0)
    {
        fp = fopen("KIIT.txt", "r+");

        fseek(fp, 0, SEEK_END);

        fprintf(fp, "Roll No.    : %d\n", r);
        fprintf(fp, "Name        : %s\n", name);
        fprintf(fp, "Branch ID   : %s\n", branchid);

        while (b)
        {
            if (strcmp(b->BranchID, branchid) == 0)
            {
                fprintf(fp, "Branch Name : %s\n", b->BranchName);
            }

            b = b->next3;
        }

        fprintf(fp, "CGPA        : %.2f", cgpa);
        fprintf(fp, "\n\n\n");

        fclose(fp);
    }

    struct Branch *v = third;

    while (v)
    {
        if ((strcmp(v->BranchID, branchid) == 0) && strcmp(v->BranchName, "CSE") == 0)
        {
            ft = fopen("KIIT_CSE.txt", "r+");

            fseek(ft, 0, SEEK_END);

            fprintf(ft, "Roll No. : %d\n", r);
            fprintf(ft, "Name     : %s\n", name);
            fprintf(ft, "CGPA     : %.2f", cgpa);

            fprintf(ft, "\n\n\n");
            fclose(ft);
        }

        v = v->next3;
    }

    struct Student *temp;

    temp = (struct Student *)malloc(sizeof(struct Student));
    strcpy(temp->BranchId, branchid);
    strcpy(temp->Name, name);
    temp->Roll = r;
    temp->CGPA = cgpa;
    temp->next1 = NULL;

    // if the list is empty
    if (first == NULL)
    {
        first = last = temp;
    }

    else
    {
        last->next1 = temp;
        last = temp;
    }

    printf("\nDetails of Student %d has been uploaded in the database\n\n", i);
    system("pause");

    i++;
}

void kiit_students()
{
    FILE *fp;
    struct Student *s = first;
    struct University *u = second;
    int c;

    if (s == NULL)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : Student details is not available in the database\nSOLUTION          : Please enter the details of Student in the database\n\n");
        system("pause");
        return;
    }

    else if (strcmp(u->UniversityName, "KIIT") != 0)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : KIIT University details is not available in the database\nSOLUTION          : Please enter the details of KIIT University in the database\n\n");
        system("pause");
        return;
    }

    fp = fopen("KIIT.txt", "r");

    fseek(fp, 0, SEEK_END);

    if (ftell(fp) == 0)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : Student details of KIIT University is not available in the database\nSOLUTION          : Please enter the details of Student in KIIT University\n\n");
        system("pause");
        return;
    }

    fseek(fp, 0, SEEK_SET);

    printf("\nStudents reading in KIIT University :-\n\n");

    if (fp)
    {
        while ((c = getc(fp)) != EOF)
        {
            putchar(c);
        }

        fclose(fp);
        system("pause");
    }
}

void kiit_cse_students()
{
    FILE *fp;
    struct Student *s = first;
    struct University *u = second;
    struct Branch *b = third;
    int c;

    if (s == NULL)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : Student details is not available in the database\nSOLUTION          : Please enter the details of Student in the database\n\n");
        system("pause");
        return;
    }

    else if (strcmp(u->UniversityName, "KIIT") != 0)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : KIIT University details is not available in the database\nSOLUTION         : Please enter the details of KIIT University in the database\n\n");
        system("pause");
        return;
    }

    else if ((strcmp(u->UniversityName, "KIIT") == 0) && (strcmp(b->BranchName, "CSE") != 0))
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : CSE Branch details of KIIT University is not available in the database\nSOLUTION          : Please enter the details of CSE Branch in KIIT University\n\n");
        system("pause");
        return;
    }

    fp = fopen("KIIT_CSE.txt", "r");

    fseek(fp, 0, SEEK_END);

    if (ftell(fp) == 0)
    {
        printf("\nERROR !!\n\nERROR DESCRIPTION : Student details of CSE Branch in KIIT University is not available in the database\nSOLUTION          : Please enter the details of Student in CSE Branch of KIIT University\n\n");
        system("pause");
        return;
    }

    fseek(fp, 0, SEEK_SET);

    printf("\nStudents reading in KIIT University with branch CSE :-\n\n");

    if (fp)
    {
        while ((c = getc(fp)) != EOF)
        {
            putchar(c);
        }

        fclose(fp);
        system("pause");
    }
}

void welcome()
{
    system("cls");
    printf("\n\n\n\n\t\t\t\tWelcome to the Student Database Management System program\n\n\t\t\t\t\t    ");
    system("pause");

    system("cls");
    printf("\n\t\t\t\t\t\tACKNOWLEDGEMENT\n");
    printf("\t\t\t\t\t\t---------------\n");
    printf("\nWe are grateful to our respectable Ms. Faria Nishat Khan, whose insightful leadership and knowledge benefited us to complete this project successfully.\nWe are thankful to him for his continuous support and presence whenever needed.\n\n");
    printf("We would also like to extend our sincere thanks to all the team members, who tirelessly & dedicatedly works for the completion of the programs.\n\n");
    printf("\t\t\t\t\t\tThank You so much!\n\n\t\t\t\t\t   ");
    system("pause");

    system("cls");
    printf("\n\t\t\t\t\t\t     TEAM MEMBERS\n");
    printf("\t\t\t\t\t\t     ------------\n");

    printf("\t\t\t\t\t  ___________________________________\n");
    printf("\t\t\t\t\t |  ID NO.            NAME           |\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  232-15-818       MD. Emon Hossain|\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-196    Tousiq imdad Mehedi|\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-860       Nabila Hossain  |\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-106       Sakin Bin Jabed |\n");
    printf("\t\t\t\t\t |-----------------------------------|\n");
    printf("\t\t\t\t\t |  241-15-095       NaZmus Shakib   |\n");
    printf("\t\t\t\t\t |___________________________________|\n\n");
    printf("\t\t\t\t\t   ");
    system("pause");
}
void delete_update(struct Student **st, int K)
{
    struct Student *del = delete; // K=6cgpa
    struct Student *temp = *st;
    struct Student *prev = NULL;
    while (temp != NULL && temp->CGPA < K)
    {
        *st = temp->next1; // Changed head
        del = temp;
        insert_for_student();
        free(temp); // free old head
        temp = *st; // Change temp
    }
    // Delete occurrences other than head
    while (temp != NULL)
    {

        // Search for the node to be deleted,
        // keep track of the previous node as we
        // need to change 'prev->next'
        while (temp != NULL && temp->CGPA >= K)
        {
            prev = temp;
            temp = temp->next1;
            // create(&del,temp->CGPA);
            insert_for_student();
        }

        // If required value node was not present
        // in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next1 = temp->next1;
        insert_for_student();
        // create(&del,temp->CGPA);
        // delete temp; // Free memory

        // Update Temp for next iteration of
        // outer loop
        temp = prev->next1;
    }
}
void delete_less(struct Student **st, int K)
{
    struct Student *del = delete; // K=6cgpa
    struct Student *temp = *st;
    struct Student *prev = NULL;
    while (temp != NULL && temp->CGPA < K)
    {
        *st = temp->next1; // Changed head
        del = temp;
        free(temp); // free old head
        temp = *st; // Change temp
    }
    // Delete occurrences other than head
    while (temp != NULL)
    {

        while (temp != NULL && temp->CGPA >= K)
        {
            prev = temp;
            temp = temp->next1;
        }

        // If required value node was not present
        // in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next1 = temp->next1;
        // create(&del,temp->CGPA);
        // delete temp; // Free memory

        // Update Temp for next iteration of
        // outer loop
        temp = prev->next1;
    }
}
int main()
{
    int choice;
    welcome();

    while (1)
    {
        system("cls");
        printf("\n\t\t\t\t\t  STUDENT DATABASE MANAGEMENT SYSTEM\t\t\t\t");
        printf("\n\t\t\t\t\t  ----------------------------------\t\t\t\t\n");

        printf("\nPress 1  - To enter the details of the University");
        printf("\nPress 2  - To enter the details of the Branch");
        printf("\nPress 3  - To enter the details of the student");
        printf("\nPress 4  - To display University list");
        printf("\nPress 5  - To display branch list");
        printf("\nPress 6  - To display Student list");
        printf("\nPress 7  - To delete all students whose CGPA < 6.00. They will come back to original student list if their CGPA becomes >= 6.00");
        printf("\nPress 8  - To display the list of students reading in KIIT University");
        printf("\nPress 9  - To ADD / MODIFY / DELETE / UPDATE using key values in any of the databases as per the requirement");
        printf("\nPress 10 - To display the student details who are reading at KIIT University with branch CSE");
        printf("\nPress 11 - To display the list of Branches available in any given University");
        printf("\nPress 12 - To display the University details in ascending order of their year of starting");
        printf("\nPress 13 - To display the all Student name / all University name for a given name substring entered by the user");
        printf("\nPress 14 - To EXIT from the program");

        printf("\n\nPlease enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("cls");
            insert_for_university();
            break;

        case 2:
            system("cls");
            insert_for_branch();
            break;

        case 3:
            system("cls");
            insert_for_student();
            break;

        case 4:
            system("cls");
            display_university(second);
            break;

        case 5:
            system("cls");
            display_branch(third);
            break;

        case 6:
            system("cls");
            display_student(first);
            break;

        case 7:
            system("cls");

            printf("check Function call");
            delete_less(&first, 6);
            printf("Return function sucessfully");
            break;

        case 8:
            system("cls");
            kiit_students();
            break;

        case 9:
            system("cls");
            delete_update(&first, 6);
            break;

        case 10:
            system("cls");
            kiit_cse_students();
            break;

        case 11:
            system("cls");
            break;

        case 12:
            system("cls");
            break;

        case 13:
            system("cls");
            break;

        case 14:
            system("cls");

            remove("KIIT.txt");
            remove("KIIT_CSE.txt");

            printf("\nTHANK YOU FOR USING OUR STUDENT DATABASE MANAGEMENT SYSTEM PROGRAM");

            printf("\n\nExiting in ");
            for (int i = 2; i > -2; i--)
            {
                int ms = 1000 * 1;
                clock_t t = clock();
                while (clock() < t + ms)
                    ;
                printf("%d ", i + 1);
            }

            return 0;

        default:
            system("cls");
            printf("\nInvalid Choice !!\n\n");
            system("pause");
        }
    }
    return 0;
}