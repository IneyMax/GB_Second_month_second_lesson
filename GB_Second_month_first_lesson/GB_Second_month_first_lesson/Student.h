#pragma once
#include "Person.h"

#pragma pack(push, 1)
class student : public person
{
    int study_year_;
public:
    student(const int study_year = 0)
        :
          study_year_(study_year)
    {
    }

    void study_year_up();
    void set_study_year(const int study_year);
    int get_study_year ();
    void get_all_info();
};
#pragma pack(pop)
