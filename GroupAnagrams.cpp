#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        vector<vector<string> > res;
        vector<std::string> vec(strs);
        std::string tmp_i;
        std::string tmp_j;
        for(int i = 0; i < strs.size(); i++){
            tmp_i = vec[i];
            for (int j = 1; j < strs.size(); j++){
                tmp_j = vec[j];
                if (sort(tmp_i.begin(), tmp_i.end()) == sort(tmp_j.begin(), tmp_j.end())){
                    
                }
            }
        }
        return res;
    }
};


// /["eat","tea","tan","ate","nat","bat"]

int main(){
    Solution ss;
    std::vector<string> str;
    //["eat","tea","tan","ate","nat","bat"]
    str.push_back("eat");
    str.push_back("tea");
    str.push_back("tan");
    str.push_back("ate");
    str.push_back("nat");
    str.push_back("bat");
    ss.groupAnagrams(str);
}
