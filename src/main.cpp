// main.cpp
#include <iostream>
#include "database.h"

int main()
{
    int choice, id;
    std::string name;

    while (true)
    {
        std::cout << "\n1. Insert Record\n2. Search Record\n3. Display Records\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter ID: ";
            std::cin >> id;
            insertRecord(name, id);
            break;
        case 2:
            std::cout << "Enter ID to search: ";
            std::cin >> id;
            searchRecord(id);
            break;
        case 3:
            displayRecords();
            break;
        case 4:
            return 0;
        default:
            std::cout << "Invalid choice, try again." << std::endl;
        }
    }

    return 0;
}
