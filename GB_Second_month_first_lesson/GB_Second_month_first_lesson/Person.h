#pragma once
#include <string>

#pragma pack(push, 1)
class person
{
private:
    static int person_id_;
    std::string p_name_;
    int p_age_;
    int p_weight_;
    int p_id {};

public:
    person(const std::string name = "", const int age = 0, const int weight = 0)
        : p_name_(name), p_age_(age), p_weight_(weight)
    {
        p_id = person_id_ ++;
    }

    void set_p_name(const std::string name);
    void set_p_age(const int age);
    void set_p_weight(const int weight);
    std::string get_p_name() const;
    int get_p_age() const;
    int get_p_weight() const;
    int get_person_id () const;
    
};
#pragma pack(pop)
