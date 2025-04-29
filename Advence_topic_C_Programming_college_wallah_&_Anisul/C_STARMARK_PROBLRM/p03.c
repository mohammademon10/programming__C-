#include <stdio.h>

int main() {
    char X;
    
    // Input
    scanf("%c", &X);

    if(X >= 'a' && X <= 'z')
     {
       //lower case to upper case 
         printf("%c\n", X - 32);
    }
     else //else if(X >= 'A' && X <= 'Z')
    {
        // upper case to lowercase
        printf("%c\n", X + 32);
    }
    
    return 0;
}
