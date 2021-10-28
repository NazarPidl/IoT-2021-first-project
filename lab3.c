#include <stdio.h>


int main()
{
    int a[] = {4,6,2,2,5,3};
    int left_half = 0;
    int right_half = 0;
    for(int x=0;x<=2;x++)
    {
        left_half += a[x];
    }

    for(int y=3;y<=5;y++)
    {
        right_half += a[y];
    }

    int added_number;
    if(left_half>right_half)
    {
        added_number = left_half - right_half;
        printf("Щоб збалансувати масив, потрібно до елемента другої половини масиву додати %d", added_number);
    }
    if(right_half>left_half)
    {
        added_number = right_half - right_half;
        printf("Щоб збалансувати масив, потрібно до елемента першої половини масиву додати %d", added_number);
    }
}