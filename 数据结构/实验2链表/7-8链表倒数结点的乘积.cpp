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

int createList(PNODE& l,int n){
    int val;
    auto pTail = l;
    for (int i = 0;i<n ; ++i) {
        cin >> val;
        if (val < 0) return 0;
        auto pNew = new NODE;
        pNew->pNext = nullptr;
        pNew->data = val;
        pTail->pNext = pNew;
        pTail = pNew;
    }
    return 1;
}

void getElem(PNODE& l, int pos, int& sum){
    PNODE p = l;
    for (int i = 0; i < pos; ++i) {
        p = p->pNext;
    }

    sum =1;
    while(p !=NULL){
        sum *= p->data;
        p = p->pNext;
    }

    cout<<sum;
}

int getLen(PNODE l){
    auto p = l->pNext;
    int cnt = 0;

    while(p){
        cnt++;
        p = p->pNext;
    }
    return  cnt;
}



int main(){
    PNODE l;
    int k, n,sum;
    cin >> n;
    cin >>k;
    //pta test;
    if(k == 0){
        cout<<"0";
        return 0;
    }

    initList(l);
    createList(l,n);
    int len = getLen(l);

    int pos = len - k + 1;

    getElem(l,pos,sum);





    return 0;
}