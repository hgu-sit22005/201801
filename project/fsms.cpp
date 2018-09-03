#include "fsms.h"

/* You need to move the definitions from the fsms.h */


void FSMS::run()
{
    top_menu();
    int choice;
    choice = get_choice();
    
    while(choice != 99)
    {
        // Something
        switch(choice)
        {
            case 1:
            {
                stm.handle_stock();
            }
            break;
            
            case 2:
            {
                sam.handle_sales();
            }
            break;
            
            case 3:
            {
               em.handle_event();
            }
            break;
            
            break;
            
            default:
            {
                
            }
            break;
        }
        
        top_menu();
        choice = get_choice();
    }
}