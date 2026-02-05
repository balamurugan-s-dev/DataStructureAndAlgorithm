#include <iostream>
#include <vector>

using namespace std;

bool checkSorted(vector<int> &arr){
    int n = arr.size();
    if(n <= 1) return true;

    bool asc = true;
    bool desc = true;

    for(int i = 0; i < n-1; i++){
        if(arr[i] < arr[i+1]) asc = false;
        if(arr[i] > arr[i+1]) desc = false;
    }

    return asc || desc;
}

int main(){
    vector<int> arr = {5, 4, 3, 2, 1};
    if(checkSorted(arr)) cout << "The array is sorted.";
    else cout << "The array is not sorted.";
}