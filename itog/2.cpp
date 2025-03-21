#include <iostream>
#include <windows.h>
using namespace std;

class Distance
{
private:
    const float MTF;
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0), MTF(3.280833F) {}
    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;
        feet = int(fltfeet);
        inches = 12 * (fltfeet - feet);
    }
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F) {}
    void getdist()
    {
        cout << "\nВведите футы: "; cin >> feet;
        cout << "Введите дюймы: "; cin >> inches;
    }
    void showdist() const
    {
        cout << feet << "\'-" << inches << '\"';
    }

    Distance operator+ (Distance) const;
    Distance& operator=(const Distance& d)
    {
        feet = d.feet;
        inches = d.inches;
        return *this;
    }

    operator float() const
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }
};

Distance Distance::operator+ (Distance d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    float mtrs;
    Distance dist1 = 2.35F;

    Distance dist101;
    cout << "\ndist101 = ";
    dist101.showdist();

    cout << "\ndist1 = ";
    dist1.showdist();

    cout << "\ndist101 = ";
    dist101.showdist();
    mtrs = static_cast<float>(dist1);
    cout << "\ndist1 = " << mtrs << " meters\n";

    Distance dist2(5, 10.25);

    mtrs = dist2;
    cout << "\ndist2 = " << mtrs << " meters\n";

    Distance dist3;
    dist3 = dist1;
    cout << "\ndist3 = ";
    dist3.showdist();

    Distance dist11 = dist1 + dist2;
    cout << "\ndist11 = ";
    dist11.showdist();

    return 0;
}
