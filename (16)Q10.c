#include<stdio.h>
int main()
{
    int a[3][3],i,j,cnt=0,max=0;
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
            if(a[i][j]==1)
            {
                cnt++;
            }
        }
        if(cnt>max)
            {
                max=i+1;
            }
        printf("\n");
    }

        printf("\nRow %d has maximum number of 1s.\n",max);

        \
    return 0;

}




