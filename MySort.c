#include <stdio.h>

/* select sort */
void SelectSort(int *a, int len)
{
	int i, j;
	int temp;
	int small;
	
	for (i = 0; i < len - 1; i++) {
		small = i;
		for (j = i; j < len; j++) {
			if (a[j] < a[small]) {
				small = j; 
			} //if
		} // for, j
			temp = a[small];
			a[small] = a[i];
			a[i] = temp;
	}// for, i
}



