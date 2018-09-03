#include "em.h"
#include "event_item.h"

EventManager::EventManager(std::string _name, std::map<int, Item*>& _items, Manager* _manager)
:m_event_items(_items), m_stock_manager(_manager)
{
    company_name = _name;
}

EventManager::~EventManager()
{
    for(std::map<int, Item*>::iterator iter = m_event_items.begin();
        iter != m_event_items.end();
        iter++)
    {
        Item* ptr = iter->second;
        delete ptr;
    }
}

void EventManager::menu()
{
    std::cout << company_name << " Event Menu" << std::endl;
    std::cout << "1. Show current event list" << std::endl;
    std::cout << "2. Add event" << std::endl;
    std::cout << "3. Remove event" << std::endl;
    std::cout << "4. Modify event" << std::endl;
    std::cout << "99. Go back" << std::endl;
}

void EventManager::showlist()
{
        std::cout << ">> Event list <<" << std::endl;
        std::cout << "-----------------------" << std::endl;

        for(std::map<int, Item*>::iterator iter = m_event_items.begin();
            iter != m_event_items.end();
            iter++)
        {
            std::cout << (iter->second)->to_string() << std::endl;
        }

        std::cout << "-----------------------" << std::endl;
}

void EventManager::addevent()
{
    std::cout << ">> Current Stock Status << " << std::endl;
    std::cout << "-----------------------" << std::endl;
    m_stock_manager->showlist();
    std::cout << "-----------------------" << std::endl;

    int selected_item;
    std::cout << "Select Item ID >> ";
    std::cin >> selected_item;

    Item* item = m_stock_manager->get_item_by_id(selected_item);

    if(item != nullptr)
    {
        double discount;
        std::cout << "Enter Discount Rate: ";
        std::cin >> discount;

        EventItem* e_item = new EventItem(item->get_id(), item->get_name(), item->get_cost(), discount);
        m_event_items.insert(std::pair<int, Item*>(item->get_id(), e_item));
    }
    else
    {
        std::cout << "Wrong Item ID" << std::endl;
    }
}

void EventManager::removeevent()
{
    int selection;
    std::string choice;
    
    showlist();
    std::cout << "Select an event to remove from the list: "<< std::endl;
    std::cin >> selection;
    
    Item* item = get_item_by_id(selection);
    if(item != nullptr)
    {
        std::cout << item->to_string() << std::endl;
        std::cout << "Do you want to remove event #" << selection << "? (y/n)" << std::endl;
        std::cin >> choice;
        
        if(choice.compare("y") == 0)
        {
            std::cout << "event #" << selection << " removed." << std::endl;
            m_event_items.erase(selection);
        }
        else
        {
            std::cout << "operation canceled." << std::endl;
        }   
    }
    else
    {
        std::cout << "Wrong event id" << std::endl;
    }
}

void EventManager::modifyevent()
{
    int selection;
    std::string choice;
    double discount;
    
    showlist();
    std::cout << "Select an event from the list to modify: "<< std::endl;
    std::cin >> selection;

    EventItem* item = (EventItem*)get_item_by_id(selection);
    if(item != nullptr)
    {
        std::cout << item->to_string() << std::endl;
        std::cout << "Enter a new discount ratio:" << std::endl;
        std::cin >> discount;
        
        std::cout << "Do you want to change the discount ratio of event #" << selection << "? (y/n)" << std::endl;
        std::cin >> choice;
        
        if(choice.compare("y") == 0)
        {
            std::cout << "Event discount ratio has been changed." << std::endl;
            item->set_discount_rate(discount);
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

void EventManager::handle_event()
{
    std::cout << "****************" << std::endl;
    menu();
    
    std::string choice;
    std::cout << "Enter number:";
    std::cin >> choice;
    
    while(choice.compare("99") != 0)
    {
        if(choice.compare("1") == 0)
            showlist();
        else if(choice.compare("2") == 0)
            addevent();
        else if(choice.compare("3") == 0)
            removeevent();
        else if(choice.compare("4") == 0)
            modifyevent();
            
        menu();
        std::cout << "Enter number:";
        std::cin >> choice;
    }
}

Item* EventManager::get_item_by_id(int id)
{
    std::map<int, Item*>::iterator iter;
    iter = m_event_items.find(id);

    if(iter != m_event_items.end())
    {
        return iter->second;
    }
    else
        return nullptr;
}