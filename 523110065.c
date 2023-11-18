#include<stdio.h>
int main()
{
    int a[5];
    int temp,*ptr;
    ptr=&temp;
    printf("Devendra Suthiya , 523110065");
    printf("Enter 5 elements :");
    for(int i=0;i<5;i++)
    {
        printf("\nEnter %d index element : ",i);
        scanf("%d",a+i);
        
    }
    printf("\narray intially :");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
    for(int i=0;i<5/2;i++)
    {
        *ptr=a[i];
        a[i]=a[4-i];
        a[4-i]=*ptr;
    }
    printf("\nArray after reverse : ");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);


}