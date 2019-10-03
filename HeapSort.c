#include<stdio.h>

void Swap(int *a,int *b)
{
    int p = 0;
    p = *b;
    *b = *a;
    *a = p;
}

void Justdown(int *a, int n, int parent)
{
    
    int child = parent * 2 + 1;
    int temp = 0;
    while(child < n)
    {
        if((child + 1 < n) && a[child + 1] > a[child])
        {
            ++child;
        }
        if(a[child] > a[parent])
        {
            Swap(&a[child], &a[parent]);
            parent = child;
            child = parent * 2 + 1;
        }
        else
        {
            break;
        }
    }
}

void HeapSort(int *a, int n)
{
    int t = 0,i = 0;
    int end = n - 1;
    for (i = (n - 2) / 2; i >= 0; i--)
    {
        Justdown(a, n, i);
    }
    while(end > 0)
    {
        Swap(&a[end], &a[0]);
        Justdown(a, end, 0);
        end--;
    }
    for(t = 0; t < n; t++)
    {
        printf("%d",a[t]);
    }
    printf("\n");


}
int main()
{
    int array[] = {5,1,6,3,7,9,3,4,5};
    int length = sizeof(array) / sizeof(array[0]);
    HeapSort(array,length);
    return 0;
}
