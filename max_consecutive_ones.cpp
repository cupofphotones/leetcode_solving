#include <iostream>

int main(){
	int nums[] = {1,1,0,1,1,1};
	int leng = sizeof(nums)/sizeof(nums[0]);
	int left = 0;
    int right = 0;

    for (int i; i < leng-1; i++){

    	if (nums[i+1] = 1){
    		right = i+1;
    	}

    	else{
    		right = 0;
    	}
    }
    std::cout << left << std::endl;
    std::cout << right << std::endl;
    std::cout << right - left + 1 << std::endl;
    return right - left + 1;
}