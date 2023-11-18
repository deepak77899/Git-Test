// Himanshu sharma 
// 523110018
// group 1
#include<iostream>
using namespace std;
int main()

{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0,j=n-1;
    for(i=0;i<n/2;i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
