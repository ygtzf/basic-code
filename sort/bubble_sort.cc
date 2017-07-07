#include "bubble_sort.h"

// 冒泡排序, 从数组的第一个index开始, 依次和后面的所有index元素比较, 遇到比自己大的就替换位
// 置, 这样一趟下来第一个index就是最小的。
void bubble_sort(int* t, int size)
{
    int tt = 0;

    for (int i=0; i<size-1; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (t[i] > t[j])
            {
                tt = t[j];
                t[j] = t[i];
                t[i] = tt;
            }
        }
    }
}
