#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ToDoItem
{
private:
    string text;
    bool status = false;    //false == unfinished
    
public:
    //constructors
    ToDoItem()
    {
        text = "";
    }
    //accessors
    string getText(){return text;}
    bool getStatus(){return status;
        
    }
    //mutators
    void setText(string t){text = t;}
    void setStatus(bool s){status = s;}
    
    //method
    void changeStatus();
    void Display();
        
};
