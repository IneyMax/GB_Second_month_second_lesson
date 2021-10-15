#pragma once
#include <string>

/*Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт).
*У Fruit есть две переменные-члена: name (имя) и color (цвет).
*Добавить новый класс GrannySmith, который наследует класс Apple.*/

class fruit
{
    std::string f_name_;
    std::string f_color_;

public:
    fruit(const std::string name, const std::string color)
        : f_name_(name), f_color_(color)
    {
    }
    
    std::string get_f_name();
    std::string get_f_color();
    
};


class banana : public fruit
{
public:
    banana(): fruit("Banana", "yellow")
    {
    }
};


class apple : public fruit
{
public:
    apple(): fruit("Apple", "red")
    {
    }
};

// TODO Доделать этот сорт :) (Через расширение функционала - изменение метода базового класса)
class granny_smith : public apple
{
public:
    granny_smith(): apple()
    {
        
    }
};



