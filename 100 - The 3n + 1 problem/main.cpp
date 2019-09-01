#include <iostream>

using namespace std;

int count1 = 0 ;
int count2 = 0;

int recurse(int n){

	cout << n << " ";
	//count1++;

	if(n==1){
		return 0;
	}

	if(n%2!=0){
		recurse(((3*n)+1));
	}
	if(n%2==0){
		recurse(n/2);
	}

}


int main()
{
	int n;
	cin >> n ;
	//cout << n << " " ;

	recurse(n);
	//cout << count1;

	return 0;
}
