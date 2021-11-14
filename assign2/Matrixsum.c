#include<stdio.h>
int main()
{
    int row,column,i,j,sum=0,a[100][100];
    printf("enter the number of row value:");
    scanf("%d",&row);
    printf("enter the number of column value:");
    scanf("%d",&column);

    printf("enter the array elements\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n");
    printf("\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("a[%d][%d]:%d\t",i,j,a[i][j]);
        }
        printf("\n");
    }
//sum
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            sum+=a[i][j];
        }
    }
    printf("sum of the matrix is %d\n",sum);

//biggest
    int max=a[0][0];
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(max<a[i][j])
                max=a[i][j];
        }
    }
    printf("Biggest element is %d\n",max);

//diagonal sum
    int dig1=0;
    if(row==column)
    {
//right
        for(i=0; i<row; i++)
        {

            for(j=0; j<column; j++)
            {
                if(i==j)

                    dig1+=a[i][j];
            }
        }
        printf("right diagonal element sum is %d\n",dig1);

//left
        int dig2=0;
        int k=row;
        for(i=0; i<row; i++)
        {
            k=k-1;
            for(j=0; j<column; j++)
            {
                if(j==k)
                    dig2+=a[i][j];
            }
        }
        printf("left diagonal element sum is %d\n",dig2);
        int dig=dig1+dig2;
        printf("diagonal element sum is %d\n",dig);

//transpose
        printf("\n the transpose of matrix is\n");
        for(i=0; i<row; i++)
        {
            for(j=0; j<column; j++)
            {
                printf("%d\t",a[j][i]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("the entered array is not square matrix to find the diagonal elements\n");
    }

    return 0;
}
