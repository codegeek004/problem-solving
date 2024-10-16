#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    int i = 0;
    while(i<=n){
        int space = n-i;
        while(space){
            cout << " ";
            space = space - 1;
        }
        int j = 0;
        while(j<=i){
            cout << "*";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}
