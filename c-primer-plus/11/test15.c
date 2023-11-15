#include<stdio.h>

int atoi(char *word)
{
    char *num=(char *)word;
    while(*num)
    {
        if(*num>='0'&&*num<='9')
        {
            num++;
        }
        else if(*num)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    char word[n+1];
    scanf("%s",word);
    int end=atoi(word);
    if(end==0)
    {
        printf("字符串不是纯数字\n");
    }
    else
    {
        printf("输入的字符串为纯数字\n");
    }
    return 0;
}