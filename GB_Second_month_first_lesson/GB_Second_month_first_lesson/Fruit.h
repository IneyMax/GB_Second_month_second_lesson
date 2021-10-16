#pragma once
#include <string>

class fruit
{
    std::string f_color_;
    std::string f_name_;

public:
    fruit(const std::string color = "", const std::string name = "")
        : f_color_(color), f_name_(name)
    {
    }
    
    std::string get_f_name();
    std::string get_f_color();
    
};


class apple: public fruit
{
    protected: 
    apple(std::string name, std::string color)
        : fruit(name, color)
    {
    }
 
public:
    apple(std::string color="red")
        : fruit("apple", color)
    {
    }
};
 
class banana : public fruit
{
public:
    banana()
        : fruit("banana", "yellow")
    {
 
    }
};
 
class granny_smith : public apple
{
public:
    granny_smith()
        : apple("Granny Smith apple", "green")
    {
 
    }
};


