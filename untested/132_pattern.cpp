#include <iostream>

int nums[] = {3, 1, 4, 2};

int main(){
    // size_t leng = sizeof(nums)/sizeof(nums[0]);
    // for (int i; i < leng-2; i++){
    //     int l = nums[i];
    //     int m = nums[i+1];
    //     int r = nums[i+2];
    //     if (l < r && r < m){
    //         std::cout << "true" << std::endl;
    //     }
    // }
    // std::cout << "false" << std::endl;
    if (nums.size() < 3) {
            return false;
        }
        vector<int> min_array(nums.size());
        min_array[0] = nums[0];

        for (size_t i = 1; i < nums.size(); i++) {
            min_array[i] = min(min_array[i - 1], nums[i]);
        }
        int k = nums.size();
        for (size_t j = nums.size() - 1; j > 0; j--) {
            if (nums[j] <= min_array[j]) {
                continue;
            }
            auto it = lower_bound(nums.begin() + k, nums.end(), min_array[j] + 1);
            k = it - nums.begin();
            if (k < nums.size() and nums[k] < nums[j]) {
                return true;
            }
            nums[--k] = nums[j];
        }
        return false;
}
