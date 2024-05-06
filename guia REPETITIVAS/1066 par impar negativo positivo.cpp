#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int i,posit=0,neg=0,par=0,imp=0;
	
	int n;
	
	for(i=0;i<5;i++){
		
	cin>>n;
		
		if(n>0){
			posit++;
		}
		if(n<0){
			neg++;
		}
		if(n% 2==0){
			par++;
		}
		else if(n%2!=0){
			imp++;
		}
	}
	
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<imp<<" valor(es) impar(es)"<<endl;
	cout<<posit<<" valor(es) positivo(s)"<<endl;
	cout<<neg<<" valor(es) negativo(s)"<<endl;
	
	return 0;
}

