#include <iostream>
#include "ToDoItem.hpp"

using namespace std;

class ToDoList
{
private:
    ToDoItem *item;
    int size = 5;
    int itemCount = 0;
public:
    //constructors
    ToDoList()
    {
        item = new ToDoItem[size];
    }
    
    //methods
    void addItem(string name);
    void Resize();
    void listItems();
    void Toggle();
};
