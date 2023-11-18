#include<stdio.h>
#include<stdlib.h>
int main()
{
  
    int temp,n,*a;
    printf("Devendra Suthiya , 523110065");
    printf("\nEnter capacity of array  :");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter %d index element : ",i);
        scanf("%d",a+i);
        
    }
    printf("\narray intially :");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("\nArray after reverse : ");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);


}