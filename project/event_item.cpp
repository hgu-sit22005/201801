#include "event_item.h"
#include <sstream>

EventItem::EventItem(int _id, std::string _name, int _cost, double _rate)
:Item(_id, _name, _cost), discount_rate(_rate)
{

}

EventItem::~EventItem()
{

}

void EventItem::set_discount_rate(double _discount)
{
	discount_rate = _discount;
}

double EventItem::get_discount_rate()
{
	return discount_rate;
}

std::string EventItem::to_string()
{
	std::stringstream str;
    str << "Item ID: " << item_id << "\t";
    str << "Item Name: " << item_name << "\t";
    str << "Item Cost: " << item_cost << "\t";
    str << "Discount Rate: " << discount_rate << "\t";
    return str.str();
}