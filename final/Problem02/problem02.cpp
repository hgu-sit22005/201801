#include "problem02.h"

#include <iostream>
#include <cstring>
#include <stdlib.h>

Item::Item()
:m_cost(-1), m_name(nullptr) 
{
    
}

Item::Item(char* name, int cost)
:m_cost(cost)
{
    int str_len = strlen(name);
    m_name = new char[str_len+1];
    strcpy(m_name, name);
    m_name[str_len] = '\0';
}

Item::Item(const Item& _rhs)
{
    m_cost = _rhs.m_cost;
    
    if(m_name != nullptr)
    {
        delete [] m_name;
    }
    int str_len = strlen(_rhs.m_name);
    m_name = new char[str_len+1];
    strcpy(m_name, _rhs.m_name);
    m_name[str_len] = '\0';
    
}

Item& Item::operator=(const Item& _rhs)
{
    m_cost = _rhs.m_cost;
    
    if(&_rhs != this)
    {
        if(m_name != nullptr)
        {
            delete [] m_name;
        }
        
        int str_len = strlen(_rhs.m_name);
        m_name = new char[str_len+1];
        strcpy(m_name, _rhs.m_name);
        m_name[str_len] = '\0';
    }
}

Item::~Item()
{
    delete [] m_name;
}

const char* Item::get_name()
{
    return m_name;
}

int Item::get_item_cost()
{
    return m_cost;
}

void Item::print()
{
    if(m_name == nullptr)
    {
        std::cout << "NULL" << ":" << m_cost << std::endl;
    }
    else
    {
        std::cout << m_name << ":" << m_cost << std::endl;
    }
}


ItemContainer::ItemContainer(int _size)
:m_array_size(_size), m_count(0)
{
    m_array = new Item[_size];
}

ItemContainer::~ItemContainer()
{
    delete [] m_array;    
}

void ItemContainer::add_item(char* name, int cost)
{
    if(m_count < m_array_size)
    {
        m_array[m_count++] = Item(name, cost);
    }
}

void ItemContainer::sort_by_name()
{
    int i, j, indexMin;
    Item temp;

    for (i = 0; i < m_array_size - 1; i++)
    {
        indexMin = i;
        for (j = i + 1; j < m_array_size; j++)
        {
            if (strcmp(m_array[j].get_name(), m_array[indexMin].get_name()) < 0)
            {
                indexMin = j;
            }
        }
        temp = m_array[indexMin];
        m_array[indexMin] = m_array[i];
        m_array[i] = temp;
    }
}

void ItemContainer::sort_by_cost()
{
    int i, j, indexMin;
    Item temp;

    for (i = 0; i < m_array_size - 1; i++)
    {
        indexMin = i;
        for (j = i + 1; j < m_array_size; j++)
        {
            if (m_array[j].get_item_cost() < m_array[indexMin].get_item_cost())
            {
                indexMin = j;
            }
        }
        temp = m_array[indexMin];
        m_array[indexMin] = m_array[i];
        m_array[i] = temp;
    }
}

void ItemContainer::print()
{
    for(int i = 0; i < m_array_size; i++)
    {
        m_array[i].print(); 
    }
}