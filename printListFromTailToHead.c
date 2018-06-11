/*
* AUTHOR:Ren Xujie
* DATE:2018-6-11
* CODE DESCRIPTION:PRINT A CHAIN TABLE REVERSELY
*/

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

vector<int> printListFromTailToHead(ListNode* head) {
    vector<int> value;      //定义一个存储输出的容器
    if(head!=NULL){
        value.insert(value.begin(),head->val);
        if(head->next!=NULL){
            vector<int> arr=printListFromTailToHead(head->next);        //采用递归调用的形式遍历链表直到表尾
            if(arr.size()>0)
                value.insert(value.begin(),arr.begin(),arr.end());
        }
    }
        return value;
}

