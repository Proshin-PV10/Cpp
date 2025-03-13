#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

const int N = 100; 
string text[N];    
int n;   

int main()
{
    system("chcp 1251"); 
    cout << "Введите текст (введите 'exit' для завершения ввода):" << endl;        
    while (n < N)
    {
        string line;
        getline(cin, line);

        if (line == "exit") 
            break;

        text[n++] = line; 
    }

    // Запись введенных строк в файл
    ofstream out("test.txt", ios::out);
    if (!out)
    {
        cout << "Файл открыть невозможно\n";
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        out << text[i] << endl; 
    }
    out.close();
    cout << "Текст успешно записан в файл test.txt" << endl;

    return 0;
}


