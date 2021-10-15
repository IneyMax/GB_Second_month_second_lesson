#pragma once
#include <string>

/*Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт).
*У Fruit есть две переменные-члена: name (имя) и color (цвет).
*Добавить новый класс GrannySmith, который наследует класс Apple.*/

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


class banana : public fruit
{
public:
    banana(): fruit("yellow", "Banana")
    {
    }
};


class apple : public fruit
{
public:
    apple(const std::string color = "green", const std::string name = "" ): fruit(color, name + "apple")
    {
    }
};


class granny_smith : public apple
{
public:
    granny_smith(const std::string color = "green", const std::string name = "Granny Smith "): apple(color, name)
    {
        
    }
};



