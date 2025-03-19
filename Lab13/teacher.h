
#include "human.h"

class teacher : public human 
{
public:
    teacher(std::string last_name, std::string name, std::string second_name, unsigned int work_time)
        : human(last_name, name, second_name), work_time(work_time) {}

    unsigned int get_work_time() const 
    {
        return this->work_time;
    }

    void get_info() const override 
    { 
        std::cout << "Учитель: " << get_full_name() << " Среднее количество рабочих часов: " << get_work_time() << std::endl;
    }

private:
    unsigned int work_time;
};