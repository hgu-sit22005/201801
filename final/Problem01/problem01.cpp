#include "problem01.h"

#include <iostream>

Student::Student(int _id, std::string _name, int _point)
:m_id(_id), m_name(_name), m_point(_point)
{
    
}

int get_id()
{
    return _id;
}
std::string get_name()
{
    return m_name;
}
    
int get_point()
{
    return m_point;
}

void set_id(int _id)
{
    m_id = _id;
}

void set_name(std::string _name)
{
    m_name = _name;
}

void update_point(int _point)
{
    m_point = _point;
}

void print()
{
    std::cout << "--------------------" << std::endl;
    std::cout << "ID:" << Student.m_id << ", Name:" << Student.m_name << std::endl;
    std::cout << "Point: " << Student.m_point << std::endl;
    std::cout << "--------------------" << std::endl;
}