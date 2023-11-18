#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
  cout<<n;
int *a=new int[n];

for(int i=0;i<n;i++){
cin>>a[i];
}

for(int i=0;i<n/2;i++){
  a[i]=a[i]+a[10-i-1];
  a[10-i-1]=a[i]-a[10-i-1];
  a[i]=a[i]-a[10-i-1];

}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";

  return 0;
}
