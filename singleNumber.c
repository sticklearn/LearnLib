/* Given an array of integers, every element appears twice except for one. Find that single one. */


int singleNumber(int* nums, int numsSize) {
    int sum;
    
	sum = 0;

	for (int i = 0; i < numsSize; i++)
        sum = sum ^ nums[i];
    
	return sum;
}
