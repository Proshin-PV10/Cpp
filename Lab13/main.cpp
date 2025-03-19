#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
int main() 
{
    system("chcp 1251");
    char choice;
    std::vector<int> scores = { 5, 3, 4, 4, 5, 3, 3, 3, 3, 3 };

    std::cout << "Учитель или студент (t/s): ";
    std::cin >> choice;

    human* person = nullptr;

    if (choice == 't') 
    {
        unsigned int work_time = 40; 
        person = new teacher("Петров", "Иван", "Алексеевич", work_time);
    }
    else 
    {
        person = new student("Сергеев", "Дмитрий", "Сергеевич", scores);
    }
    person->get_info();
    delete person; 
    return 0;
}