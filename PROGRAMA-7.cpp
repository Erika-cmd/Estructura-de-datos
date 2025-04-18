#include <iostream>
using namespace std;

int main() {
    int nums[10];
    
    cout << "Ingrese 10 números:" << endl;
    for(int i = 0; i < 10; i++)
        cin >> nums[i];
    
    int temp = nums[9];
    for(int i = 9; i > 0; i--)
        nums[i] = nums[i-1];
    nums[0] = temp;
    
    cout << "Arreglo rotado: ";
    for(int i = 0; i < 10; i++)
        cout << nums[i] << " ";
    cout << endl;
    
    return 0;
}
