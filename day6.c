/*Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array)

Output:
- Print unique elements only, space-separated

Example:
Input:
6
1 1 2 2 3 3

Output:
1 2 3

Explanation: Keep first occurrence of each element: 1, 2, 3*/
#include<stdio.h>
int main()
{
    printf("Enter the number of elements you want in the array:\n");
    int n;
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("is the array sorted?\n");
    printf("press 1 if not sorted or press 2 if sorted");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        int k=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                arr[k]=arr[i];
                k++;
            }
        }
        for(int i=0;i<k;i++)
        {
            printf("/n%d ",arr[i]);
        }
    }
    else
    {
        int k=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]!=arr[i-1])
            {
                arr[k]=arr[i];
                k++;
            }
        }
        for(int i=0;i<k;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}