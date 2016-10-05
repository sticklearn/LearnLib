/* MySort.c */


/* select sort */
void SelectionSort(int *a, int len)
{
	if (len <= 1)
		return ;
	int i, j;
	int temp;
	int small;
	/* O(n^2) */
	for (i = 0; i < len - 1; i++) {
		small = i;
		for (j = i; j < len; j++) {
			/* 
			time(len) =  (len - 1) * (len + 2) / 2  
			*/
			if (a[j] < a[small]) {
				small = j; 
			} //if
		} // j
			temp = a[small];
			a[small] = a[i];
			a[i] = temp;
	}// i
}



