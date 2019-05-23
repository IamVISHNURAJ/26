#include<stdio.h>
int main( void)
{
int n,a[100],i,k,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(k=i+1;k<n;k++)
    {
        if(a[i]>a[k])
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    }
