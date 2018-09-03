#pragma once

#ifndef _MANAGER_H
#define _MANAGER_H

#include "item.h"

class Manager
{
public:
    Manager(){}

public:
    virtual void menu(){ }
    virtual void showlist() = 0;
    virtual Item* get_item_by_id(int id) = 0;
};
#endif