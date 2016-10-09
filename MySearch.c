

int binarySearch(int e, int *a, int n)
{
	//sort(a);
	int low, high, mid;
	int i = -1;
	
	low = 0;
	high = n - 1;
		
	while(low <= high){
		mid = (higt + low) / 2; 
		if (a[mid] == e)
			i = mid;
		else if (a[mid] < e)
			low = mid + 1;
		 else
			 high = mid - 1;
			
	}	
	return i;
}
