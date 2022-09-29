/*

Write a recursive function that receives an array of arbitrary size and
print the elements in reverse order.

*/

#include <stdio.h>

void print_reverse(const int arr[], int size)
{
   if(size == 0)
   {
       return;
   }

        printf("%d ", arr[size-1]);
       
        print_reverse(arr, size-1);
}

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("Original array : \n");
	for(int i=0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    print_reverse(arr, sizeof(arr)/sizeof(arr[0]));
}

