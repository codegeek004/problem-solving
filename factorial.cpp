#include<iostream>
using namespace std;
int main(){
    int n, fact=1;
    cout << "Enter a number: " << endl;
    cin >> n;
    for(int counter = n; counter >=2; counter--){
        cout << "counter: " << counter << endl;
        fact = fact * counter;
        cout << "fact: " << fact << endl;
    }
    cout << "The factorial is: " << fact << endl;
    return 0;
}

