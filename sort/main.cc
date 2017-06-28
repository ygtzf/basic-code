#include "common.h"

int main(int argc, char **argv)
{
    int a[] = {1, 3, 2, 8, 6, 5, 9};
    int num = 0;

    //TODO: how can I get the length of a arrary of int type
    simple_select_sort(a, 7);
    
    sort_print(a, 7);
}
