#include<stdio.h>
#include<string.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    char word[n+2];
    fgets(word,n+2,stdin);//这里用到了fgets这个函数，第一个参数为要写入的数组，第二个参数为写入的字符个数，
    //第三个参数为数据的来源，stdin为标准的从键盘输入
    //n+2是因为scanf后会输入一个空格，而这个空格被fgets读入数组.
    for(int i=0;i<=n;i++)
    {
        printf("%c ",word[i]);
    }
    printf("\n");
    return 0;
}

/* void myinput(char word[],int n)
{
    for(int i=0;i<n+1;i++)
    {
        word[i]=getchar();
        
    }
} */

/* void myinput(char *word,int n)//这里用指针来接收数组的首元素地址.
{
    for(int i=0;i<n+1;i++)
    {
        *(word+i)=getchar();
    }
} */

/* int main()
{
    int n=0;
    scanf("%d",&n);
    char word[n+2];
    myinput(word,n);
    for(int i=0;i<n+1;i++)
    {
        printf("%c ",word[i]);
    }
    printf("\n");
    return 0;
} */