//
// Created by 13016 on 2022/10/21.
//
#include "iostream"
using namespace std;



struct ListNode{
    int val;
    ListNode * next;
    ListNode() : val(0),next(nullptr){};
    ListNode(int x):val(x),next(nullptr){};
    ListNode(int x,ListNode * next):val(x),next(next){};
};

/**先串成环，然后在相对应的位置断开，因为右移的次数可能大于链表长度，所以需要取余，即k%length，因为要从头开始遍历，断开的位置距离起点有length-k%length的长度**/
class Solution{
public:
    ListNode * rotateRight(ListNode * head,int k){
        if (!head) return nullptr;
        ListNode * result = head,* end = head;
        int length = 1;
        while (end->next){
            end = end->next;
            length++;
        }
        end->next = head;
        for (int i = 0; i <length-(k%length); ++i) {
            end = end->next;
            result = result->next;
        }
        end->next = nullptr;
        return result;
    }
};



int main(){

}