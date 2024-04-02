// star print in row and column format (rectangle form )
#include <stdio.h>
int main()
{
    int a;
    printf("enter the column :");
    scanf("%d",&a);
    int n;
    printf("enter the row :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n");
        for(int i=1;i<=a;i++)
        {
            printf("* ");
        }
    }
    return 0;
}