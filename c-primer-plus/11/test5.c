#include<stdio.h>

char * my_str(char *word,char *find)//模拟实现字符串寻找函数,strstr,
{
    char *cp=(char *)word;//用来记录开始比较的那个起始位置
    char *s1,*s2;
    if(!*find)
    {
        return NULL;
    }
    while(*cp)
    {
        s1=cp;//s1与s2为比较的指针变量
        s2=(char *)find;
        while(*s1 && *s2 && !(*s1-*s2))//当s1与s2相等的时候开始向后进行比较.
        {
            s1++;
            s2++;
        }
        if(!*s2)
        {
            return cp;//如果s2变为'\0'时代表已经找到该子串，所以返回记录开始比较位置的指针.
        }
        cp++;
    }
    return (NULL);
}

char * firstword(char *word,char a)
{   
    char *cp=(char *)word;
    while(*cp)
    {
        if(*cp==a)
        {
            return cp;
        }
        cp++;
    }
    return (NULL);  
}

int main()
{
    int n=0;
    scanf("%d",&n);
    char word[n+1];
    fgets(word,n+1,stdin);
    for(int i=0;i<n;i++)
    {
        printf("%c",word[i]);
    }
    printf("\n");
    int m=0;
    scanf("%d",&m);
    char find[m];
    scanf("%s",find);
    getchar();
    char a;
    a=getchar();
    char *out=my_str(word,find);
    char *first=firstword(word,a);
    if(out!=NULL)
    {
        printf("%s\n",out);
    }
    if(first!=NULL)
    {
        printf("%c\n",a);
    }
    return 0;
}