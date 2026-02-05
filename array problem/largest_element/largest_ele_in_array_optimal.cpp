#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {2, 5, 1, 3, 0};
    int max = arr[0];
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max) max = arr[i];
    }

    cout << max;
}