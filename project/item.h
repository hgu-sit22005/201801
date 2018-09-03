#pragma once

#ifndef _ITEM_H
#define _ITEM_H

#include <string>

class Item
{
public:
    Item(int _id, std::string _name, int _cost);    
    virtual ~Item();
protected:
    int         item_id;   // Numeric ID for item to distinguish from other item
    std::string item_name; 
    int         item_cost;
    
public:
    int get_id()
    {
        return item_id;
    }

    void set_name(std::string _name)
    {
        item_name = _name;        
    }
    
    const std::string& get_name()
    {
        return item_name;
    }
    
    virtual void set_cost(int _cost)
    {
        item_cost = _cost;
    }
    
    virtual int get_cost()
    {
        return item_cost;
    }

    virtual std::string to_string() =0;

};
#endif