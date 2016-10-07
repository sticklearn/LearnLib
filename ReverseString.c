#include <string.h>

char* reverseString(char* s) {
	if (s == NULL || *s == NULL)
    	return s;
    
	int l = strlen(s);
	char temp;
    
	for (int i = 0; i < l / 2; i++){
   		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
    }
	
	return s;   
}
