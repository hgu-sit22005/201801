#pragma once
#ifndef EVENT_ITEM_H
#define EVENT_ITEM_H

#include "item.h"
#include <string>

class EventItem: public Item
{
public:
	EventItem(int _id, std::string _name, int _cost, double _rate);
	virtual ~EventItem();

private:
	double discount_rate;

public:
	void 	set_discount_rate(double _discount);
	double get_discount_rate();
	std::string to_string();
};

#endif