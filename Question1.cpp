// Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1; i<=5; i++){
        sum=sum+i;
    }
    
    int ans = 0; 
    int x = 1;
    
    while (sum > 0) {
        int parityDigit = sum % 2; 
        ans += x * parityDigit; 
        x *= 10; 
        sum /= 2;
    }

    cout <<"----------------------------------------------------------------------\n";
    cout<< ans << endl;
    cout <<"----------------------------------------------------------------------\n";

    return 0;
}