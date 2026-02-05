#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr){
    if(arr.size() <= 1) return true;
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    if(checkSorted(arr)) cout << "The array is sorted.";
    else cout << "The array is not sorted.";
}