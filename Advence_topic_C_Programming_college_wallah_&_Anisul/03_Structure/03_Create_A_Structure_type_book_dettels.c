#include <stdio.h>
struct book
{
    char* name;
    int price;
    int page;
}b1,b2,b3;

int main()
{
    //book1
    b1.name ="Dopamin Detox";
    b1.price = 150;
    b1.page =120;
    printf("Book One infomation:\n");
    printf("Book Nmae: %s\n",b1.name);
    printf("Book Price: %d\n",b1.price);
    printf("Book Page: %d\n",b1.page);

    //book2
    b2.name ="Atomic Habits";
    b2.price = 250;
    b2.page =200;
    printf("\nBook One infomation:\n");
    printf("Book Nmae: %s\n",b2.name);
    printf("Book Price: %d\n",b2.price);
    printf("Book Page: %d\n",b2.page);

    //book3
    b3.name ="IKIGAIA";
    b3.price = 100;
    b3.page =160;
    printf("\nBook One infomation:\n");
    printf("Book Nmae: %s\n",b3.name);
    printf("Book Price: %d\n",b3.price);
    printf("Book Page: %d\n",b3.page);
  
  return 0;
}