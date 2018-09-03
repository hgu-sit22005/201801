#pragma once
#ifndef _SAM_H
#define _SAM_H

#include <vector>
#include "manager.h"
class SalesManager: public Manager
{
private:
	std::vector<Item*> m_history;
	std::string company_name;
	Manager* m_stock_manager;
	Manager* m_event_manager;

public:
	SalesManager(std::string _name, Manager* stock_manager, Manager* event_manager);
	virtual ~SalesManager();
private:
	void menu();
    void history();
    void sell();

public:
	void handle_sales();
	void showlist();
	Item* get_item_by_id(int id);
};
#endif
