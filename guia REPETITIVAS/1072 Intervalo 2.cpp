#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n=0,x=0,in=0,out=0;
	int i=0;
	
	do{
		cin>>n;
	} while(n>abs(10000));
	
	
	for(i=1;i<=n;i++){
		cin>>x;
	if((x >= 10) and (x <= 20)){
		in++;
		}
	if((x < 10) or (x > 20)){
		out++;
	}
	
	}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	return 0;
}

