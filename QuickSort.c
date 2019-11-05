#include<stdio.h>

void Swap()
{
    int p = 0;
    p = *b;
    *b = *a;
    *a = p;
}

int PartSort(int *parray, int left, int right)
{
    int begin = left;
    int end = right;
    int key = parray[left];
    while(begin < end)
    {
        while(begin < end && parray[end] >= key)
        {
            --end;
        }
        while(begin < end && parray[begin] <= key)
        {
            ++begin;
        }
        Swap(&parray[left], &parray[end]);
        return end;

    }

}

int PartSort2(int *parray, int left, int right)
{
    int key = parray[left];
    int bengin =left;
    int end = right;
    while(begin < end)
    {
        while(begin < end && parrya[end] >= key)
        {
            --end;
        }
        Swap(&parray[begin], &parray[end]);
        while(begin < end && parray[begin] <= key)
        {
            ++begin;
        }
        Swap(&parray[begin],&parray[end]);
    }
    parray[end] = key;
    return end;
}

int PartSort3(int *parray, int left, int right)
{
    int mid = GetMidNum(parray, left, right);
    Swap(&parray[mid], &parray[left]);
    int cur = left + 1;
    int prev = left;
    right++;
    while(cur < right)
    {
        if(prev <= cur && parray[cur] <= parray[left])
        {
            prev++;
            Swap(&parray[cur], &parray[prev]);
        }
        cur++;
    }
    Swap(&parray[left], &parray[prev]);
    return prev;
}

void QuickSort(int *parray, int left, int right)
{
    if(left >= right)
    {
        return ;
    }
    int div = PartSort3(parray, left, right);
    QuickSort(parray, left, div - 1);
    QuickSort(parray, div + 1, right);

}

int main()
{
    int array[] = {4,5,5,9,1,0,3,7,8};
    int hight = sizeof(array) / sizeof(array[0]);
    int t = hight - 1;
    QuickSort(&array, 0, t);
    return 0;
}
