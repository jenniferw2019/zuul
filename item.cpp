#include <iostream>
#include <cstring>
#include "item.h"

using namespace std;

Item::Item() {}

Item::Item(char* newDescription)
{
  strcpy(description, newdescription);
}

char* Item::getDescription()
{
  return description;
}


Item::~Item() {}
