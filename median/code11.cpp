//
// Created by 13016 on 2022/10/17.
//
#include "vector"
#include "iostream"
#include "algorithm"
using namespace std;

/**双指针
 *
 * 面积 = 两指针之间的距离*两指针指向的较小的值  ①
 *
 * 两指针指向两边，每次移动指向的值较小的指针，遍历一遍得到结果
 *
 * 移动指针指向的值较小的指针是因为
 *
 * 1、首先无论移动哪个指针，①的第一项总会-1
 * 2、面积的高取决于指针指向的较小的值，移动指向较小的值的指针，新的指针指向的值有可能会比原来的高，可以得到最新的最大面积，即是指向的值比原来的小，舍弃即可，
 *                              移动指向较大的值得指针，新的指针指向的值比原来的指向较低的值指针高的话，该指针还是指向较大值的指针，新的矩形的高看的还是原来的指向较低的指针，不会更新结果，若新的指针指向的值比指向较低的值的指针低的话，新的矩形的面积比原来还要低，我们要的是最大矩形，结果也不会更新。
 * **/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        vector<int>::iterator left,right;
        left = height.begin();
        right = --height.end();
        int width = height.size()-1;
        while (left!=right){
            int height1 = *left;
            int height2 = *right;
            int temp = width* min(height1,height2);
            if (temp>result) result = temp;
            if (height1>height2){
                right--;
            } else {
                left++;
            }
            width--;
        }


        return result;
    }
};


int main(){
    int result = 0;
    int input;
    char end;
    vector<int> vi;
    while (cin >> input){
        vi.push_back(input);
        cin.get(end);
        if (end!=' '){
            break;
        }
    }

    Solution * solution = new Solution();

    result = solution->maxArea(vi);

    cout << result << endl;

    return 0;
}

//1 8 6 2 5 4 8 3 7