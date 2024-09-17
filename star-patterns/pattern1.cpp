#include<iostream>
using namespace std;
//row count = column count
int main(){
    cout << "Enter the value of n";
    int n;
    cin >> n;
//row count 
    int i = 1;
    while(i<=n){
        //column count
        int j = 1;
        while(j<=n){
            cout << "*";
            j = j + 1;
        }
        cout << endl;

        i = i+1;
    }
}
