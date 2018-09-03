#pragma once

#ifndef _SM_H
#define _SM_H

#include <iostream>
#include <string>
#include <map>

#include "manager.h"
#include "item.h"
#include "stock_item.h"

class StockManager: public Manager
{
public:
    StockManager(std::string _name, std::map<int, Item*>& _map);
    ~StockManager();
private:
    std::string company_name;
    int stock_item_id;
    std::map<int, Item*>& m_stock_list;

public:
    void handle_stock();

private:
    void menu();
    void showlist();
    void additem();
    void removeitem();
    void modifystock();

public:
    Item* get_item_by_id(int id);  
    
};
#endif