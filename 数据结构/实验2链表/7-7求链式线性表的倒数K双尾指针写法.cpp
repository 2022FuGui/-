# include "iostream"
using namespace std;

typedef struct  Node{
    struct  Node * pNext;
    int data;
}NODE,*PNODE;

int initList(PNODE& l){
    l = new NODE;
    if (!l)  return 0;
    l->pNext = NULL;

    return 1;
}

int createList(PNODE& l,int k,PNODE& pResult){
    int val,cnt=0;
    auto pTail = l;
    pResult = l;

    while(cin >> val) {
        cnt++;
        if (val < 0) break;
        auto pNew = new NODE;
        pNew->pNext = nullptr;
        pNew->data = val;
        pTail->pNext = pNew;
        pTail = pNew;
        if(cnt >= k)
            pResult = pResult->pNext;
    }

}



int main(){
    PNODE l,pResult;

    int k;
    cin >>k;

    initList(l);
    createList(l,k,pResult);

    if(pResult != l)
        cout << pResult->data;
    else
        cout <<"NULL";


    return 0;
}