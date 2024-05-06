#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int i,positivo=0;
	
	float n;
	
	for(i=0;i<6;i++){
	cin>>n;
		if(n>0){
		positivo++;
		}
	}
	cout<<positivo<<" valores positivos"<<endl;
	return 0;
}

