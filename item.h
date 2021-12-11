#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <cstring>

using namespace std;

class Item
{
 public:
  Item();
  Item(char* newDescription);
  char* getDescription();
  ~Item();
  
 private:
  char description[40];

};

#endif
