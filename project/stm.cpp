#include "stm.h"


StockManager::StockManager(std::string _name, std::map<int, Item*>& _map)
:m_stock_list(_map), stock_item_id(0)
{
    company_name = _name;
}

StockManager::~StockManager()
{
	for(std::map<int, Item*>::iterator iter = m_stock_list.begin();
    	iter != m_stock_list.end();
    	iter++)
    {
    	Item* ptr = iter->second;
    	delete ptr;
    }
}

void StockManager::menu()
{
    //std::cout << get_company_name() << " Stock Menu" << std::endl;
    std::cout << "1. Show current item list" << std::endl;
    std::cout << "2. Add item to the stock" << std::endl;
    std::cout << "3. Remove item from the stock" << std::endl;
    std::cout << "4. Modify item counts" << std::endl;
    std::cout << "99. Go back" << std::endl;
}

void StockManager::showlist()
{
    std::cout << ">> Current item list <<" << std::endl;
    std::cout << "-----------------------" << std::endl;

    for(std::map<int, Item*>::iterator iter = m_stock_list.begin();
        iter != m_stock_list.end();
        iter++)
    {
        std::cout << (iter->second)->to_string() << std::endl;
    }

    std::cout << "-----------------------" << std::endl;
}

void StockManager::additem()
{
    std::string item_name;
    int item_cost;
    int item_count;

    std::cout << ">> Add item to the list <<" << std::endl;
    std::cout << "Enter Item Name:" << std::endl;
    std::cin >> item_name;
    
    std::cout << "Enter Item Cost:" << std::endl;
    std::cin >> item_cost;
    
    std::cout << "Enter Item Count:" << std::endl;
    std::cin >> item_count;
   
    std::cout << "-----------------------" << std::endl;
    std::cout << "Item ID: "  << stock_item_id << std::endl;
    std::cout << "Item Name: "  << item_name << std::endl;
    std::cout << "Item Cost: "  << item_cost << std::endl;
    std::cout << "Item Count: " << item_count << std::endl;
    std::cout << "-----------------------" << std::endl;

    Item* s_item = new StockItem(stock_item_id, item_name, item_cost, item_count);
    m_stock_list.insert(std::pair<int, Item*>(stock_item_id++, s_item));
}

void StockManager::removeitem()
{
    int selection;
    std::string choice;
    
    showlist();
    std::cout << "Select an item to remove from the list: "<< std::endl;
    std::cin >> selection;
    
    Item* item = get_item_by_id(selection);
    if(item != nullptr)
    {
    	std::cout << item->to_string() << std::endl;
    	std::cout << "Do you want to remove item #" << selection << "? (y/n)" << std::endl;
	    std::cin >> choice;
	    
	    if(choice.compare("y") == 0)
	    {
	        std::cout << "item #" << selection << " removed." << std::endl;
	        m_stock_list.erase(selection);
	    }
	    else
	    {
	        std::cout << "operation canceled." << std::endl;
	    }	
    }
    else
    {
    	std::cout << "Wrong Item_id" << std::endl;
    }
}

void StockManager::modifystock()
{
    
}

Item* StockManager::get_item_by_id(int _id)
{
	
}

void StockManager::handle_stock()
{
	
}