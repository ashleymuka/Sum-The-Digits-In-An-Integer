
//Description: Write a program sums the digits in an integer

#include <iostream>
using namespace std;

int main() {
    
    int n;
    int sum = 0;
    
    cout << "Enter an integer between 0 and 9999999: ";

    cin >> n;
    
    cout << n << endl; // echo print
        
    sum += n % 10;
    n /= 10;
    
    sum += n % 10;
    n /= 10;
    
    sum += n % 10;
    n /= 10;
    
    sum += n % 10;
    n /= 10;
    
    sum += n % 10;
    n /= 10;
    
    sum += n % 10;
    n /= 10;
    
    sum += n % 10;
   
    cout << "The sum of the digits is " << sum << "." << endl;
    
    return 0;
}


