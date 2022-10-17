//
// Created by 13016 on 2022/10/17.
//
#include "iostream"
#include "map"
#include "string"

using namespace std;


/** 遍历，每日在num中找有无当前对应的最大的数字，有则减去结果加上数字对应的字符，没有就下一个字符。
 *
 * 建立一个数字字符串对应表，从最大的数字与对应的字符开始遍历，每次比较num与当前数字的大小，若比当前数字大则num-=数字，结果添加当前字符，否则退出当前字符循环，下一个字符开始循环。
class Solution {
public:
    map<int,string,greater<int>> mp;

    string intToRoman(int num) {
        string result = "";
        map<int,string>::iterator it;
        for (it = mp.begin();  it!= mp.end(); it++) {
            int value = it->first;
            string roman = it->second;
            while (num>=value){
                num -= value;
                result += roman;
            }
            if (num==0){
                break;
            }
        }
        return result;
    }

    Solution(){
        this->mp[1] = "I";
        this->mp[4] = "IV";
        this->mp[5] = "V";
        this->mp[9] = "IX";
        this->mp[10] = "X";
        this->mp[40] = "XL";
        this->mp[50] = "L";
        this->mp[90] = "XC";
        this->mp[100] = "C";
        this->mp[400] = "CD";
        this->mp[500] = "D";
        this->mp[900] = "CM";
        this->mp[1000] = "M";

    }
};

int main(){

    int input;
    string result;
    cin >> input;


    Solution * solution = new Solution();

    result = solution->intToRoman(input);


    cout << result << endl;



    return 0;
}
**/