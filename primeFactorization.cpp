#include <iostream>
#include "integerManipulation.h"
#include "primeFactorization.h" 
#include <iomanip>
#include <cmath>
using namespace std; 

void primeFactorization::factorization()
{
    //See Progamming Exercise 14.
    long long n = integerManipulation::getNum();
    if( primeFactorization::isPrime(n)){
        cout<<"prime";
        cout<<setw(25)<<n<<"="<<setw(25)<<n;
    }
    else{
        cout<<"not|non"<<" ";
        cout << n<< " ";
        while(n%2==0){
        cout<<"2 ";
        n/=2;}
    
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2){
        cout<<n<<endl;
    }
    
    
}
}

primeFactorization::primeFactorization(long long n)
    : integerManipulation(n)
{
    first125000PrimeNum(first125000Primes, 125000);
}

void primeFactorization::primeFact(long long n, long long list[], int length, 
                   int firstPrimeFactIndex)
{
    //See Progamming Exercise 14.
}
void primeFactorization::first125000PrimeNum(long long list[], int length)
{
    //See Progamming Exercise 14.
}


void primeFactorization::primeTest(long long n, long long list[], int length, 
                   bool& primeNum, int& firstPrimeFactIndex)
{
    //See Progamming Exercise 14.
}
bool primeFactorization::isPrime(long long n)
{
    //See Progamming Exercise 14.
    if (n <= 1) 
        return false; 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
    return true; 
}
