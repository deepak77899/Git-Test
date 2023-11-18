/* Name - Deepak
   Roll No. 523110009
   Group-1st 
   Que.1 Reverse an array.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n/2;j++){
        int temp=a[j];
        a[j]=a[n-j-1];
        a[n-j-1]=temp;
    }
    cout<<"Array in reverse order:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
}