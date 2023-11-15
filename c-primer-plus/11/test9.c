#include<stdio.h>

void turn(char word[],int n)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        char tmp=word[left];
        word[left]=word[right];
        word[right]=tmp;
        left++;
        right--;
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();//这里的getchar()用来读取缓存区中的在输入数字或字符之后的'\n'。scanf读取到空格或'\n'结束，但空格和'\n'并没有销毁，而是留在了缓存区，所以在后续的scanf就会直接读取。
    //所以使用getchar()来读取缓存区中的空格或'\n'。
    char word[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%c",&word[i]);
        getchar();
    }
    //printf("%c",n);
    //turn(word,n);
    for(int i=0;i<n;i++)
    {
        printf("%c",word[i]);
    }
    printf("\n");
    //当遇到倒序输出数组当中的内容时，为了不改变原来数组的内容，我们一种方法是创建一个新的数组来逆序存放原数组的内容，
   /*  char turn[n+1];
    int j=n-1;
    for(int i=0;i<n;i++,j--)
    {
        turn[i]=word[j];
    }
    for(int i=0;i<n;i++)
    {
        printf("%c\n",turn[i]);
    } */
    //我们也可以直接从原数组的最后一位变量开始输出，然后倒着输出。
    int j=n-1;
    for(int i=j;i>=0;i--)
    {
        printf("%c",word[i]);
    }
    printf("\n");
    //如果是整形数组，记得翻转之后要去除前导0,即原数组后面的0.
    return 0;
}