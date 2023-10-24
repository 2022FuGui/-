#include "iostream"
using namespace std;

typedef struct Node{
    struct  Node * pNext;
    int data;
}NODE,* PNODE;

int initList(PNODE& l){
    l = new NODE;
    if (!l) return 0;
    l->pNext = NULL;
    return 1;
}

int getLen(PNODE& l){
    PNODE p = l->pNext;
    int cnt = 0;
    while(p){
        cnt++;
        p = p->pNext;
    }
    return  cnt;
}

int ggetpos(PNODE& l,int val){
    PNODE p = l->pNext;
    int pos = 0;
    if(p){
        //下个节点存在且小于被插入值
        while(p && p->data < val){
            pos++;
            p = p->pNext;
        }
        return pos+1;
    }else{
        return 1;
    }
    
}

int createList(PNODE& l){
    int n;
    cin >> n;
    PNODE pTail  = l;
    for (int i = 0; i < n; ++i) {
        PNODE pNew = new NODE;
//        if (!pNew)
//            return 0;
        cin >> pNew->data;
        pTail->pNext = pNew;
        pNew->pNext = NULL;
        pTail  = pNew;
    }
    return 1;
}

bool locateElem(PNODE& l, int val){
    PNODE p = l->pNext;
    while(p!=NULL){
        if (val == p->data)
        	return false;
        p = p->pNext;
    }
    return true;
}

int insertList(PNODE& l,int pos, int val){
    int i = 0;
    PNODE p = l;
    while(p!=NULL && i<pos-1){
        i++;
        p = p->pNext;
    }
    if (p == NULL || i> pos-1){
        return 0;
    }
    PNODE pNew = new NODE;
    pNew->data = val;
    PNODE q = p->pNext;
    p->pNext = pNew;
    pNew->pNext = q;

    return 1;
}

void disList(PNODE& l){
    PNODE p;
    int i;
    int len = getLen(l);

    for (i = 0, p = l->pNext; i <len-1 ; ++i,p = p->pNext)
        cout <<p ->data<<" ";

    cout << p->data;

}

int main(){
    PNODE l;
    initList(l);
    createList(l);

    int pos,val;
    cin >> val;

	int r = locateElem(l,val);
	pos = ggetpos(l,val);
	if(r){
		 insertList(l,pos,val);
	}

    

    disList(l);

    return 0;
}
