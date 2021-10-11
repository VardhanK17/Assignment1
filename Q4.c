#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void selection_sort(long long int a[],long long int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int p=a[j];
                a[j]=a[i];
                a[i]=p;
            }
        }
    }
    printf("Array after performing Selection sort:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return;
}
void bubble_sort(long long int a[],long long int n)
{
    int flag=1;
    while(flag<n)
    {
        for(int i=0;i<n-flag;i++)
        {
            if(a[i]>a[i+1])
            {
                int p=a[i];
                a[i]=a[i+1];
                a[i+1]=p;
            }
        }
        flag++;
    }
    printf("Array after performing bubble sort:\n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return;
}
int main()
{
    printf("Enter the no of elements:\n");
    long long int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    clock_t start1,end1;
    long int t1;
    start1=clock();
    selection_sort(a,n);
    end1=clock();
    t1=end1-start1;
    printf("Total time elapsed for selection sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
    clock_t start2,end2;
    long int t2;
    start2=clock();
    bubble_sort(a,n);
    end2=clock();
    t2=end2-start2;
     printf("Total time elapsed for bubble sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
}
