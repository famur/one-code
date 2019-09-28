#include<stdio.h>

void InsertSort(int *parray, int n)
{

    int i = 0;
    for(i = 0; i < n-1; i++)
    {
        int end = i;
        int tmp = parray[end+1];
        while(end >=0)
        {
            if(parray[end]>tmp)
            {
                parray[end+1]=parray[end];
                end--;
            }
            else
                break;
        }
        parray[end+1]=tmp;
    }
    for(i=0; i<n; i++)
    {
        printf("%d",parray[i]);
    }
}

int main()
{
    int array[]={2,3,4,5,6,6,7,8,9};
    int length= sizeof(array)/sizeof(array[0]);
    InsertSort(array,length);
    return 0;
}
