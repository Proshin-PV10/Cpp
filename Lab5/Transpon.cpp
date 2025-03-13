#include <iostream>
using namespace std;

void transponation(int *mas, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (mas[i] == key && i > 0) {
            swap(mas[i], mas[i - 1]);
            cout <<"Число " << key << " найдено по номером " << i << ", и перемещено на позицию " << i - 1 << endl;
            return;
        }
    }
    cout << "Число " << key << " не найдено." << endl;
}

int main() {
    system("chcp 1251");    
    int mas[]{ 5, 3, 8, 6, 2, 7 };
    int n = sizeof(mas) / sizeof(mas[0]);
    int key = 6;

    transponation(mas, n, key);

    cout << "измененный массив: ";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;

    return 0;
}
