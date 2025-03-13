#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string fullnumberSt;    //введенная строка
long long int fullnumber;   // строка приведенная к числовому значению
int code;   //только код
int codes; // рассчитанный код
int number; // номер без кода
int sum;    

bool volid(string fullnumberSt)
{
    sum = 0;
    string filteredNumber;    
    for (char ch : fullnumberSt)
        if (ch >= '0' && ch <= '9')
        {
            filteredNumber += ch;            
            cout << filteredNumber << endl;            
        }
        
        else if (ch != ' ' && ch != '-')
        {
            string trash;
            trash += ch;
            cout << "некорректный ввод" << endl;
            break;
        }
        
    fullnumber = stoll(filteredNumber);
    code = fullnumber % 100;
    number = fullnumber / 100;

    for (int i = 1; i < 10; i++)
    {
        int x = number % 10;
        number = number / 10;
        sum += x * i;
    }

    if (sum < 100)
    {
        codes = sum;
    }
    else if (sum == 100 || sum == 101)
    {
        codes = 0;
    }
    else if (sum > 101)
    {
        codes = sum % 101;
        if (codes == 100)
        {
            codes = 0;
        }
    }

    if (code == codes)
    {       
        return true;
    }
    else
    {        
        return false;
    }
}

int main()
{
    string f;
    system("chcp 1251");

    std::cout << "Введите номер снилс!\n";
    getline(cin, fullnumberSt); 
    cout << fullnumberSt << " \n  " << f << endl;
    if (volid(fullnumberSt) == true)
    {
        std::cout << "Снилс корректный" << std::endl;
    }
    else
    {
        std::cout << "Снилс не корректный" << std::endl;

    }
}
