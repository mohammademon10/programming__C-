


//#include<stdio.h>
typedef struct p *q;

struct p
{
    int x;
    char y;
    q ptr;
};

int main()
{
    struct p p = {1, 2, &p};
    printf("%d\n", p.ptr->x);
    return 0;
}
