#include <iostream>
#include <string>
#include "ToDoList.hpp"

using namespace std;

int main()
{
    
    int choice;
    string list;
    
    
    ToDoList item1;
    
    cout << "To Do List" << endl;
    do{
        
        //Menu display
        cout << "[1] Add Item" << endl;
        cout << "[2] Toggle Item Status" << endl;
        cout << "[3] List All Items" << endl;
        cout << "[4] Exit\n>>";
        cin >> choice;
        cout << "--------------------------" << endl;

        switch (choice) {
            case 1:
                cout << "Enter ToDo Item: ";
                cin.ignore();   //without this ignore getline will read white space after colon
                getline(cin, list);
                item1.addItem(list);
                break;
            case 2:
                item1.Toggle();
                break;
            case 3:
                item1.listItems();
                break;
            case 4:
                break;
            default:
                break;
        }
            
    }while(choice != 4);
    
   
    return 0;
}
