#include <stdlib.h>
int main(){
  int tmp,size,i,j,*arr;
  printf("Enter size of array:");
  scanf("%d",&size);
 
  arr=calloc(sizeof(int),size);
  printf("Enter elements in array: ");
  for(i=0;i<size;i++)
    scanf("%d",arr+i);
    
  for(i=0,j=size-1;i<j;i++,j--){
    
    tmp=*(arr+i);
    *(arr+i)=*(arr+j);
    *(arr+j)=tmp;
  }
  
  printf("After reversing the array: ");
  for(i=0;i<size;i++)
    printf("%d ",*(arr+i));
  
  return 0;
}