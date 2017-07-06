#include "common.h"

int main(int argc, char **argv)
{
    int a[] = {1, 3, 2, 8, 6, 5, 9, 10, 4, 15, 7, 13};
    int num = 0;

    //TODO: how can I get the length of a arrary of int type
    //bubble_sort(a, 12);
    //simple_selection_sort(a, 12);
    //quick_sort(a, 12);
    //directly_insert_sort(a, 12);
    shell_sort(a, 12);
    
    sort_print(a, 12);
}
