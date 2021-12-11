#include <iostream>
#include <iostream>
#include <cstring>
#include "item.h"

using namespace std;

Item::Item() {}

Item::Item(char* newdescription)
{
  strcpy(description, newdescription);
}

char* Item::getDescription()
{
  return description;
}


Item::~Item() {}
