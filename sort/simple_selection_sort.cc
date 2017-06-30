
//简单选择排序，双层循环，每一轮找到一个最下的元素的index，然后将当前index的值
//和最小值替换。
void simple_selection_sort(int *arry, int size)
{
    int t;
    int i, j;
    int min;
    for (i=0; i<size-1; i++)
    {
        min = i;
        for (j=i+1; j<size; j++)
        {
            if (arry[min] > arry[j])
            {
                min = j;
            }
        } 

        if (i != min)
        {
            t = arry[i];
            arry[i] = arry[min];
            arry[min] = t;
        }
    }
}
