#include<stdio.h> 
int main(){ 
     
     int n,count=1; 
     scanf("%d",&n); 
      
     int a[n]; 
      
     for(int i = 0; i < n; i++) 
     { 
         scanf("%d",&a[i]); 
     } 
     for(int i = 1; i<n; i++){ 
         if(a[i]!=a[i-1])
         { 
         count++;
         } 
          
     } 
    printf("%d\n",count); 
     
    return 0; 
}

/*

Input	
20
1 1 1 1 1 2 2 2 2 2 3 3 5 5 6 6 7 7 8 8
output	
7
Here she has 7 different types of height in her army, that is 1, 2, 3, 5, 6, 7 and 8.

Therefore she will divide the army in 7 groups.

*/