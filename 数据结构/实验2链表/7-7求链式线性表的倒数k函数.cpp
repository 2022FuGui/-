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

int createList(PNODE& l){
    int val;
    auto pTail = l;
    for (int i = 0; ; ++i) {
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

void getElem(PNODE& l, int pos, int& val){
    PNODE p = l;
    for (int i = 0; i < pos; ++i) {
        p = p->pNext;
    }
    val = p->data;

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
    int n1 ,k, val;
    cin >>k;
    if(k < 0) return 0;

    initList(l);
    createList(l);
    int len = getLen(l);

    int pos = len - k + 1;

    if (pos < 1 || pos > len){
        cout << "NULL";
    }
    else
    {
        getElem(l,pos,val);
        cout << val;
    }


    return 0;
}