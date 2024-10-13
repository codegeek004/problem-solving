#include<iostream>
using namespace std;
//for printing reverse ordered numbers like 4321\n4321\n4321
int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    int i = 0;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << n-j+1;
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }
}
