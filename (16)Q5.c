#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the elements of matrix\n");
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
    for(i=0,j=2;i<3,j>=0;i++,j--)
    {
             sum=sum+a[i][j];
    }
    printf("Sum of left diagonal = %d",sum);
    return 0;
}



