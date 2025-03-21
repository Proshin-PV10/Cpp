#include <iostream>

class Stack 
{
private:
    int arr[10];
    int length;
public:
    Stack()
    {
        reset();
    }    
    void reset() 
    {
        length = 0;
        for (int i = 0; i < 10; i++) 
        {
            arr[i] = 0;
        }
    }    
    bool push(int value) 
    {
        if (length < 10) 
        {
            arr[length] = value;
            length++;
            return true;
        }
        else {
            return false; 
        }
    }    
    bool pop()
    {
        if (length > 0) 
        {
            length--;
            return true;
        }
        else 
        {            
            return false; 
        }
    }   
    void print() 
    {
        std::cout << "( ";
        for (int i = 0; i < length; i++) 
        {
            std::cout << arr[i] << " ";
        }
        std::cout << ")" << std::endl;
    }
};

int main() {
    Stack stack;
    stack.reset();
    stack.print(); // ( )
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print(); // ( 3 7 5 )
    stack.pop();
    stack.print(); // ( 3 7 )
    stack.pop();
    stack.pop();
    stack.print(); // ( )
    return 0;
}
