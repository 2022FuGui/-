# include<iostream>
# define MAX 100
using namespace std;

typedef struct{
	int *pBase;
	int cnt;
	int len;
}LIST;

//merage init and creatlist
void initList(LIST& L,int cnt){
	L.pBase = new int[MAX];
	L.cnt = 0;
	L.len = MAX;

    for(int i = 0;i<cnt;i++){
        cin >> L.pBase[i];
    }
    L.cnt = cnt;
}

void dis(LIST& L){
    int i = 0;
    for (i = 0; i < L.cnt-1; ++i)
        cout << L.pBase[i]<<" ";
    cout << L.pBase[i]<<endl;
}

int main(){	
	LIST L;
	int n;
	cin >> n;

    //PTA test zero need return 0 or 1;
	if(n == 0)	return 0;

	initList(L,n);
	dis(L);
	
	return 0;
}
