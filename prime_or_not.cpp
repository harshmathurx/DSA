#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n; cin>>n;
	bool prime = true;
	for(int i=2;i<sqrt(n);i++){
		if(n%i == 0){
			prime = false;
			break;
		}
	}
	
	if(prime){
		cout<<"The number "<<n<<" is prime.";
	}
    else{
       cout<<"The number "<<n<<" is not prime.";  
    }
	return 0;
}