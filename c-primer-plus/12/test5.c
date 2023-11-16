#include<stdio.h>
#include<stdlib.h>

void bubble(int num[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(num[j]<num[j+1])
            {
                num[j]=num[j+1]^num[j];
                num[j+1]=num[j+1]^num[j];
                num[j]=num[j+1]^num[j];
            }
        }
    }
}

int main()
{
    int num[100];
    for(int i=0;i<100;i++)
    {
        num[i]=rand()%10+1;
    }
    bubble(num,100);
    for(int i=0;i<100;i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}