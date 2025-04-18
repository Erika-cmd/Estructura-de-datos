#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    
    for(int i = 5; i*i <= n; i += 6)
        if(n % i == 0 || n % (i+2) == 0) return false;
    
    return true;
}

int main() {
    int nums[100];
    int primos = 0;
    
    srand(time(0));
    
    for(int i = 0; i < 100; i++)
        nums[i] = rand() % 500 + 1;
    
    for(int i = 0; i < 100; i++)
        if(esPrimo(nums[i])) primos++;
    
    cout << "Cantidad de números primos: " << primos << endl;
    
    return 0;
}
