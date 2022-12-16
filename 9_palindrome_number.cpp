class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }
        int y = x;

	    int len = 1;
	    while ( y /= 10 )
		    len++;

	    int a[len];
	    int j = 0;

	    while (x) {
		    a[j++] = x % 10;
		    x /= 10;
	    }

	    int offset = len/2;

	    int right[10] = {0};
	    int left[10] = {0};

	    int i = 0;
	    while(i < offset){
		    right[i] = a[i];
		    left[i] = a[len-1-i];
		    i++;
	    }

	    for (int k = 0; k < offset; k++){

		    if (right[k] != left[k])
			    return false;
	    }
        return true;
    }
};
