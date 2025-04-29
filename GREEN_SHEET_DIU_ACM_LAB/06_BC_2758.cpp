 #include<bits/stdc++.h>
using namespace std;
int main()
{
   float A,B;
   double C,D;
   cin>>A>>B;
   cin>>C>>D;

   cout << "A = " << A << ", B = " << B <<endl;
   cout << "C = " << C << ", D = " << D <<endl;

   //1 decemal palces
   cout << fixed << setprecision (1) ;
   cout << "A = " << A << ", B = " << B <<endl;
   cout << "C = " << C << ", D = " << D <<endl;
   
   //2 decemal palces
   cout << fixed << setprecision (2) ;
   cout << "A = " << A << ", B = " << B <<endl;
   cout << "C = " << C << ", D = " << D <<endl;

    //3 decemal palces
   cout << fixed << setprecision (3) ;
   cout << "A = " << A << ", B = " << B <<endl;
   cout << "C = " << C << ", D = " << D <<endl;

    // Output in scientific(e) notation with three decimal places
    cout << scientific << uppercase << setprecision(3);
    cout << "A = " << A << ", B = " << B <<endl;
    cout << "C = " << C << ", D = " << D <<endl;

   // Output with no decimal places
   cout << fixed << setprecision (0) ;
   cout << "A = " << A << ", B = " << B <<endl;
   cout << "C = " << C << ", D = " << D <<endl;


    return 0;
}


/*#include<stdio.h>
int main(void)
{

float A,B;
double C,D;
scanf("%f%f",&A,&B);
scanf("%lf%lf",&C,&D);
printf("A = %f, B = %f\nC = %lf, D = %lf\n",A,B,C,D);

printf("A = %0.1f, B = %0.1f\nC = %0.1lf, D = %0.1lf\n",A,B,C,D);

printf("A = %0.2f, B = %0.2f\nC = %0.2lf, D = %0.2lf\n",A,B,C,D);

printf("A = %0.3f, B = %0.3f\nC = %0.3lf, D = %0.3lf\n",A,B,C,D);

printf("A = %0.3E, B = %0.3E\nC = %0.3E, D = %0.3E\n",A,B,C,D);
//the form of scientific notation with the character E;

printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n",A,B,C,D);


return 0;


}*/