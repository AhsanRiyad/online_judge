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
	int k = counter ;
	counter = 0 ;
	cout << endl;

	recurse(m);
	cout << endl;
	cout << counter;
	int l = counter ;
	counter = 0 ;
	cout << endl;

    int b = 0 ;
    if(k > l){
        b = k;
    }else{
        b = l;

    }

    cout << endl;
    cout << "End result \n" ; 
    cout << n << " " << m << " " << b << endl;

	return 0;
}
