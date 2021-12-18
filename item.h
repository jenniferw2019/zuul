#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <cstring>

using namespace std;

class Item
{
 public:
  Item();
  Item(char* newItemName);
  char* getItemName();
  ~Item();
  
 private:
  char itemName[40];

};

#endif
