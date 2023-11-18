#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1;i<(n+1)/2;i++,j--)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Reversed Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    return 0;
}


