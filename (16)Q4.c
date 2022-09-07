#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the elements of matrix.\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Given matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    for(i=0;i<3;i++)
    {
       sum=sum+a[i][i];
    }
    printf("Sum of right diagonal = %d",sum);
    return 0;
}


