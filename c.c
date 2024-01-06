#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    
}
void bubblesort(int a[],int n){
    int i,j;
    for(i=0;i<=n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(a[j]>a[j+1])
    swap(&a[j],&a[j+1]);

    }
void printarray(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
}
int main(){
    int a[]={34,67,87,9,1,3,4};
    int size=sizeof(a)/sizeof(a[0]);
    bubblesort(a,size);
    printf("sorted array\n");
    printarray(a,size);
    printf("\nkusum 210304124278");
    return 0;


}



