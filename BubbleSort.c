#include<stdio.h>
 
void BubbleSort(int *parray,int n)
{
    int i = 0, t = 0;
    int flag = 0;
    for(i = 0; i < n; i++)
    {
        for(t = 1; t < n; t++)
        {
            if(parray[t-1] > parray[t])
            {
                int p = 0;
                p = parray[t];
                parray[t] = parray[t-1];
                parray[t-1] = p;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    for (t = 0; t < n; t++)
    {
        printf("%d",parray[t]);
    }
}

int main()
{
    int array[] = {5,1,7,8,3,9,4,2,5};
    int length = sizeof(array) / sizeof(array[0]);
    BubbleSort(array,length);
    return 0;
}
