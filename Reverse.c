#include<stdio.h>
int main(){

    int a[]={5,7,8,9,4};

    int size=sizeof(a)/sizeof(a[0]);

    int b[size];

    int *pointer = *(a+0);
    int temp;
    
    while((size/2)!=0){
        temp=*pointer;
        *pointer=a[size-1];
        a[size-1]=temp;
        pointer++;
        size--;
    }

    for(int i=0;i<size;i++){
        printf("%d ", *(b+i));
    }
}