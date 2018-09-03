#pragma once

#include <string>

// Notice!!
// You should not modify the header file
// If you modify the header file you will get zero point.

class Item
{
public:
    Item();
    Item(char* name, int cost);
    Item(const Item& _rhs);
    ~Item();
    
    Item& operator=(const Item& _rhs);
    
public:
    const char* get_name();
    int         get_item_cost();

public:
    void print();
private:
    char* m_name;
    int   m_cost;
};

class ItemContainer
{
public:
    ItemContainer(int _size);
    ~ItemContainer();

public:
    void add_item(char* name, int cost);
    
public:
    void sort_by_name();
    void sort_by_cost();
    
public:
    void print();

private:
    int   m_count;
    int   m_array_size;
    Item* m_array;
};