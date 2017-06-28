#include "common.h"

// 简单选择排序, 从数组首元素开始, 依次和后面的所有元素比较, 遇到比自己大的就替换位
// 置, 这样一趟下来找到了最大或最小的.
void simple_select_sort(int* t, int size)
{
    int tt = 0;

    for (int i=0; i<size; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (t[i] < t[j]) 
            {
                tt = t[j];
                t[j] = t[i];
                t[i] = tt;
            }
        }
    }
}
