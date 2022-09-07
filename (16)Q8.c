#include<stdio.h>
int main()
{
    int a[3][3],i,j;
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

    printf("Lower triangular of given matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<i)
            {
             printf(" 0 ");
            }
            else
            {
            printf(" %d ",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}



