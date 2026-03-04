#include <iostream>
using namespace std;

int main() {
    
    int x;
    cin >> x;
    
    int *ptr = &x;
    
    cout << "Nilai dari x: " << x << endl;
    cout << "Alamat dari x: "<< &x << endl;
    cout << "Nilai yang disimpan di ptr: " << ptr << endl;
    cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << endl;
    
    
    
    return 0;
}