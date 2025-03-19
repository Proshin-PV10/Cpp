#include <iostream>

template <class T>
double SrAr(T arr[], int size);

template <class T>
void Print(int size, T arr[], double average);

int main()
{    
    int arri[] = { 2, 3, 4, 6, 7, 8, 9, 0 };
    double arrd[] = { 2.1, 2.3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2 };
    long arrl[] = { 2, 3, 4, 6, 7, 8, 9, 0 };
    const char arrc[] = "Hello world!";

    int sizei = sizeof(arri) / sizeof(arri[0]);
    double averagei = SrAr(arri, sizei);
    Print(sizei, arri, averagei);

    int sized = sizeof(arrd) / sizeof(arrd[0]);
    double averaged = SrAr(arrd, sized);
    Print(sized, arrd, averaged);

    int sizel = sizeof(arrl) / sizeof(arrl[0]);
    double averagel = SrAr(arrl, sizel);
    Print(sizel, arrl, averagel);

    int sizec = sizeof(arrc) / sizeof(arrc[0])-1; 
    double averagec = SrAr(arrc, sizec); 
    Print(sizec, arrc, averagec);

    return 0;
}

template <class T>
void Print(int size, T arr[], double average)
{
    for (int i = 0; i < size; i++)
        if (i == size - 1) std::cout << arr[i];
        else std::cout << arr[i] << ", ";      
    std::cout << std::endl;
    std::cout << "SrAr = " << average << std::endl;
}

template <class T>
double SrAr(T arr[], int size)
{
    double sum{};
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}
