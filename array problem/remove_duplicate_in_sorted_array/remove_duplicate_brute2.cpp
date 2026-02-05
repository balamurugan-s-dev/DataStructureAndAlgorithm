#include <iostream>
#include <vector>
using namespace std;

int removeDup(vector<int> &arr){
    vector<int> temp;

    for(int i = 0; i < arr.size(); i++){
        bool isDup = false;
        for(int j = 0; j < temp.size(); j++){
            if(arr[i] == temp[j]){
                isDup = true;
                break;
            }
        }
        if(!isDup){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }
    return temp.size();
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3};
    for(int i =0; i < removeDup(arr); i++){
        cout << arr[i] << " ";
    }
}