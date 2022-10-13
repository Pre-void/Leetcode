//
// Created by 13016 on 2022/10/9.
//
//
// Created by 13016 on 2022/10/9.
//
#include "iostream"
#include "vector"
#include "map"
using namespace std;

/**    哈希表 map计数
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = 0;
        int result = 0,count=0;
        map<int,int> mp;
        vector<int>::iterator it;
        map<int,int>::iterator mapit;
        for (it = nums.begin(); it != nums.end() ; it++) {
            temp = *it;
            if (mp.count(temp)>0){
                mp[temp] += 1;
            } else{
                mp[temp] = 1;
            }
        }
        for (mapit = mp.begin(); mapit != mp.end() ; mapit++) {
            if (count < mapit->second){
                count = mapit->second;
                result = mapit->first;
            }
        }
        return result;
    }
};**/

/**   分治法，首先我们要知道将数组进行二分后有左右两个子数组，两个子数组各自的众数中的一个必为整个数组的众数。
 * 自顶向下将整个数组不断二分，直至子数组长度为1返回，然后回溯，合并左右子区间，如果左右子区间的众数相等则为该众数，若不相等则分别计算两个众数在整个数组出现的次数，大的为整个数组的众数。
class Solution {
public:
    int count(vector<int> & nums,int target,int low,int high){
        int count = 0;
        for (int i = low; i <= high; ++i) {
            if (nums[i]==target){
                count++;
            }
        }
        return count;
    }
    int marjority_element_rec(vector<int> & nums,int low,int high){
        if (low==high){
            return nums[low];
        }
        int mid = (low+high)/2;
        int left_marjority = marjority_element_rec(nums,low,mid);
        int right_marjority = marjority_element_rec(nums,mid+1,high);
        if (count(nums,left_marjority,low,high)>(high-low+1)/2){
            return left_marjority;
        }
        if (count(nums,right_marjority,low,high)>(high-low+1)/2){
            return right_marjority;
        }
        return -1;

    }


    int majorityElement(vector<int>& nums) {
        return marjority_element_rec(nums,0,nums.size()-1);
    }
};
**/
/**投票算法令众数为+1，非众数为-1，全部加起来和明显大于0
 * 维护一个candidate与count，遍历数组，若当前num与candidate相同则count+1，若不同则count-1，若count小于0，则置当前num为candidate，count置为1。
 *
 * 若当前candidate不为众数，则包含众数以及其他非众数都会反对当前candidate，结果小于0时会下台换届。
 * 若当前candidate为众数，则所有的众数都会支持当前candidate，结果大于0，一定可以成功当选**/
class Solution{
    public:
        int majorityElement(vector<int>& nums) {
            int candidate = -1;
            int count = 0;
            vector<int>::iterator it;
            for (it = nums.begin();  it != nums.end(); it++) {
                if (candidate==*it){
                    count++;
                } else if (--count < 0){
                    candidate = *it;
                    count = 1;
                }
            }
            return candidate;
        }
};



int main(){
    int element = 0;
    int result = 0;
    char end;
    vector<int> vi;

    while (cin >> element){
        vi.push_back(element);
        cin.get(end);
        if (end!=' '){
            break;
        }
    }

    Solution * solution = new Solution();


    result = solution->majorityElement(vi);

    cout << result << "\n";

    return 0;
}