#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a value: ";
    cin >> n;
    bool isPrime=0;
    for(int i=2;i<n;i++){
    if(n%i==0){
        isPrime=1;
        break;
    }
}

    if(isPrime==0){
        cout << "The number is prime" << endl;
    }
    else{
        cout << "The number is not prime" << endl;
    }

}
