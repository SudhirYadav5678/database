// database.h
#ifndef DATABASE_H
#define DATABASE_H

#include <string>

// Function declarations
void insertRecord(const std::string &name, int id);
void searchRecord(int id);
void displayRecords();

#endif
