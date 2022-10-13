//
// Created by 13016 on 2022/10/8.
//
#include <iostream>
#include "vector"
#include "set"
#include "map"
using namespace std;


/** 位运算  异或操作  异或操作满足交换律与结合律
 * class Solution {
public:
    int singleNumber(vector<int> & nums) {
        int ret = 0;
        vector<int>::iterator it;
        for (it = nums.begin(); it != nums.end(); it++) {
            ret ^= *it;
        }
        return ret;
    }
};**/

/**   可重复set  multiset  若不重复放入若重复删除
class Solution {
public:
    int singleNumber(vector<int> & nums) {
        int ret = 0;
        vector<int>::iterator it;
        multiset<int> set;
        multiset<int>::iterator mit;
        for (it = nums.begin(); it !=nums.end() ; it++) {
            int temp = *it;
            if (set.find(temp)==set.end()){
                set.insert(temp);
            } else{
                set.erase(temp);
            }
        }
        return *(set.begin());
    }
};
**/

/**  哈希表 map**/
class Solution {
public:
    int singleNumber(vector<int> & nums) {
        int ret = 0;
        vector<int>::iterator it;
        map<int,int> mp;
        map<int,int>::iterator mit;
        for (it = nums.begin(); it != nums.end() ; it++) {
            if (mp.count(*it)>0){
                mp[*it] += 1;
            } else{
                mp[*it] = 1;
            }
        }

        for (mit = mp.begin();  mit != mp.end() ; mit++) {
            if ((*mit).second==1){
                return mit->first;
            }
//            cout << mit->first << mit->second << endl;
        }
        return ret;
    }
};



int main() {

    int m = 0;
    int result = 0;
    char chr;
    vector<int> vi;

    while (cin>>m)
    {
        vi.push_back(m);  // 添加元素  push_back(elem)在数组最后添加数据
        cin.get(chr);
        if (chr != ' ')   // 按下回车后结束输入
            break;
    }





//    vector<int>::iterator it;
//    for (it=vi.begin();it!=vi.end();it++)
//        cout << *it<< endl;

    Solution * solution = new Solution();

    result = solution->singleNumber(vi);

    cout << result << "\n";

    return 0;
}
