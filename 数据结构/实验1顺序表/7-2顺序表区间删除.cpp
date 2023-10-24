# include <iostream>
# define MAX 100
using namespace std;

typedef struct{
    int * pBase;
    int cnt;
    int len;
}List;

//merage init and create
void initList(List& L,int cnt){
    L.pBase = new int[MAX];
    L.cnt = 0;
    L.len = MAX;

    for (int i = 0; i < cnt; ++i) {
        cin >> L.pBase[i];
    }
    L.cnt = cnt;
}

// interval number delete
void interVal(List& L){
    int min,max,t = 0;
    cin >> min >> max;
    for (int i = 0; i < L.cnt; ++i)
        if (L.pBase[i] < min || L.pBase[i] > max)
            L.pBase[t++] = L.pBase[i];
    L.cnt = t; //flash new cnt
}

void dis(List& L){
    int i = 0;
    for (i = 0; i < L.cnt-1; ++i)
        cout << L.pBase[i]<<" ";
    cout << L.pBase[i]<<endl;
}

int main() {
    List L;
    int cnt;
    cin >> cnt;
    initList(L,cnt);
    interVal(L);
    dis(L);

    return  0;
}
