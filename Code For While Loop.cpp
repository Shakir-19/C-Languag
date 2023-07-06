#include <iostream>
#include <string>
using namespace std;

int main(){
	string pass;
	cout << "Enter Your Password: ";
	cin >> pass;
	
	while(pass != "kir19"){
		cout << "Password is Wrong. Try Again\n";
		cout << "Enter Your Password: ";
		cin >> pass;
	}
}
