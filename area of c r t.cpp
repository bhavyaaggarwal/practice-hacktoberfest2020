#include<stdio.h>
#include<conio.h>
int main()
{
	float ar;
	int ch;
	printf("enter 1 for circle");
	printf("enter 2 for rectangle");
	printf("enter 3 for triangle");
	printf("enter the value of ch");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			float r;
			printf("enter the value of r");
			scanf("%f",&r);
			ar=3.14*r*r;
			printf("%f",ar);
			break;
		case 2:
			int l,be;
			printf("enter the value of l and be");
			scanf("%d%d",&l,&be);
			ar=l*be;
			printf("%f",ar);
			break;
		case 3:
			int a,b,c;
			printf("enter the value of a,b and c");
			scanf("%d%d%d",&a,&b,&c);
			ar=(a+b+c)/2;
			printf("%f",ar);
			break;
		default:
			printf("wrong value entered");
	}
	getch();
	return 0;
	
}
