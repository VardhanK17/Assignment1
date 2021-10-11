#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the order of 2D matrix\n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter the elements of 2D array\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    int c=m*n;
    int b[c],flag=0;
    printf("The Inital 2D Array is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[flag]=a[i][j];
            flag++;
        }
    }
    printf("\nThe Final 1D array is:\n");
    for(int i=0;i<c;i++)
        printf("%d ",b[i]);
}
