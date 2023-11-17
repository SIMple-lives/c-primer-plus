#include<stdio.h>

int * make_array(int elem,int val)
{
    int *num=(int *)malloc(elem*sizeof(int));
    for(int i=0;i<elem;i++)    
    {
        num[i]=val;
    }
    return num;
}

void show_array(const int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
        if((i+1)%8==0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

int main()
{
    int *pa;
    int size;
    int value;
    printf("Enter the number of elements:\n");
    while(scanf("%d",&size)==1&&size>0)
    {
        printf("Enter the initialization value:\n");
        scanf("%d",&value);
        pa=make_array(size,value);
        if(pa)
        {
            show_array(pa,size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit):\n");
    }
    printf("Done\n");    
    return 0;
}