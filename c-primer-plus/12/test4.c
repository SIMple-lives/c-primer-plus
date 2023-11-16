#include<stdio.h>

int test(int a)
{
   static int m=0;
   m++;
    /*code*/
    return m;
}

int main()
{
    int count=0;
    int a=0;
    do
    {
        scanf("%d",&a);
        count=test(a); /* code */
        printf("%d\n",count);
    } while (a);
    
    return 0;
}