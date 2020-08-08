#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


void swap(int *ap, int *bp)
{
    int buffer1 = *ap;
    *ap = *bp;
    *bp = buffer1;
}
void test()
{
    int arr1[16] = {32,53,675,242,876,43,3,86,42,342,11,14,32,67,3,52};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    printf("the size of n %d \n", len);
    void swap(int *ap, int *bp);
    //swap(arr1, arr1 + 1);
    //printf("The swapped item is %d, %d", *arr1, *(arr1 + 1));
    for(int i = 1; i<len; i++)
    {
        int count = 0;
        int k = i;
        for(int j = i-1; j >= 0; j--)
        {
            if(arr1[k]< arr1[j]){
                swap(arr1+k, arr1+j);
                k -= 1;
            }
        }
    }

    for(int i = 0; i<len; i++)
    {
        printf("%d ", arr1[i]);
    }


}

int main() 
{
    test();    // no need the void
    system("pause");
    return 0;
}