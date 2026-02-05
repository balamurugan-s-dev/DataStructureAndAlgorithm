#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findSecondLg(vector<int> &arr){
    int n = arr.size();
    if(n <= 1) return -1;

    int first = arr[0];
    int second = INT_MIN;

    for(int i = 1; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] < first){
            second = arr[i];
        }
    }

    if(second == INT_MIN) return -1;
    return second;
}

int main(){
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    cout << findSecondLg(arr);
}