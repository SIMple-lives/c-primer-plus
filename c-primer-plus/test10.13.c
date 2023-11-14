#include<stdio.h>

void init(double *num)
{
    for(int i=0;i<5;i++)
    {
        scanf("%lf",num);
        num++;
    }
}

void initnum(double num[5],double num1[5])
{
    for(int i=0;i<5;i++)
    {
        num[i]=num1[i];
    }
}

double average(double a[5])
{
    double sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    sum/=5;
    return sum;
}

double amax(double num[3][5])
{
    double sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum+=num[i][j];
        }
    }
    sum/=15;
    return sum;
}

int main()
{
    double num1[5];
    double num2[5];
    double num3[5];
    init(num1);
    init(num2);
    init(num3);//来替代下面的重复赋值操作
   /*  for(int i=0;i<5;i++)
    {
        scanf("%lf",&num1[i]);
    }
    for(int i=0;i<5;i++)
    {
        scanf("%lf",&num1[i]);
    }
    for(int i=0;i<5;i++)
    {
        scanf("%lf",&num1[i]);
    } */
    double num[3][5];
    initnum(num[0],num1);
    initnum(num[1],num2);
    initnum(num[2],num3);
    /* for(int i=0;i<5;i++)
    {
        printf("%lf ",num1[i]);
    } */
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%lf ",num[i][j]);
        }
        printf("\n");
    }
    double avera[3];
    for(int i=0;i<3;i++)
    {
        avera[i]=average(num[i]);
    }
    double amaxa=amax(num);
    for(int i=0;i<3;i++)
    {
        printf("%lf ",avera[i]);
    }
    printf("\n");
    printf("%lf\n",amaxa);
    return 0;
}

/* void copy(double (*num)[3],double (*copynum)[3])//数组指针指向一个数组，double *num[3],这是一个数组指针.
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(copynum+i)+j)=*(*(num+i)+j);
        }
    }
} */

/* void copy(double num[3][3],double copynum[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            copynum[i][j]=num[i][j];
        }
    }
} */

/* int main()
{
    double num[3][3]={{1.0,2.0,3.0},{4.0,5.0,6.0},{7.0,8.0,9.0}};
    double copynum[3][3];
    copy(num,copynum);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%lf ",copynum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
 */
/* void sort(double num[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int max=i;
        for(int j=i;j<n;j++)
        {
            if(num[max]<num[j])
            {
                max=j;
            }
        }
        if(max!=i)
        {
            double tmp=num[max];
            num[max]=num[i];
            num[i]=tmp;
        }
    }
}

int main()
{
    int n=0;
    scanf("%d",&n);
    double num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&num[i]);
    }
    sort(num,n);
    for(int i=0;i<n;i++)
    {
        printf("%lf ",num[i]);
    }
    printf("\n");
    return 0;
} */

/* void copy_arr(double arra[5],double arrb[5],int n)
{
    for(int i=0;i<n;i++)
    {
        arra[i]=arrb[i];
    }
}

void copy_ptr(double *arra,double *arrb,int n)
{
    for(int i=0;i<n;i++)
    {
        *arra=*arrb;
        arra++;
        arrb++;
    }
}

void copy_str(double arra[5],double arrb[5],double *a)
{
    for(int i=4;i>=0;i--)
    {
        a--;
        arra[i]=*a;
        //a--;这样初始化target3[4]时指向的就是数组start[4]后面的一个变量，这是一个未定义行为.
    }
}
 
int main()
{
    double start[5] = {1.1, 2.2, 3.3 ,4.4 ,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,start,5);
    copy_ptr(target2,start,5);
    copy_str(target3,start,start+5);
    for(int i=0;i<5;i++)
    {
        printf("%lf ",target1[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%lf ",target2[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%lf ",target3[i]);
    }
    printf("\n");
    return 0;
} */

/* struct count
{
    int numb;
    int sum;
};

int add(int m)
{
    int x=0;
    while(m)
    {
        x+=m%10;
        m/=10;
    }
    return x;
}

 int main()
{
    int a=123;
    int b=add(a);
    printf("%d\n",b);
    return 0;
} */ 

/*  void bubble(struct count arr[],int m)
{
    for(int i=0;i<m-1;i++)
    {
        for(int j=0;j<m-1-i;j++)
        {
            if(arr[j].sum<arr[j+1].sum)
            {
              arr[j].numb=arr[j].numb^arr[j+1].numb;
              arr[j+1].numb=arr[j].numb^arr[j+1].numb; 
              arr[j].numb=arr[j].numb^arr[j+1].numb;   
              arr[j].sum=arr[j].sum^arr[j+1].sum;
              arr[j+1].sum=arr[j].sum^arr[j+1].sum; 
              arr[j].sum=arr[j].sum^arr[j+1].sum;   
            }
            else if(arr[j].sum==arr[j+1].sum&&arr[j].numb>arr[j+1].numb)
            {
              arr[j].numb=arr[j].numb^arr[j+1].numb;
              arr[j+1].numb=arr[j].numb^arr[j+1].numb; 
              arr[j].numb=arr[j].numb^arr[j+1].numb;   
              arr[j].sum=arr[j].sum^arr[j+1].sum;
              arr[j+1].sum=arr[j].sum^arr[j+1].sum; 
              arr[j].sum=arr[j].sum^arr[j+1].sum;   
            }
        }
    }
}
 */
/* int main()
{
    int n=0;
    scanf("%d",&n);
    int num[n];
    struct count arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++)
    {
        arr[i].sum=add(num[i]);
        arr[i].numb=num[i];
    }
    bubble(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",arr[i].numb,arr[i].sum);
    }
    return 0;
} */