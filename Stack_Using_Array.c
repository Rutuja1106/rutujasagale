/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define LENGTH  4
int arr[LENGTH] = {0};
 char end = -1;
 char front = -1;
 char arr_idx = 0 ;
int  push(int num )
{
    if(end == -1 && front ==-1)
    {
       // printf("stack is empty \n");
        arr[arr_idx] =  num ;
        arr_idx++;
        end++;
        front++;
    }
    else if ((front + 1) == LENGTH )
    {
        printf("Stack is full\n ");
        return 0; 
    }
    else
    {
        arr[arr_idx] = num ; 
        arr_idx++;
        front++;
    }
    
}
int pop(void)
{
   if(end == -1 && front ==-1)
    {
       // arr_idx = 0;
        printf("stack is empty \n");
       // return 0; 
    }
    else if (end ==0 && front ==0 )
    {
        arr[front] = 0;
        front--;
        end-- ;
        arr_idx--;
        
    }
    else
    {
        arr[front] = 0;
        front--;
        arr_idx--;
    }
}
void display()
{
    printf("array elements \n");
    for(int i = 0 ;i< arr_idx ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int inp; 
    int number =0 ;
    printf("len = %d\n ", LENGTH);
   while(1)
   {
       printf("Choose option \n");
       printf("press 1 to push \n press 2 pop \n press 3 to exit \n");
       scanf("%d",&inp);
       switch(inp)
       {
           case 1:
                    printf("Enter number \n");
                    scanf("%d", &number);
                    push(number);
                    display();
            break;
            case 2:
                    pop();
                    display();
            break;
            case 3:
            break;
            default:
            break;
       }
   }
    

    return 0;
}
