#ifndef _FSMS_H
#define _FSMS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "item.h"
#include "em.h"
#include "stm.h"
#include "sam.h"

class FSMS
{
private:
    std::string company_name;
    std::map<int, Item*> m_stock;
    std::vector<Item*> sales_records;
    std::map<int, Item*> m_events;

private:
    StockManager stm;
    EventManager em;
    SalesManager sam;

private:
    FSMS()
    :stm("", m_stock), em("", m_events, &stm), sam("", &stm, &em)
    {
        
    }

public:
    FSMS(std::string& name)
    :stm(name, m_stock), company_name(name), em(name, m_events, &stm), sam(name, &stm, &em)
    {

    }
private:
    void set_company_name(std::string& name)
    {
        company_name = name;
    }
    
public:
    const std::string& get_company_name()
    {
        return company_name;
    }
    
public:
    void run();

    void top_menu()
    {
        std::cout << "Welcome to " << get_company_name() << std::endl;
        std::cout << "1. Stock Management" << std::endl;
        std::cout << "2. Sales Management" << std::endl;
        std::cout << "3. Event Management" << std::endl;
        std::cout << "99. Terminate" << std::endl;
    }

    int get_choice()
    {
        int choice;
        std::cout << "Enter number:";
        std::cin >> choice;
        return choice;
    }
};

#endif
