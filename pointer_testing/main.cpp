#include <iostream>

using namespace std;




int f(int *x){

	*x = 300 ; 


}



int main()
{
	int n = 100;

    f(&n) ; 

    cout << n ; 

    return 0;
}
