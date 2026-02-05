#include <iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr){
    for(int i = 0; i < arr.size()-1; i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] > arr[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    if(checkSorted(arr)) cout << "The array is sorted.";
    else cout << "The array is not sorted.";
}