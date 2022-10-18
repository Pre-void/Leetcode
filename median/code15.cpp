//
// Created by 13016 on 2022/10/18.
//

#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/**最笨的方法，三重循环遍历，最后用哈希表去重**/



/**双指针法
 * 第二轮循环中，iterator2指针在右移的过程中，iterator3的指针必定左移，假设当前三个指针指向的数字为abc，若a+b+c=0，iterator2右移后得b`,b`>b,则iterator3只能右移才存在a+b`+c`=0的情况
 * 所以问题转化成了双指针问题，第二三轮循环简化为一轮循环，第三轮变为了一直左移的指针，而第一轮循环不变
 * 其实相当于第一轮循环每次固定了第一个数，问题转为二数求和，第二轮循环使用双指针法找其他两个数**/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        vector<int>::iterator iterator1,iterator2,iterator3;

        for (iterator1 = nums.begin(); iterator1 !=nums.end() ;  iterator1++) {
            vector<int> temp;
            if (iterator1>nums.begin()&&*iterator1==*(iterator1-1)){  //iterator1>nums.begin()防止ite-1越界
                continue;
            }
            iterator3 = --nums.end();
            for (iterator2 = iterator1+1; iterator2 != nums.end() ; iterator2++) {
                if (iterator2>iterator1+1&&*iterator2==*(iterator2-1)){ //iterator2>iterator1+1的目的是存在 iterator1和iterator2指向的值相同当还未遍历这种情况，如果直接continue这种情况就略过了
                    continue;
                }
                while (iterator2<iterator3&&*iterator1+*iterator2+*iterator3>0){
                    iterator3--;
                }
                if (iterator2==iterator3){
                    break;
                }
                if (*iterator1+*iterator2+*iterator3==0){
                    temp.push_back(*iterator1);
                    temp.push_back(*iterator2);
                    temp.push_back(*iterator3);
                    result.push_back(temp);
                    temp.clear();
                }
            }
        }
        return result;
    }
};

//-1 0 1 2 -1 -4

int main(){
    int input;
    char end;
    vector<int> vi;
    vector<vector<int>> result;
    while (cin>>input){
        vi.push_back(input);
        cin.get(end);
        if (end!=' '){
            break;
        }
    }
    Solution * solution = new Solution();

    result = solution->threeSum(vi);

    for (int i = 0; i < result.size(); ++i) {

        for (int j = 0; j < result[0].size(); ++j) {
            cout  <<  result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


}