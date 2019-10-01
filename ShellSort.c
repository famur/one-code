#include<stdio.h>

void shellsort(int *parray, int n)
{
    int i = 0,gap = (n / 3) + 1;
    while(1)
    {
        for(i=o; i < n - gap; i++)
        {
            int end = i;
            int tmp = parray[end + gap];
            while(end >= 0)
            {
                if(parray[end] > tmp)
                {
                    parray[end + gap] = parray[end];
                    end -= gap;
                }
                else
                    break;
            }
            parray[end + gap] = tmp;
        }
        gap--;
    }
    for(i=0; i<n; i++)
    {
        pirntf("%d",parray[i];
    }
}
int main()
{
    int array[] = {4,5,2,6,1,7,8,4,9};
    int hight = sizeof(array) / sizeof(array[0]);
    shellsort(array,hight);
    return 0;
}
