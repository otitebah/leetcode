#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        set<int> arr_set(nums.begin(), nums.end());
        set<int>::iterator it_set = arr_set.begin();
        map<int,int> frequence;
        vector<int> all_values;
        for (it_set = arr_set.begin() ;it_set != arr_set.end(); it_set++){
            int count = 0;
            for (int i = 0; i < nums.size(); i++){
                if (*it_set == nums[i]){
                    count++;
                }
            }
            frequence[*it_set] = count;
        }
        map<int, int>::iterator fr;
        for (fr = frequence.begin(); fr != frequence.end(); fr++)
            all_values.push_back(fr->second);
        sort(all_values.begin(), all_values.end());
        vector<int>::iterator itall_values = all_values.end() - 1;
        vector<int> res;
        map<int, int>::iterator fr1;
        for (; itall_values >= all_values.begin(); itall_values--){
            if (k > res.size()){
                for(fr1 = frequence.begin(); fr1 != frequence.end(); fr1++){
                    if(fr1->second == *itall_values){
                        res.push_back(fr1->first);
                        frequence.erase(fr1->first);
                        break;
                    }
                }
            }
        }
        return res;
    }
};


int main(){
    Solution s;
    vector<int> nums;
    nums.push_back(1);      //   | 1 | 1 | 1 | 2 | 2 | 3 |  
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(5);
    std::vector<int> res =  s.topKFrequent(nums, 5);

    for (size_t i = 0; i < res.size(); i++){
        std::cout << "rees = " <<  res[i] << std::endl;
    }

}