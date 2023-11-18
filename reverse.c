#include<stdio.h>
int main()
{
int tmp,size,i,j,*arr;
printf("enter a size of array");
scanf("%d",&size);
arr=calloc(sizeof(int),size);
printf("enter element in array");
fotr(i=0;i<size;i++)
scanf("%d",arr+i);
for(i=0;j=size-1;i<j;i++,j--)
{
    tmp=*(arr+i);
    (arr+i)=(arr+j);
    *(arr+j)=tmp;
}
printf("after a reversing the array");
for(i=0;i<size;i++)
printf("%d",*(arr+i));
return0;
}