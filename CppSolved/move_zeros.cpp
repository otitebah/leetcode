#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> tmp;
        // sort(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0)
                count++;
            else
                tmp.push_back(nums[i]);
        }
        cout << "count = " << count << endl;
        nums.clear();
        nums = tmp;
        while (count > 0){
            nums.push_back(0);
            count--;
        }
        // for (int i = 0; i < nums.size(); i++){
        //     cout << "-->" << nums[i] << endl;
        // }
    }
};


int main(){
    Solution ss;

    std::vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    // arr.push_back(0);
    // arr.push_back(1);
    // arr.push_back(1);

    ss.moveZeroes(arr);
    
    cout << "Output is :" << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << endl;
}


