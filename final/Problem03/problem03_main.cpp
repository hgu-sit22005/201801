#include "problem03.h"
#include <iostream>

int main(int argc, char** argv)
{
    club_management_system cms;
    
    cms.add_member("cbchoi");
    cms.add_member("san");
    cms.add_member("john");
    cms.add_member("yang");
    cms.add_member("jang");
    cms.add_member("jung");
    
    cms.show_members();
    
    std::cout << "---------------" << std::endl;
    std::cout << "Member ID of yang is " << cms.get_member_id("yang") << std::endl;
    
    cms.log_activity(3, "work");
    cms.log_activity(3, "sleep");
    cms.log_activity(3, "play");
    cms.show_activity(3);
    
    std::cout << "---------------" << std::endl;
    cms.remove_member(3);
    cms.remove_member("jang");
    cms.show_members();
    return 0; 
}