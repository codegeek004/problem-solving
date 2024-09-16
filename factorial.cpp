#include<iostream>
using namespace std;
int fact(int n){
    int res = 1;
    for(int i=1;i<n;i++){
        res = res*i;
        cout << res << "fact" << endl;
        return res;   
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fact(n);
}
