//code owner->Emon->Daffodil International university

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ToDo todo; // Defining a structure alias 'todo'.

// Defining the structure for each To-Do item in the linked list.
struct ToDo
{
    char data[100]; // String to store the To-Do task.
    todo *link;     // Pointer to the next To-Do item (linked list).
    int count;      // Number to track the position of the To-Do item in the list.
};

todo *start = NULL; // Initializing the start of the To-Do list to NULL.

// Function declarations.
void welcomeUser();
void seeToDo();
void createToDo();
void delToDo();
void updateToDo();
void fixcount();

int main()
{
    int choice;
    welcomeUser(); // Welcoming the user when the program starts.
    while (1)
    {
        // Infinite loop to keep showing the menu.
        system("color 3F"); // Changing terminal color.
        system("cls");      // Clearing the screen.

        // Displaying the menu options.
        printf("\n1. See Your To-Do List");
        printf("\n2. Create Your To-Dos");
        printf("\n3. Delete Your To-Dos");

        printf("\n4. Update Your To-Dos");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        // Switch case to handle user input.
        switch (choice)
        {
        case 1:
            seeToDo(); // View the current To-Do list.
            break;
        case 2:
            createToDo(); // Add new To-Dos to the list.
            break;
        case 3:
            delToDo(); // Delete a specific To-Do.
            break;
        case 4:
            updateToDo(); // Add new To-Dos at the end of the list.
            break;
        case 5:
            exit(0); // Exit the program.
        default:
            printf("\nInvalid choice, please try again.\n");
            system("pause");
        }
    }
}

// Function to display a welcome message to the user.
void welcomeUser()
{
    system("color 4F"); // Changing terminal color.
    printf("\n\n\n\n\n");
    printf("\t------------------------------------------------------------------------------------------------------\n\n");
    printf("\t#################################### YOUR TODO LIST APP ##############################################\n\n");
    printf("\t------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t*******************************WELCOME*******************************\n\n\n\n\n\n\n\n\n\t");
    system("pause"); // Pausing the system to allow user to read the message.

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

// Function to display the current To-Do list.
void seeToDo()
{
    system("cls");      // Clearing the screen.
    todo *temp = start; // Temporary pointer to traverse the list.
    if (start == NULL)
    { // Checking if the list is empty.
        printf("\nYour To-Do list is empty.\n\n");
    }
    else
    {
        // Looping through the linked list to print each To-Do.
        while (temp != NULL)
        {
            printf("%d) %s\n", temp->count, temp->data); // Printing the To-Do number and task.
            temp = temp->link;                           // Moving to the next To-Do.
        }
    }
    printf("\n\n");
    system("pause"); // Pausing to allow user to review the list.
}

// Function to create new To-Dos and add them to the list.
void createToDo()
{
    char k;
    todo *temp, *newTodo; // Pointers for traversal and new To-Do creation.
    system("cls");        // Clearing the screen.

    while (1)
    {
        // Asking if the user wants to add a new To-Do.
        printf("\nWant to add a new To-Do? (y/n): ");
        fflush(stdin);
        scanf("%c", &k);

        if (k == 'n')
        { // If the user says no, break out of the loop.
            break;
        }
        else
        {
            // Allocating memory for a new To-Do.
            newTodo = (todo *)calloc(1, sizeof(todo));
            printf("\nEnter your To-Do: ");
            fflush(stdin);
            gets(newTodo->data);  // Storing the new To-Do data.
            newTodo->link = NULL; // Setting its link to NULL (it's the last item in the list).

            if (start == NULL)
            { // If the list is empty, make this the first item.
                start = newTodo;
                newTodo->count = 1;
            }
            else
            {
                // Traverse to the end of the list and add the new To-Do there.
                temp = start;
                while (temp->link != NULL)
                {
                    temp = temp->link;
                }
                temp->link = newTodo;
            }
            fixcount(); // Reassign the count numbers after adding.
        }
    }
}

// Function to delete a specific To-Do from the list.
void delToDo()
{
    system("cls"); // Clearing the screen.
    int d;
    todo *temp, *prev; // Pointers for traversal and tracking previous node.

    // Asking for the number of the To-Do to be deleted.
    printf("\nEnter the number of the To-Do you want to delete: ");
    scanf("%d", &d);

    if (start == NULL)
    { // If the list is empty, show a message.
        printf("\nYour To-Do list is empty.\n");
    }
    else if (start->count == d)
    { // If the first item needs to be deleted.
        temp = start;
        start = start->link; // Update the start pointer.
        free(temp);          // Free the memory of the deleted node.
        fixcount();          // Reassign the count numbers.
    }
    else
    {
        temp = start;
        // Traverse the list to find the To-Do to delete.
        while (temp != NULL && temp->count != d)
        {
            prev = temp; // Keep track of the previous node.
            temp = temp->link;
        }
        if (temp == NULL)
        { // If the To-Do is not found.
            printf("\nTo-Do not found.\n");
        }
        else
        {
            prev->link = temp->link; // Remove the node from the list.
            free(temp);              // Free the memory of the deleted node.
            fixcount();              // Reassign the count numbers.
        }
    }
    system("pause"); // Pause to allow user to see the result.
}

// Function to add new To-Dos at the end of the list.
void updateToDo()
{
    char k;
    todo *temp, *newTodo; // Pointers for traversal and new To-Do creation.
    system("cls");        // Clearing the screen.

    while (1)
    {
        // Asking if the user wants to add a new To-Do.
        printf("\nWant to add a new To-Do? (y/n): ");
        fflush(stdin);
        scanf("%c", &k);

        if (k == 'n')
        { // If the user says no, break out of the loop.
            break;
        }
        else
        {
            // Allocating memory for a new To-Do.
            newTodo = (todo *)calloc(1, sizeof(todo));
            printf("\nEnter your To-Do: ");
            fflush(stdin);
            gets(newTodo->data);  // Storing the new To-Do data.
            newTodo->link = NULL; // Setting its link to NULL (it's the last item).

            temp = start;
            // Traverse to the end of the list.
            while (temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newTodo; // Add the new To-Do at the end.
            fixcount();           // Reassign the count numbers.
        }
    }
    system("pause"); // Pause to allow user to see the result.
}

// Function to update the count numbers of all To-Dos in the list.
void fixcount()
{
    todo *temp = start; // Temporary pointer for traversal.
    int i = 1;          // Initialize the counter.

    // Traverse the list and update the count for each To-Do.
    while (temp != NULL)
    {
        temp->count = i; // Assign the current count.
        i++;
        temp = temp->link; // Move to the next To-Do.
    }
}
