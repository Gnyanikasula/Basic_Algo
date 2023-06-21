#include <stdio.h>

int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int temp,t;
    int i = (l-1);
    for(int j =l;j<r;j++)
    {
        if(arr[j]<= pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
    }
    t=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]= t;
    return (i+1);
}
void quicksort(int arr[],int l, int r)
{
    if(l<r)
    {
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);

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
    int arr[] = {8,7,2,1,0,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted Array\n");
    printarray(arr,n);
    quicksort(arr,0,n-1);
    printf("Sorted Array\n");
    printarray(arr,n);
    return 0;

}
