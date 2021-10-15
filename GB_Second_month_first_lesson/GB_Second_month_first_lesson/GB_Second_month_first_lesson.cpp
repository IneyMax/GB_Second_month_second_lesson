#include "Student.h"
#include "Fruit.h"

#include <iostream>

int main()
{
    // std::cout << sizeof(person) << "\n" << sizeof(student) << "\n";
    /*student first;
    student second;
    student third;
    third.set_study_year(4);
    third.set_p_age(24);
    third.set_p_name("Max");
    third.set_p_weight(80);
    third.get_all_info();*/
    
    apple a("red");
    banana b;
    granny_smith c;

    std::cout << "My " << a.get_f_name() << " is " << a.get_f_color() << ".\n";
    std::cout << "My " << b.get_f_name() << " is " << b.get_f_color() << ".\n";
    std::cout << "My " << c.get_f_name() << " is " << c.get_f_color() << ".\n";
    return 0;
}
