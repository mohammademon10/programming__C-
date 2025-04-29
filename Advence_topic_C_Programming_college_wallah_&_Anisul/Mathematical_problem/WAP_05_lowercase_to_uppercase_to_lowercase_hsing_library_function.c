 //WAP_05_lowercase_to_uppercase_using_library_function

#include <stdio.h>
#include<ctype.h>
int main(void)
{
    char lower;
    printf("Enter The lower Letter : ");
    scanf("%c",&lower);

    char upper = toupper(lower);//library function

    printf("The lower Letter : %c",upper);
    
    return 0;
}

//WAP_05_uppercase_to_lowercase_using_library_function

#include <stdio.h>
#include<ctype.h>
int main(void)
{
    char upper;
    printf("Enter The upper Letter : ");
    scanf("%c",&upper);

    char lower = tolower(upper);//library function

    printf("The lower Letter : %c",lower);
    
    return 0;
}