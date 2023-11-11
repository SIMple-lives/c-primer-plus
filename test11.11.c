#include<stdio.h>
#include<string.h>
 
int main()
{
    char a='0';
    int count=0;
    while(a=getchar()!='0')
    {
        count++;
        getchar();
    }
    printf("%d\n",count); 
    return 0;
}

/* int main()
{
    char a='0';
    printf("请输入一个大写字母:\n");
    scanf("%c",&a);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%c",a+j);
        }
        for(int j=i;j>0;j--)
        {
            printf("%c",a+j-1);
        }
        printf("\n");
    }
    return 0;
}
 */
/* int main()
{
    char a='A';
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",a);
            a++;
        }
        printf("\n");
    }
    return 0;
} */

/* int main()
{
    char a='F';
    for (int i=0 ;i<6;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",a-j);
        }
        printf("\n");
    }
    return 0;
} */

/* int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("$ ");
        }
        printf("\n");
    }
    return 0;
} */

/* double count(double n)
{
    double m=n*n*n;
    return m;
}

int main()
{
    double num=0.0;
    printf("请输入一个double类型的值:\n");
    scanf("%lf",&num);
    double sum=count(num);
    printf("%lf\n",sum);
} */

/* #define fenzhong 60
int main()
{
    int const minute=0;
    do
    {
    printf("请输入时间:\n");
    scanf("%d",&minute);
    printf("%d小时 %d分钟\n",minute/fenzhong,minute%fenzhong);
    }while(minute);
    return 0;
} */

//int main() 
//{
//    char first[20];
//    char last[20];
//    int len=strlen(first);
//    int j=len+3;
//    scanf("%s %s",last ,first);
//    printf("%s\n",last);
//    printf("%s\n",first);
//    printf("'\n");
//    printf("\"%20s\"\n",first);
//    printf("\"\n");
//    printf("\"%-20s\"\n",first);
//    printf("%js\n",first);
//    return 0;
//}