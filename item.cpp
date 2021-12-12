#include <iostream>
#include <cstring>
#include <cctype>
#include "item.h"

using namespace std;

Item::Item() {}

Item::Item(char* newDescription)
{
  strcpy(description, newDescription);
}

char* Item::getDescription()
{
  return description;
}


Item::~Item() {}
