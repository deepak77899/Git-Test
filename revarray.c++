#include<iostream>
using namespace std;
int main(){
      int temp,n;
      int arr[100];
      cout<<"enter size of array";
      cin>>n;
      cout<<"\n enter  "<<n<<" elements:";
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      
      for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

      }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }


    return 0;
}
