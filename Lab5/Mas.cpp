
#include <iostream>
using namespace std;
const int n = 10;
int mas[n];

void MasMas(int n,int mas[])
{
    for (int i = 0;i < n;i++)
    {
        cout << "mas[" << i << "]=" << endl;
        cin >> mas[i];
    }
}
void MasSum(int n, int mas[])
{
    int s = 0;
    for (int i = 0;i < n;i++)
    {
        s += mas[i];
    }
    cout << "S = " << s << endl;
}
void MasSumOtr(int n, int mas[])
{
    int sotr{ 0 };
    for (int i = 0;i < n;i++)
    {
        if (mas[i] < 0)
            sotr += mas[i];
    }
    cout << "S otr = " << sotr << endl;
}
void MasSumPol(int n, int mas[])
{
    int spol{ 0 };
    for (int i = 0;i < n;i++)
    {
        if (mas[i] > 0)
            spol += mas[i];
    }
    cout << "S pol = " << spol << endl;
}

void MasSumNech(int n, int mas[])
{
    int snech{ 0 };
    for (int i = 0;i < n;i++)
    {
        if (mas[i] % 2 != 0)
            snech += mas[i];
    }
    cout << "S nech = " << snech << endl;
}

void MasSumCh(int n, int mas[])
{
    int sch{ 0 };
    for (int i = 0;i < n;i++)
    {
        if (mas[i] % 2 == 0)
            sch += mas[i];
    }
    cout << "S ch = " << sch << endl;
}
void MasSum123(int n, int mas[])
{
    int maxind{};
    int minind{};
    int maxvalue = mas[0];
    int minvalue = mas[0];

    for (int i = 0;i < n;i++)
    {
        if (mas[i] > maxvalue)
        {
            maxvalue = mas[i];
            maxind = i;
            cout << "maxvalue=" << maxvalue << "\t maxindex=" << maxind << endl;
        }
        if (mas[i] < minvalue)
        {
            minvalue = mas[i];
            minind = i;
        }
    }
    cout << "maxvalue=" << maxvalue << "\t maxindex=" << maxind << endl;
    cout << "minvalue=" << minvalue << "\t minindex=" << minind << endl;
    int prdiap = 1;
    if (maxind > minind)
    {
        for (int i = minind;i <= maxind;i++)
        {
            prdiap = mas[i] * prdiap;
        }
    }
    else
    {
        for (int i = maxind;i <= minind;i++)
        {
            prdiap = mas[i] * prdiap;
        }
    }
    cout << "prdiap=" << prdiap << endl;
}
void MasSort(int n, int mas[])
{

    int min = 0;
    int buf = 0; 
    for (int i = 0; i < n; i++)
    {
        min = i;        
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;        
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << '\t';
    }
}
int main()
{
    system("chcp 1251");
    MasMas(n, mas);
    MasSum(n, mas);
    MasSumOtr(n, mas);
    MasSumPol(n, mas);
    MasSumNech(n, mas);
    MasSumCh(n, mas);
    MasSum123(n, mas);
    MasSort(n, mas);
}