#include <iostream>
using namespace std;

int main(){
	string pass;
	cout << "Enter Your Password: ";
	cin >> pass;
	if(pass.length() > 8){
		if(pass == "198akir.123"){
			cout << "Logging In....";
		} else {
			cout << "Password Is Wrong.";
		}
	} else {
		cout << "Password Is Weak.";
	}
}
