#include<stdio.h>
#include<string.h>
 
int main()
{
    char a='0';
    int count=0;
    while(a=getchar()!=EOF)
    {
        count++;
        getchar();
    }
    printf("%d\n",count); 
    return 0;
}