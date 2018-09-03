#pragma once

#include <string>
#include <vector>
#include <map>

class member
{
public:
    member(int _id, std::string _name);

public:
    int get_id(){ return m_id; }
    std::string get_name() { return m_name; }
    
private:
    int m_id;
    std::string m_name;
};

class activity
{
public:
    activity(int _id, std::string _contents);
    
public:
    int get_id(){ return member_id; }
    std::string get_contents(){ return m_contents; }
    
private:
    int member_id;
    std::string m_contents;
};

class club_management_system
{
public:
    club_management_system();
    
public:
    int add_member(std::string name);
    int get_member_id(std::string name);
    int remove_member(std::string name);
    int remove_member(int _id);
    
    void show_members();
public:
    void log_activity(int _id, std::string action);
    void show_activity(int _id);
    
private:
    int member_id_count;
    std::map<int, member> member_db;
    std::vector<activity> activity_log;
};