# include <iostream>
# include <algorithm>

using namespace  std;

int main(){
    int n,m,i;
    cin >>n>>m;    //PTA test
    m = m % n;
    int pBase[n];
    for (i = 0; i < n; ++i)
        cin >>pBase[i];

    reverse(pBase,pBase+n);
    reverse(pBase,pBase+n-m);
    reverse(pBase+n-m,pBase+n);

    for (i = 0; i < n-1; ++i)
        cout <<pBase[i] <<" ";
    cout << pBase[i];

    return  0;
}
