#include<iostream>
using namespace std;
int main(){
int *a=new int[10];

for(int i=0;i<10;i++){
cin>>a[i];

}

for(int i=0,j=9;i<j;i++,j--){
  a[i]=a[i]+a[j];
  a[j]=a[i]-a[j];
  a[i]=a[i]-a[j];

}
for(int i=0;i<10;i++)
cout<<a[i];

}
