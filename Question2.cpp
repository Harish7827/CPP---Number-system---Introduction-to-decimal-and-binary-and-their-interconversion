// Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.
// Note: Don’t count the preceding zeros.0
// For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int count = 0;
    
    while (number > 0) {
        int parity = number % 2;
        if(parity==0){
            count++;
        }
        number /= 2;
    }
    cout << "The number of zeros is : " << count << endl;
    return 0;
}