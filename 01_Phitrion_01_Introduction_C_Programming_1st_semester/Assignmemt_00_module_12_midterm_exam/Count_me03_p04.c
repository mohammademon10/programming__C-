#include<stdio.h>
int main()
{
    // Input the number of test cases
    int T;
    scanf("%d", &T);
    
 
   
    
    
 for (int i = 0; i < T; i++)
     {
        // Input the string
     char S[10001];
     scanf("%s",S);

     int capital_count=0;
     int small_count=0;
     int digit_count=0;

      for (int i = 0; S[i] != '\0'; i++) 
      {
        
        if (S[i] >= 'A' && S[i] <= 'Z') 
        {
            capital_count++;
        }
        
        else if (S[i] >= 'a' && S[i] <= 'z')
         {
            small_count++;
         }
        
        else if (S[i] >= '0' && S[i] <= '9')
         {
            digit_count++;
         }
      }
       printf("%d %d %d\n", capital_count, small_count, digit_count);
    }
    return 0;
    
}