#include <iostream>
#include <algorithm>
using namespace std;

typedef struct {
    int * pBase;
    int len;
    int cnt;
}LIST;

void initList(LIST& L, int n){
    L.pBase =new int[100];
    L.cnt = n;
    L.len = 100;

    for (int i = 0; i < n; ++i)
        cin >> L.pBase[i];
    L.cnt = n;
}

void dis(LIST& L){
    for (int i = 0; i < L.cnt; ++i)
        cout << L.pBase[i]<<",";
}

int main(){
    LIST L;
    int n,val ;
    cin >> n;
    initList(L,n);
    cin >> val;
    L.pBase[L.cnt++] = val;
    sort(L.pBase,L.pBase+L.cnt);
    dis(L);

    return 0;
}