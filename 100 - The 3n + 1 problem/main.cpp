#include <iostream>

using namespace std;

int counter = 0;

int recurse(int n){

	cout << n << " ";
    counter++ ;
    //cout << counter << "\n";
	if(n==1){
		return 0;
	}
	if(n%2!=0){
		recurse(((3*n)+1) );
	}
	if(n%2==0){
		recurse(n/2);
	}

}


int main()
{
	//int counter = 0 ;
	int n , m;
	cin >> n ;
	cout << " ";
	cin >> m ;
	cout << " ";

	recurse(n);
	cout << endl;
	cout << counter;
	cout << endl;
	recurse(m);


	return 0;
}
