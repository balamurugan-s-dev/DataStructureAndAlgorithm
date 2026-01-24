#include <iostream>
using namespace std;

int sumofNumber(int &n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    // int i = 1;
    // while(i <= n){
    //     sum += i;
    //     i++;
    // }

    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << sumofNumber(n);
}