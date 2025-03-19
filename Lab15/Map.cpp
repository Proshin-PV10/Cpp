#include <iostream>
#include <map>
#include <string>

struct StudentGrade {
    std::string name;
    char grade;    
    StudentGrade(const std::string& n, char g) : name(n), grade(g) {}
};

int main() {
    system("chcp 1251");
    std::map<std::string, char> grades;

    while (true)
    {
        std::cout << "Введите имя студента (или 'exit' для выхода): ";
        std::string Name;
        std::getline(std::cin, Name);
        if (Name == "exit") break;
        std::cout << "Введите оценку (A, B, C, D, F): ";
        char grade;
        std::cin >> grade;
        std::cin.ignore();
        
        if (grade < 'A' || grade > 'F') 
        {
            std::cout << "Неверная оценка. Попробуйте снова.\n";
            continue;
        }
        grades[Name] = grade;
        std::cout << "Оценка " << grade << " успешно присвоена студенту " << Name << ".\n";
    }
    std::cout << "\nОценки студентов:\n";
    for (const auto& entry : grades) 
    {
        std::cout << "Студент: " << entry.first << ", Оценка: " << entry.second << '\n';
    }
    return 0;
}
