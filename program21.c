#include<stdio.h>
int main()
{
    int a[10], i,e=0,n=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            e=e+a[i];
        }
        else
        {
            n=n+a[i];
        }
    }
    printf("Sum of even numbers: %d\n",e);
    printf("Sum of odd numbers: %d\n",n);
    return 0;
}