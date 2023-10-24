# include <iostream>

using namespace std;

void reverseList(int* pBase, int i, int j){
    int t;
   while(i < j){
      t =  pBase[i];
      pBase[i] = pBase[j];
      pBase[j] = t;
      ++i;--j;
   }
}


int main(){
    int n,m,i;
    cin >>n>>m;
    //PTA test
    m = m % n;
    int pBase[n];
    for (i = 0; i < n; ++i)
        cin >>pBase[i];

    reverseList(pBase,0,n-1);//all reverse
    reverseList(pBase,0,n-1-m);//except Base
    reverseList(pBase,n-m,n-1);

    for (i = 0; i < n-1; ++i)
        cout <<pBase[i] <<" ";
    cout << pBase[i];

    return  0;
}
