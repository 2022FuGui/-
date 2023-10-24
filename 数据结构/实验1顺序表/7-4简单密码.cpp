# include<iostream>
# include<string>

using namespace std;

int main(){
    //string cite
   string arr;

    //cin stream , var
   getline(cin,arr);
   
    if (arr.empty()){
        cout << "NULL";
        return  0;
    }

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= 'A' && arr[i] <= 'E')
            arr[i]  += 26 - 5;
        else if (arr[i] >= 'F' && arr[i] <= 'Z')
            arr[i]  += -5;
    }
    cout << arr;

    return 0;
}