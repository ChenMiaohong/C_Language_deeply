#include<stdio.h>
int main()
{
    char a[5]={'A','B','C','D'};
    char (*p3)[5]=&a;
    char (*p4)[5]=a;
    printf("%d\n",(p3+1));
    printf("%d\n",(p4+1));
    printf("%d\n",a+1);
    printf("%d\n",&a+1);

}
