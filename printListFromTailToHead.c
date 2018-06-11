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
    vector<int> value;
    if(head!=NULL){
        value.insert(value.begin(),head->val);
        if(head->next!=NULL){
            vector<int> arr=printListFromTailToHead(head->next);
            if(arr.size()>0)
                value.insert(value.begin(),arr.begin(),arr.end());
        }
    }
        return value;
}

