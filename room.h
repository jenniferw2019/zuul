#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <ctring>
#include <map>
#include <vector>
#include "item.h"

using namespace std;

class Room : public Item
{

 public:
  Room();
  Room(char* newRoomDetail, char* newRoomName);
  char* getRoomDescription();
  char* getRoomName();
  void setExits(map<char, char*> newExit);
  map<char, char*> getExits();
  
  ~Room();

 private:
  char roomDetail[150];
  char roomName[40];
  map<char, char*> exits;
  vector<Item*> items;
};

#endif
