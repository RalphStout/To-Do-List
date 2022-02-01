#include "ToDoItem.hpp"

void ToDoItem::changeStatus()
{
    bool stat = NULL;
    
    getStatus();
    
    if(status == false)
        stat = true;
    else if(status == true)
        stat = false;
    
    setStatus(stat);
    
    }

void ToDoItem::Display()
{
    string stat;
    
    if(status == false)
    {
        stat = "Unfinished";
    }
    else if(status == true)
        stat = "finished";
    
    cout << setw(10) << stat << " | " << text << endl;
}

