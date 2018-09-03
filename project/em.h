#pragma once

#ifndef _EM_H
#define _EM_H

#include <iostream>
#include <string>
#include <map>

#include "manager.h"
#include "item.h"

class EventManager: public Manager
{
public:
    EventManager(std::string _name, std::map<int, Item*>& _items, Manager* _manager);
    
    virtual ~EventManager();
private:
    std::string company_name;
    std::map<int, Item*>& m_event_items;
    Manager* m_stock_manager;
    
public:
    /////////
    /// Function Name: handle_event
    /// Description: This function handles user's event
    void handle_event();
    
public:
    void menu();
    void showlist();
    
private:
    void addevent();
    void removeevent();
    void modifyevent();
    
public:
    virtual Item* get_item_by_id(int id);
};

#endif