#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],n,data,i,t;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++){
	
	scanf("%d",&a[i]);
}

printf("enter the data to be deleted");
scanf("%d",&data);
for(i=0;i<n;i++)
if(a[i]==data)
{
	t=a[i];
a[i]=a[i+1];
a[i+1]=t;

}
for(i=0;i<n-1;i++)
{
	printf("%d",a[i]);
}
getch();
return 0;
}
