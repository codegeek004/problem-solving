#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    int i = 0;
    while(i<=n){
        int j = 0;
        
        while(j<=i){
            char ch = 'a' + i - 1;
            cout << ch << " ";
            j = j + 1;
           
        }
        cout << endl;
        i = i + 1; 
    }
}
