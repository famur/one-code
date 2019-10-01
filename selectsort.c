#include<stdio.h>

void selectsort(int *parray, int n)
{
    int begin = 0,end = n - 1;
    int t = n;
    while(begin < end)
    {
        int i = begin;
        for(i = begin; i<t; i++)
        {
            if(parray[end] < parray[i])
            {
                int p = 0;
                p = parray[end];
                parray[end] = parray[i];
                parray[i] = p;
            }
            if(parray[begin] > parray[i])
            {
                int p = 0;
                p = parray[begin];
                parray[begin] = parray[i];
                parray[i] = p;
            }
        }
        begin++;
        end--;
        t = t - 2;
    }
}
int main()
{
    int array[] = {4,5,6,1,9,2,4,7,6,9,2,1};
    int hight = sizeof(array) / sizeof(array);
    selectsort(array,hight);
    return 0;
}
