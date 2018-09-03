#pragma once
#ifndef STOCK_ITEM_H
#define STOCK_ITEM_H

#include "item.h"

class StockItem : public Item
{
public:
	StockItem(int _id, std::string _name, int _cost, int _count);
	virtual	~StockItem();
private:
	int item_count;

public:
	void set_item_count(int _count);
	int get_item_count();
	virtual std::string to_string();
};
#endif