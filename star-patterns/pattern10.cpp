#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a value: ";
    cin >> n;
    int i = 0;
    while(i<=n){
        int j = 0;
        while(j!=i){
            cout << i-j+1;
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }
}
