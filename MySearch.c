

int binarySearch(int e, int a[], int n)
{
	//sort(a);
	int low, high, mid;
	int i = -1;
	
	low = 0;
	high = n - 1;
	mid = (higt + low) / 2;
	
	while(low < high){
		if (a[mid] == e)
			i = mid;
		else if (a[mid] < e){
			low = mid;
			mid = (high + low) / 2; 
		} else{
			high = mid;
			mid = (high + low) / 2;			
			}
	}	
	return i;
}
