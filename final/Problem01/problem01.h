#pragma once

#include <string>

// Notice!!
// You should not modify the header file
// If you modify the header file you will get zero point.

class Student
{
public:
    Student(int _id, std::string _name, int _point);
    
public:
    int get_id();
    std::string get_name();
    int get_point();
    
private:
    void set_id(int _id);
    void set_name(std::string _name);
    
public:
    void update_point(int _point);
    
public:
    void print();
    
private:
    int m_id;
    std::string m_name;
    int m_point;
};