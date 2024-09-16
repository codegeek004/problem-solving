#include<iostream>
using namespace std;

bool prime(int n)
{
    for(int i=2; i<=n; i++){
        if(n%2 == 0){
            cout << "Divisible by 2." << endl;
            cout << "Not a prime" << endl;
            return false;
        }
        else{
            cout << "Not divisible by 2" << endl;
            if(n%i==0){
                cout << "Divisible by" << i << endl;
                cout << "Not a prime" << endl;
                return false;
            }
            else{
                cout << "Not divisible by any number. " << endl;
                cout << "It is prime";
                return true;
        
            }
        }
    }
    return 0;
} 

int main(){

    int n;
    cout << "Enter a value: ";
    cin >> n;
    prime(n);


}
