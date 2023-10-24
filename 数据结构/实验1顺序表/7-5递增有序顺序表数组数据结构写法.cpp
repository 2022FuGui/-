# include "iostream"
using namespace std;

void insertArr(int * p,int start,int end,int val){
    for (int i = end-1; i >= start-1 ; --i)
        p[i+1] = p[i];
    p[start-1] = val;
}

int main(){
    int arr[100], n, val, cnt = 0;

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cin >> val;
    for (int i = 0; i < n ; ++i)
        if (arr[i] <= val)
            cnt++;  //start


    insertArr(arr,cnt+1,n++,val);

    for (int i = 0; i < n; ++i) {
        cout << arr[i]<< ",";
    }
}