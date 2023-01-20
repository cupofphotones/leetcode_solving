class Solution {
public:
    int countOdds(int low, int high) {
        if (low % 2 == 0 && high % 2 == 0){
            return (((high - low) + 1) - 1) / 2;
        } 
        if (low % 2 != 0 && high % 2 != 0){
            return (((high - low) + 1) + 1) / 2;        
        }
        if ((low % 2 != 0 && high % 2 == 0) || (low % 2 == 0 && high % 2 != 0)){
            return ((high - low) + 1) / 2;
        }
        return 0;
    }
};
