#include <iostream>
#include <cstring>
#include <cctype>
#include "item.h"

using namespace std;

Item::Item() {}

Item::Item(char* newItemName)
{
  strcpy(itemName, newItemName);
}

char* Item::getItemName()
{
  return itemName;
}


Item::~Item() {}
