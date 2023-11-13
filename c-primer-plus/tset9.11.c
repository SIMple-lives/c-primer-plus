#include<stdio.h>
#include<string.h>

double my_pow(double num,int n)
{
    double endcount=1;
    while(n--)
    {
        endcount*=num;
    }
    if(n>0)
    {
        return endcount;
    }
    else if(n==0)
    {
        return 1;
    }
    else
    {
        return 1/endcount;
    }
}

/* double my_pow(double num,int n)//负数冥生成错误.
{
    double endcount=1;
    if(n>0)
    {
        while(n--)
        {
            endcount*=num;
        }
        return endcount;
    }
    else if(n==0)
    {
        return endcount;
    }
    else
    {
        while(n--)
        {
            endcount*=num;
        }
       endcount=1/endcount;
       return endcount;
    }
} */

int main()
{
    double num=0.0;
    scanf("%lf",&num);
    int n=0;
    scanf("%d",&n);
    double end=my_pow(num,n);
    printf("%lf\n",end);
    return 0;
}

/* int fib(int n)
{
    int a=1;
    int b=1;
    int c=1;
    if(n==1)
    {
        return c;
    }
    else
    {   
        n-=2;
        while(n--)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int num=fib(n);
    printf("%d\n",num);
    return 0;
} */

/* int fib(int n)//递归如果参数过大的话，重复的运算量过于庞大，可以考虑迭代。
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int num=fib(n);
    return 0;
}
 */
/* void sort(double *a,double *b,double *c)
{
    if(*a>*b)
    {
        double tmp=*a;
        *a=*b;
        *b=tmp;
    }
    if(*a>*c)
    {
        double tmp=*a;
        *a=*c;
        *c=tmp;
    }
    if(*b>*c)
    {
        double tmp=*b;
        *b=*c;
        *c=tmp;
    }
}

int main()
{
    double min=0.0;
    double mid=0.0;
    double max=0.0;
    scanf("%lf %lf %lf",&min,&mid,&max);
    sort(&min,&mid,&max);
    printf("min=%lf\tmid=%lf\tmax=%lf\n",min,mid,max);
    return 0;
} */

/* double com(double a,double b)
{
    return a<b?a:b;
}

int main()
{
    double x=0.0;
    double y=0.0;
    scanf("%lf %lf",&x,&y);
    double min=com(x,y);
    printf("%lf\n",min);
    return 0;
} */

/* char get_first()
{
    char b; 
    do
    {
        b=getchar();
        getchar();
    }while(b!=' ');
    return b;
}

int main()
{
    char a=get_first();
    printf("%c\n",a);
    return 0;
}
 */
/* int main()
{
    char a;
    int word[129]={0};
    do
    {
        a=getchar();
        word[a]++;
        getchar();
    }while(a!=EOF);//linux中Ctrl+d表示EOF
    for(int i=0;i<=128;i++)
    {
        if(word[i]!=0)
        {
            printf("%c : %d\n",i,word[i]);
        }
    }
    return 0;
} */