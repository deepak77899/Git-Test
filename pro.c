#include <stdio.h>   //pavan modi 
                    //R.n. 523410005
int main(){
  int n;
  printf("enter size  of arrry");
  scanf("%d",&n);
int a[n];
printf("\nelement of arry");
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);

 int temp;
 for(int i=0;i<n/2;i++)
 {
temp=a[n-i-1];
a[n-i-1]=a[i];
a[i]=temp;
 }

 for(int i=0;i<n;i++)
 printf(" %d  ",a[i]);
  return 0;
} 