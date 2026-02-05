#include <iostream>
#include <vector>
#include <set>

using namespace std;

int removeDuplicate(vector<int> &arr){
    set<int> temp(arr.begin(), arr.end());
    int i = 0;
    for(int ele : temp){
        arr[i++] = ele;
    }
    return temp.size();
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3};
    for(int i =0; i < removeDuplicate(arr); i++){
        cout << arr[i] << " ";
    }
}