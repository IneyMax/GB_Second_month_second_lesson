#include "Person.h"
#include <iostream>

int person::person_id_ = 1;

void person::set_p_name(const std::string name)
{
    p_name_ = name;
}

void person::set_p_age(const int age)
{
    p_age_ = age;
}

void person::set_p_weight(const int weight)
{
    p_weight_ = weight;
}

std::string person::get_p_name() const
{
    return p_name_;
}

int person::get_p_age() const
{
    return p_age_;
}

int person::get_p_weight() const
{
    return p_weight_;
}

int person::get_person_id() const
{
    return p_id;
}
