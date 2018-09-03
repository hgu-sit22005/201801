#include "sam.h"
#include <iostream>
#include "stock_item.h"
#include "event_item.h"

SalesManager::SalesManager(std::string _name, Manager* stock_manager, Manager* event_manager)
:company_name(_name), m_stock_manager(stock_manager), m_event_manager(event_manager)
{

}

SalesManager::~SalesManager()
{

}

void SalesManager::menu()
{

}


void SalesManager::history()
{

}

void SalesManager::sell()
{

}

void SalesManager::handle_sales()
{

}

void SalesManager::showlist()
{
    history();
}

Item* SalesManager::get_item_by_id(int id)
{
    return nullptr;
}