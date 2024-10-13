#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    int i = 0;
    while(i<=n){
        int j = 0;
        int value = i;
        while(j!=i){
            cout << value << " ";
            value = value + 1;
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }
}
