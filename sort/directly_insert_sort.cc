#include "directly_insert_sort.h"

// 直接插入排序，从前往后依次来排序，保证待排序之前的序列是有序序列，然后比较当
// 前待排序元素依次从当前index往前比较，只要比自己小的，就将那个元素后移，并继
// 续比较，直到比比较元素大，也就找到了自己的位置。
void directly_insert_sort(int *arry, int size)
{
    int i, base, j;

    for(i=1; i<size; i++)
    {
        base = arry[i];
        j = i - 1;

        while((j>0) && (base < arry[j]))
        {
            arry[j+1] = arry[j];
            j--;
        }

        arry[j+1] = base;
    }

    return;
}
