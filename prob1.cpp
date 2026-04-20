#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

int main(){
    Stack s;
    init(&s);
    string inputData[MAX];
    
    int n;
    cout << "Masukkan Jumlah Bilangan: ";
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n && i < MAX; i++) {
        cin >> inputData[i];
    }
    int hasil = HasilOperasi(&s, n, inputData);
    cout << hasil << endl;
    return 0;
}
