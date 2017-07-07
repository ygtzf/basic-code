#include "quick_sort.h"

//快速排序，将数组先二分法取中间的值，然后比较前后的值，保证每一轮左边的比中间
//的数小，后边的数比中间的大，最后采用递归的方式分别再对序列做同样的处理.
//step 1：先找递归的结束条件，就是排序数组的长度只有1个元素，自然就递归结束
//step 2：找排序数组的中间值
//step 3：进入循环，同时从数组的开头和结束进行相向移动，并找到第一个比中间值小
//的元素，替换之
//step 4：循环的结束条件：前面的index移动到和后面的index相遇时，停止循环
//step 5：分别递归前后两个数组，注意后一个数组的其实位置，是arry[0]+i，数组长度
//是size-i
void quick_sort(int *arry, int size)
{
    if (size < 2)
        return; 

    int i = 0, j, temp, mid;
    mid = arry[size/2];

    for (i=0, j=size-1;;i++, j--)
    {
        while(arry[i] < mid)
            i++;

        while(arry[j] > mid)
            j--;

        if (i >= j)
            break;

        temp = arry[i];
        arry[i] = arry[j];
        arry[j] = temp;
    }

    quick_sort(arry, i);
    quick_sort(arry+i, size-i);

    return; 
}
