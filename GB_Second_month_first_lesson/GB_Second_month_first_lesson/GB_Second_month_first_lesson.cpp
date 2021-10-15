#include "Student.h"

#include <iostream>

int main()
{
    // std::cout << sizeof(person) << "\n" << sizeof(student) << "\n";
    student first;
    student second;
    student third;
    third.set_study_year(4);
    third.set_p_age(24);
    third.set_p_name("Max");
    third.set_p_weight(80);
    third.get_all_info();
    return 0;
}
