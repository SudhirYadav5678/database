// search.cpp
#include <iostream>
#include <vector>
#include "database.h"

// Use the same database vector defined in insert.cpp
extern std::vector<Record> database;

void searchRecord(int id)
{
    bool found = false;
    for (const auto &record : database)
    {
        if (record.id == id)
        {
            std::cout << "Record found: Name = " << record.name << ", ID = " << id << std::endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        std::cout << "No record found with ID: " << id << std::endl;
    }
}
