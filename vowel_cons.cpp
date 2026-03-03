#include <iostream>
using namespace std;

void check(char x){
    if (x == 'A' || x == 'a' || x == 'E' || x == 'e' ||
        x == 'I' || x == 'i' || x == 'U' || x == 'u' ||
        x == 'O' || x == 'o' ) cout << "Vokal" << endl;
    
    else cout << "Konsonan" << endl;
}


int main() {
    
    int n;
    cin >> n;
    
    while(n--){
        
        char x;
        cin >> x;
        
        check(x);
        
    }
    
    
    return 0;
}