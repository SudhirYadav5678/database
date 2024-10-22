// display.cpp
#include <iostream>
#include <vector>
#include "database.h"

struct Record
{
    std::string name;
    int id;
};
// Use the same database vector defined in insert.cpp
extern std::vector<Record> database;

void displayRecords()
{
    std::cout << "Displaying all records:" << std::endl;
    for (const auto &record : database)
    {
        std::cout << "Name: " << record.name << ", ID: " << record.id << std::endl;
    }
}
