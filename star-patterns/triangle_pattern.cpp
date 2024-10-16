#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value:";
    cin >> n;
    for(int i=1;i<=n;i++){
//for leading spaces
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        //for stars
        for(int j=1;j<=i;j++){
            cout << "* ";

        }
        cout << endl;
    }
}
