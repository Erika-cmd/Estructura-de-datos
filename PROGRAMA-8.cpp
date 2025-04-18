#include <iostream>
using namespace std;

int main() {
    int nums[20];
    
    cout << "Ingrese 20 números:" << endl;
    for(int i = 0; i < 20; i++)
        cin >> nums[i];
    
    for(int i = 0; i < 20; i++) {
        bool contado = false;
        for(int j = 0; j < i; j++)
            if(nums[i] == nums[j]) {
                contado = true;
                break;
            }
        
        if(!contado) {
            int frec = 0;
            for(int j = 0; j < 20; j++)
                if(nums[j] == nums[i]) frec++;
            
            cout << "El número " << nums[i] << " aparece " << frec << " veces" << endl;
        }
    }
    
    return 0;
}