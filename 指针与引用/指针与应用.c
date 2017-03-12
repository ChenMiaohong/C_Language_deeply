#include<stdio.h>
int add(int a)
{
    a=a+1;
    return a;
}

int main()
{
    int a=99;
    printf("add(a)%d\n",add(a));

}
