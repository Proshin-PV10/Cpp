#include <iostream>
#include <cstring> 
#include <cstdlib> 
using namespace std;

int main(int argc, char* argv[]) {
    system("chcp 1251");
    
    if (argc < 4) {
        cout<< "Недостаточно аргументов." << endl;
        return 1;
    }    
    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0) {
        cout << "Неверный флаг" << endl;
        return 1;
    }    
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);    
    if (strncmp(argv[1], "-a", 2) == 0) {
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    }
    else if (strncmp(argv[1], "-m", 2) == 0) {
        cout <<num1<<" * "<<num2 <<" = "<< (num1 * num2) << endl;
    }

    return 0;
}
