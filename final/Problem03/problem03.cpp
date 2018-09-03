#include "problem03.h"
#include <iostream>

member::member(int _id, std::string _name)
:m_id(_id), m_name(_name)
{
    
}

activity::activity(int _id, std::string _contents)
:member_id(_id), m_contents(_contents)
{
    
}

club_management_system::club_management_system()
:member_id_count(0)
{
    
}

int club_management_system::add_member(std::string name)
{
    member_db.insert(std::pair<int, member>(member_id_count, member(member_id_count, name)));
    return member_id_count++;
}

int club_management_system::get_member_id(std::string name)
{
    for(std::map<int, member>::iterator it = member_db.begin();
        it != member_db.end();
        it++)
        {
            if(name.compare(it->second.get_name()) == 0)
                return it->first;
        }
        
    return -1;
}

int club_management_system::remove_member(std::string name)
{
    int found_id = get_member_id(name);
    if(found_id >= 0)
    {
        std::map<int, member>::iterator iter = member_db.find(found_id);
        member_db.erase(iter);
    }
    return found_id;
}

int club_management_system::remove_member(int _id)
{
    std::map<int, member>::iterator iter = member_db.find(_id);
    if(iter != member_db.end())
        member_db.erase(iter);
    
    return _id;
}
    
void club_management_system::log_activity(int _id, std::string action)
{
    activity_log.push_back(activity(_id, action));
}

void club_management_system::show_activity(int _id)
{
    for(std::vector<activity>::iterator it = activity_log.begin();
        it != activity_log.end();
        it++)
        {
            if((*it).get_id() == _id)
            {
                std::map<int, member>::iterator iter = member_db.find(_id);
                std::cout << iter->second.get_name() << "'s activity is " << (*it).get_contents() << std::endl;
            }
        }
}

void club_management_system::show_members()
{
   for(std::map<int, member>::iterator it = member_db.begin();
        it != member_db.end();
        it++)
        {
            std::cout << it->first << ": " << it->second.get_name() << std::endl;
        }
}