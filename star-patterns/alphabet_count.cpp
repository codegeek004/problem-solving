#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    int i = 0;
    char ch = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
