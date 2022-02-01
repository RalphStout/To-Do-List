#include "ToDoList.hpp"

void ToDoList::addItem(string name)
{
    if(itemCount >= size)
    {
        Resize();
    }
    
    item[itemCount].setText(name);
    itemCount++;
}


void ToDoList::Resize()
{
    //allocates a new larger array
    ToDoItem *newArr = new ToDoItem[size * 2];
    
    //algorithm to copy old array to new larger array
    for(int i = 0; i < size; i++)
    {
        newArr[i] = item[i];
    }
    
    //updates the size of the array
    size *= 2;
    
    //deletes the items in original item array, then transfers new data to empty item array
    delete[] item;
    item = newArr;
}

void ToDoList::listItems()
{
    for(int i = 0; i < itemCount; i++)
    {
        cout << i + 1 << " | ";
        item[i].Display();      //calls display function that belongs to ToDoItem class
    }
    cout << endl;
}

void ToDoList::Toggle()
{
    int toggle;
    
    
    do{
    
    listItems();
        
    cout << "Enter a number to toggle or enter 999 to exit: ";
    cin >> toggle;
    
        item[toggle - 1].changeStatus();
        
        
    }while(toggle != 999);
}
