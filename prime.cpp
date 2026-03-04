#include <iostream>
#include <stdbool.h>
#include <stdio.h>
using namespace std;

bool prime(int n){
    
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void find_primes(int l, int r){
    bool found = false;
    
    for(int i = l; i <= r; i++){
        if(prime(i)){
            cout << i;
            found = true;
        }
    }
    
    if(!found){
        printf("No prime numbers");
    }
    
}


int main() {
    
    int l,r;
    
    cin >> l;
    cin >> r;
    
    find_primes(l,r);
    
    
    
    return 0;
}