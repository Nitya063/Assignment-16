#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter the elements of first matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("Sum of given matrices:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
