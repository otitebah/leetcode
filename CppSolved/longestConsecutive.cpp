#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        std::vector<int> res;
        int count = 1;
        for (int i = 0; i < nums.size() - 1; i++){
            if ((nums[i] + 1) == nums[i + 1])
                count++;
            else{
                res.push_back(count);
                count = 1;
            }
        }
        res.push_back(count);
        sort(res.begin(), res.end());
        return *(res.end() - 1);
    }
};



int main(){
    vector<int> nums;
    //[0,3,7,2,5,8,4,6,0,1]
    //[1,2,0,1]
    // nums.push_back(1);
    // nums.push_back(2);
    // nums.push_back(0);
    // nums.push_back(1);
    nums.push_back(5);
    nums.push_back(8);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(0);
    nums.push_back(1);

    Solution ss;

    int i = ss.longestConsecutive(nums);
    cout << "the result is  = " << i << endl; 
}

