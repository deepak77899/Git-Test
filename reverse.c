//Domendra Singh Komra
//523110015

#include<stdio.h>
#include<stdlib.h>
int main()
{
  
    int temp,n,*a;
    printf("domendra , 523110015");
    printf("\nEnter size of array  :");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        printf("\n start with first element: ",i); //index
        scanf("%d",a+i);
        
    }
    printf("\ninput array :");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    printf("\nreversed array : ");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);


}