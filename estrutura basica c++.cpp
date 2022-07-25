#include <iostream>

using namespace std;

int main(){
	
	int num=0;
	char letra='a';
	float dec=2.3;
	double dec1=2.4;
	bool verd=true;
	string nome="lucas";
		cout <<"digite um numero: \n";
		cin >> num ;
		cout <<"digite uma letra: \n";
		cin >> letra ;
		cout <<"digite um valor em dinheiro: \n";
		cin >> dec ;
		cout <<"digite outro valor em dinheiro: \n";
		cin >> dec1 ;
		cout <<"digite um nome: \n";
		cin >> nome ;
		
		cout <<"numero:"<< num << "\n" <<"letra:" <<letra << "\n" <<"dinheiro:"<<dec<< "\n" <<"dinheiro:" <<dec1 << "\n" <<"nome:" <<nome << "\n";
		
	return 0;
}
