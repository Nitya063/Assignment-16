#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumr=0,sumc=0;
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
        sumr=0;
        sumc=0;
        for(j=0;j<3;j++)
        {
           sumr=sumr+a[i][j];
           sumc=sumc+a[j][i];
        }
        printf("Sum of row %d = %d\n",(i+1),sumr);
        printf("Sum of column %d = %d\n",(i+1),sumc);
    }
    return 0;
}


