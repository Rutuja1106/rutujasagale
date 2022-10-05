

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i =0 ;
    int j =0 ;
    int sum;
    int *arrayOfSum = NULL;
    
    for( i=0; i<numsSize; i++)
    {
        for( j=i+1; j<numsSize; j++)
        {
            sum = nums[i] + nums[j];
            
            if (sum == target)
            {
                arrayOfSum = malloc(2*sizeof(int));
                arrayOfSum[0] = i;
                arrayOfSum[1] = j;
                //printf("i= %d j = %d sum = %d target = %d\n", i, j, sum, target);
            }
        }
    }
    
    *returnSize = 2;
    //printf("final ans: %d %d\n", arrayOfSum[0], arrayOfSum[1]);
    return arrayOfSum;
}