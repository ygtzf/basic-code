#include "shell_sort.h"

/*
void shell_sort(int *array, int size)
{
    int i, j, k, base;

    for (i=size/2; i>0; i/=2)
    {
        for (j=i; j<size; j++)
        {
            base = array[j];
            k = j - i;

            while((k>0) && (base < array[k]))
            {
                array[k+i] = array[k];
                k -= i;
            }

            array[k+i] = base;
        }
    }

    return;
}
*/

//希尔排序: 将待排序列分割为多个子序列，然后每个子序列进行直接插入排序，
//当然直接插入排序不是按照原始的一步一步来比较、插入，
//而是，以开始分割的长度来跳跃式的比较、插入。

//这个是和插入排序完全一样的逻辑，除了多了一个step参数，
//函数中将原来直接插入排序中的所有1的地方改为step了，也就是可变步长
void shell_insert_sort(int *array, int size, int step)
{
    int i, j, base;

    for (i=step; i<size; i++)
    {
        base = array[i];
        j = i - step;

        while((j>0) && (base < array[j]))
        {
            array[j+step] = array[j];
            j -= step;
        }

        array[j+step] = base;
    }
}

void shell_sort(int * array, int size)
{
    int i;
    for (i=size; i>0; i/=2)
    {
        shell_insert_sort(array, size, i);
    }

    return;
}
