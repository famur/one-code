#include<stdio.h>

void Justdown(int *parray, int n, int p)
{
    int i = 0;
    int child = i * 2 + 1;
    while(child < n)
    {
        int child = i * 2 + 1;
        if((child + 1 < n) && parray[child + 1] > parray[child])
        {
            ++child;
        }
        if(parray[child] > parray[i])
        {
            int max = 0;
            max = parray[child];
            parray[child] = parray[i];
            parray[i] = max;
        }
        else
        {
            break;
        }
        i++;
    }
}
int main()
{
    return 0;
}
