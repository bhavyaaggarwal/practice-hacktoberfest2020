#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int binary_search(int[],int,int);
int main()
{
    int a[10],i,m,search,num,pos;
    printf("enter the size of array: ");
    scanf("%d",&m);
    printf("enter elements in array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search");
    scanf("%d",&search);
    pos=binary_search(a,m,search);
    if(pos==-1)
    exit(1);
    printf("Element found at %d position.",pos+1);
    
    getch();
    return 0;
}
int binary_search(int a[],int m,int search)
{
    int lb=0,ub=m-1,mid;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==search){
        //printf("element found=%d",search);
		return mid;}
        else if(a[mid]>search)
        {
            ub=mid-1;
         
        }
        else{
            lb=mid+1;
          
        }
    }
    if(lb>ub)
    printf("not found");
    return (-1);
}

