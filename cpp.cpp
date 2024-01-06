#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
    if(a[j]>a[j+1])
    swap(&a[j],&a[j+1]);
    }
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main(){
    int a[]={34,2,4,7,86,46,30,23,0};
    int size=sizeof(a)/sizeof(a[0]);
    bubblesort(a,size);
    printarray(a,size);
    return 0;


}