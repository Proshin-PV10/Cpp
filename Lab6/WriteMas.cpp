#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    system("chcp 1251");
    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int min = 0;
    int buf = 0;
    
    for (int i : a) {
        cout << i << '\t';
    }
    cout << endl;
    
    ofstream out("test.txt", ios::out);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    for (int i = 0; i < N; i++) {
        out << a[i] << "\t";        
    }
    out << endl;
        
    for (int i = 0; i < N; i++)
    {
        min = i;         
        for (int j = i + 1; j < N; j++)
            min = (a[j] < a[min]) ? j : min;      
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }
        
    for (int i : a) {
        cout << i << '\t';
    }
    cout << endl;

    
    for (int i = 0; i < N; i++) {
        out << a[i] << "\t";        
    }
    out << endl;
    out.close();
    return 0;
}


