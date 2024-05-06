#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int aux,x,y,suma=0;
	
	cin>>x>>y;
	
	if(x>=y){
		aux=x;
		x=y;
		y=aux;
	}
	
	int i=x+1;
	
	while(i<y){
			if(abs (i)%2==1){
				suma=suma+i;
				}
			i++;
	}
	
	cout<<suma<<endl;
	return 0;
}

