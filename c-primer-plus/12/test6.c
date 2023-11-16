#include<stdio.h>
#include<stdlib.h>

int main()//不用数组存储生成的随机值.
{
    int count[11]={0};
    for(int i=0;i<1000;i++)
    {
        count[rand()%10+1]++;
    }
    for(int i=1;i<=10;i++)
    {
        printf("%d=%d\n",i,count[i]);
    }
    return 0;
}

/* int main()
{
   /*  srand((signed int)time(NULL));
    int n=rand()%10+1;
    printf("%d",n); */
   /* int num[1000];
    srand((signed int)time(NULL));//这里是用时间戳来构造随机数，确保生成的随机数不同
    for(int i=0;i<1000;i++)//这里用到了数组来存储生成的随机值
    {
        num[i]=rand()%10+1;
    }
    int count[11]={0};
    for(int i=0;i<1000;i++)
    {
        count[num[i]]++;
    }
    for(int i=1;i<=10;i++)
    {
        printf("%d=%d\n",i,count[i]);
    }
    return 0;
} */