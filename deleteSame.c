/* delete the same element in an array */


void deleteSame(int *a, int len)
{
	if(len == 0)
		return;
	//sort(a);
  int i, j;
	for (i = 0, j = 1; j < len; j++) {
		if (a[i] != a[j]){
			i++;
			a[i] = a[j];		
		}
	}
	return;
}
