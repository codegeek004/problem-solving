#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=5;i++){
        cout << "Hello" << endl;
        cout << "yash" << endl;
        continue;
        //here codemos will not print, it becomes unreachable for the loop. hello -> yash will continue 5 times and terminates
        cout << "codemos" << endl;
    }
}
