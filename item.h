//header file for items
#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <cstring>

using namespace std;

class Item
{
 public:
  //define functions
  Item();
  Item(char* newItemName);
  char* getItemName();
  ~Item();
  
 private:
  //variable
  char itemName[40];

};

#endif
