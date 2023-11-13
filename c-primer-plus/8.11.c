#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char a;
    int big=0;
    int small=0;
    do
    {
        a=getchar();
        if(islower(a))
        {
            small++;
        }
        else if(isupper(a))
        {
            big++;
        }
    } while (a!='&');
    
    printf("big=%d small=%d\n",big,small);
    return 0;
}


/* int main()
{
    char a='0';
    int count=0;
    while(a=getchar()!='&')
    {
        count++;
        getchar();
    }
    printf("%d\n",count); 
    return 0;
} */