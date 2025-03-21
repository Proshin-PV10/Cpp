#include <iostream>
#include <stdexcept>

class A {
private:
    int* data;
    size_t size;

public:
    A() : data(nullptr), size(0) {}

    A(size_t size) : size(size)
    {
        data = new int[size];
        for (size_t i = 0; i < size; ++i)
        {
            data[i] = 0;
        }
    }

    A(const A& other) : size(other.size)
    {
        data = new int[size];
        for (size_t i = 0; i < size; ++i)
        {
            data[i] = other.data[i];
        }
    }

    A& operator=(const A& other)
    {
        if (this != &other) {
           
            size = other.size;
            data = new int[size];
            for (size_t i = 0; i < size; ++i)
            {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    const int& operator[](size_t index) const {
        return data[index];
    }

    size_t getSize() const { 
        return size;
    }

    friend std::ostream& operator<<(std::ostream& os, const A& a) {
        for (size_t i = 0; i < a.size; ++i) {
            os << a.data[i] << " ";
        }
        return os;
    }
};

int main() {
    A a1;
    A a2(10);
    std::cout << "a2: " << a2 << std::endl;
    A a3 = a2;
    std::cout << "a3: " << a3 << std::endl;
    a1 = a3;
    std::cout << "a1: " << a1 << std::endl;
    a2 = A(20);
    std::cout << "a2: " << a2 << std::endl;
    const A a4(5);
    std::cout << "a4: " << a4 << std::endl;
    for (size_t i = 0; i < a2.getSize(); ++i) 
    {
        std::cout << a4[i];
    }

    return 0;
}

