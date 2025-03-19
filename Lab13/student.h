
#include "human.h"

class student : public human 
{
public:
    student(std::string last_name, std::string name, std::string second_name, std::vector<int> scores)
        : human(last_name, name, second_name), scores(scores) {}

    float get_average_score() const
    {
        unsigned int count_scores = this->scores.size();
        unsigned int sum_scores = 0;
        for (unsigned int i = 0; i < count_scores; ++i) 
        {
            sum_scores += this->scores[i];
        }
        return static_cast<float>(sum_scores) / static_cast<float>(count_scores);
    }
        void get_info() const override 
    {
        std::cout << "Студент: " << get_full_name() << " Средняя оценка: " << get_average_score() << std::endl;
    }

private:
    std::vector<int> scores;
};