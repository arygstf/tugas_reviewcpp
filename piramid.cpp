#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int num = 1;
    
    int r;
    int c;
    
    for(r = 0; r <= n; r++){
    
        for(c = 0; c < r; c++){
            
            cout << num << " ";
            
            num++;
        }
        
        cout << "\n";
    }
    
    return 0;
}