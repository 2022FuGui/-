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

int createList(PNODE& l,int n){
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
    int n;
    initList(l);
    cin >>n;
    if(n == 0){
		return 0;

	}
    createList(l,n);
    disList(l);
    
    return 0;
    
}
