#include <iostream>

using namespace std;

int main()
{
    
    int number1, number2, loop_counter;

    cin >> loop_counter;

    int sum_array[loop_counter];


    for (int i = 0; i < loop_counter; ++i) //input loop
    {
    	cin >>  number1 ;
    	cin >>  number2 ;
 	   	
 	   	sum_array[i] = number1 + number2 ;

    }

    for (int i = 0; i < loop_counter; ++i) //output loop
    {
    	cout << sum_array[i] <<"\n"  ;
    }







    return 0;
}
