#include <iostream>
using namespace std;

bool czy_pierwsza(int n){
	if(n<2){
		return false;}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;}
	}
	return true;
}

int main(){
	int x;
	cin >> x;
	cout << x << endl;
	cout <<"Czy liczba jest pierwsza (1-tak,0-nie) : "<<czy_pierwsza(x)<<endl;
return 0;}
