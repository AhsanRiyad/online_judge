#include <iostream>

using namespace std;


int recurse(int n){

	cout << n << " ";

	if(n==1){
		return 0;
	}

	if(n%2!=0){
		recurse(3*n+1);
	}
	if(n%2==0){
		recurse(n/2);
	}
	



}


int main()
{
	int n;
	cin >> n ;
	cout << n << " " ;



	recurse(5);



	return 0;
}
