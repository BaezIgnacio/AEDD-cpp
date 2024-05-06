#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numero;
	
	do{
		cin>>numero;
	} while( (numero<1) or (numero>1000) );
	
	for(int i=1;i<=10;i++){
		cout<<i<<" x "<<numero<<" = "<<numero*i<<endl;
	}
	
	
	return 0;
}

