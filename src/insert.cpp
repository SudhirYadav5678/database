// insert.cpp
#include <iostream>
#include <vector>
#include "database.h"

// Struct to hold records
struct Record
{
    std::string name;
    int id;
};

// Static vector to hold database records (this acts as an in-memory database)
static std::vector<Record> database;

void insertRecord(const std::string &name, int id)
{
    Record newRecord = {name, id};
    database.push_back(newRecord);
    std::cout << "Record inserted: Name = " << name << ", ID = " << id << std::endl;
}
