#include <iostream>
using namespace std;

bool oddOrEven(int &n){
	
	if(n % 2 == 0)
		return true;
	else
		return false;
}

int main(){
	int n;
	cin >> n;
	if(oddOrEven(n))
		cout << "Even Number";
	else
		cout << "Odd Number";
}
