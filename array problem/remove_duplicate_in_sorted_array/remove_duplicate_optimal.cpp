#include <iostream>
#include <vector>
using namespace std;

int removeDup(vector<int> &arr){
    int i = 0;
    for(int j = 1; j < arr.size(); j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i-1;
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3};
    for(int i =0; i < removeDup(arr); i++){
        cout << arr[i] << " ";
    }
}