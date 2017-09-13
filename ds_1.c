//用户手动输入n个数字，并把输入的n个数字倒叙输出
#include<stdio.h>
#define M 20
void fun(int *x,int n)
{
    int *p  = NULL;
    int m   = n/2;
    int *i  = NULL;
    int *j  = NULL;
    int tmp = 0;
    
    i=x;
    j=x+n-1;
    p=x+m;
    
    for(;i<p;i++,j--)
    {
        tmp = *i;
        *i  = *j;
        *j  = t;
    }
}
void main( void )
{
    int i,a[M],n;
    printf("\nEnter n:\n");
    scanf("%d",&n);
    printf("The original array:\n");
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    fun(a,i);
    printf("\nThe array inverted:\n");
    for(i=0;i<n;i++)
        printf("%d  ",*(a+i));
}
