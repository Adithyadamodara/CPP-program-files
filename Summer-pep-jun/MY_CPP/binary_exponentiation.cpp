#include <iostream>
using namespace std;

long long power(int a, int b, int mod){
    long long result = 1;
    while(b > 0){
        if(b % 2 == 1){
            result = (result * a) % mod;
        }
        
        a = (a * a) % mod;
        b = b/2;
    }
    return result; 
}

int main()
{
    long long mod = 1000000007LL; // used instead of 1e9 + 7 for avoiding floating point arithmetic as 1e9 is floatint point.
    int a = 5, b = 1e9+7, c = 9;
    int a1 = power(a, b, 10);
    int a2 = power(a1, c, 1e9 + 7);
    cout<<a2;
    return 0;
}