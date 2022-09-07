#include<stdio.h>
int main()
{
    int a[3][3],i,j,czero=0;
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
            if(a[i][j]==0)
            {
                czero++;
            }
        }
        printf("\n");
    }
    if(czero>(9/2))
        printf("\n It is a Sparse matrix.\n");
    else
        printf("\n It is not a Sparse matrix.\n");
    return 0;

}



