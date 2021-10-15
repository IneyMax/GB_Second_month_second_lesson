#include "Student.h"

#include <iostream>

void student::study_year_up()
{
    study_year_++;
}

void student::set_study_year(const int study_year)
{
    study_year_ = study_year;
}

int student::get_study_year()
{
    return study_year_;
}

void student::get_all_info()
{
    std::cout << "Student id: " << get_person_id() << "\n";
    std::cout << "Student name: " << get_p_name() << "\n";
    std::cout << "Student age: " << get_p_age() << "\n";
    std::cout << "Student weight: " << get_p_weight() << "\n";
    std::cout << "Student year: " << get_study_year() << "\n";
}
