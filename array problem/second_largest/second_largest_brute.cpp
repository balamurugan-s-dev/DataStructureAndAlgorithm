#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findSecLarge(vector<int> &arr){
    int n = arr.size();
    if(n <= 1) return -1;
    sort(arr.begin(), arr.end());
    int large = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        if(arr[i] != large) return arr[i];
    }
}

int main(){
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    cout << findSecLarge(arr);
}