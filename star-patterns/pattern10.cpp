#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a value: ";
    cin >> n;
    int i = 0;
    char ch = 'a';
    while(i<=n){
        int j = 0;
        while(j!=i){
            cout << ch;
            ch = ch + 1;
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }
}
