#include <malloc.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    if (numbersSize <= 0){
        *returnSize = 0;
        return NULL;
    }
    
    
    int* result = (int *)malloc(sizeof(int) * 2);
    int i, start, end, mid, sum;
	
	for (i = 0; i < numbersSize - 1; i++) {
		sum = target - numbers[i];
		start = i + 1;
		end = numbersSize - 1;
		while (start <= end) {
			mid = (start + end) / 2;
			if (numbers[mid] == sum)
				break;
			else if (numbers[mid] < sum)
				start = mid + 1;
			else
				end = mid - 1;
		}
		if (numbers[mid] == sum)
			break;	
	}
	result[0] = i + 1;
	result[1] = mid + 1;
    *returnSize = 2;
	return result;
}
