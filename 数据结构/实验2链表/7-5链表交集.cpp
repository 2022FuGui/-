# include "iostream"
using namespace std;

typedef struct  Node{
    struct  Node * pNext;
    int data;
}NODE,*PNODE;

int getLen(PNODE );

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
        if (val == -1) return 0;
        auto pNew = new NODE;
        pNew->pNext = nullptr;
        pNew->data = val;
        pTail->pNext = pNew;
        pTail = pNew;
    }
    return 1;
}

int isEmpty(PNODE& l){
    auto p = l->pNext;
    if (!p) return 1;

    return 0;
}

void disList(PNODE& l,int len){

    auto p = l->pNext;

    while(p->pNext!=nullptr){
        cout<<p->data<<" ";
        p = p->pNext;
    }
    cout<< p->data<<endl;

}


int getLen(PNODE l){
    auto p = l->pNext;
    int cnt = 0;

    while(!p){
        cnt++;
        p = p->pNext;
    }
    return  cnt;
}

void interList(PNODE& la,PNODE& lb,PNODE& lc){
    auto pa = la->pNext;
    auto pb = lb->pNext;
    auto pc = lc;


    while(pa && pb) {
        if (pa->data < pb->data)
            pa = pa->pNext;
        else if (pa->data > pb->data)
            pb = pb->pNext;
        else{
            pc = pc->pNext = pa;
            pa = pa->pNext;
            pb = pb->pNext;
        }
        pc->pNext = nullptr; //剥离尾部
    }

}

int main(){
    PNODE la,lb,lc;
    int n1,n2;
    initList(la);
    initList(lb);
    initList(lc);

    createList(la);
    createList(lb);
    interList(la,lb,lc);

    if (isEmpty(lc))
    {
        cout <<"NULL";
        return 0;
    }

    int len = getLen(lc);
    disList(lc,len);
    // cout<<len<<endl;


    return 0;
}