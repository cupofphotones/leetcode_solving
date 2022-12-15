#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    std::vector<int> nums = {3,3};
    int target = 6;
    std::vector<int> res;

    int sz = nums.size();
    int i = 0;
    while (i < sz){
        int j = 0;
        while (j < sz){
            int sum = nums[i] + nums[j];
            if (sum == target && i != j){
                res = {i, j};
            }
        j++;
        }
    i++;
    }
    std::sort(res.begin(), res.end());
    for (int k: res){
        std::cout << k << " ";
    }
}
