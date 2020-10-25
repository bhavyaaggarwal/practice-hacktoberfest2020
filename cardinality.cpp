#include<stdio.h>
#include<conio.h>

int main()
{
    int a[20];
    int i, j , m, temp, k, p;
    printf("enter the size of set a: ");
    scanf("%d", &m);
    
    printf("\nenter the elements of set a: \n");
    for(i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("entered set : ");
    for(i=0; i<m; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
    for(i-0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[j] == a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    for(i=0; i<m; i++)
        {
            for(j=i+1; j<m; )
            {
                if(a[j] == a[i])
                {
                    for(p= j; p<m; p++)
                    {
                        a[p] = a[p+1];
                        
                    }
                    m--;
                }
                else
                {
                    j++;
                }
            }
        }
    
    printf("\ncardinality of set is: ");
    printf("%d", m);
    getch();
    return 0;
}
