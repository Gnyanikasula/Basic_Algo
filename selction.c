#include <stdio.h>

void selectionsort(int arr[],int n)
{
    int i,j,mid,temp;
    for(i=0;i<n-1;i++)
    {
        mid = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mid])
            {
                mid = j;

            }

        }
        temp = arr[mid];
        arr[mid] = arr[i];
        arr[i] = temp;
    }
}
void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}
int main()
{
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    printf("Sorted Array\n");
    printarray(arr,n);
    return 0;
}
