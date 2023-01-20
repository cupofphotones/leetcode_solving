class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];
        int min = salary[0];
        int sum = 0;
        int i = 0;
        double sze = salary.size();
        while (i < salary.size()) {
            if (salary[i] > max) {
                max = salary[i];
            }
            if (salary[i] < min) {
                min = salary[i];
            }
            sum += salary[i];
            i++;
        }
        return (sum - min - max) / (sze-2);
    }
};
