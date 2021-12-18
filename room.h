#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include "item.h"

using namespace std;

class Room : public Item
{

 public:
  Room();
  Room(char* newRoomDetail, char* newRoomName);
  char* getRoomDetail();
  char* getRoomName();
  vector<Item*> getItems();
  map<char, char*> getExits();
  void setExits(map<char, char*> newExit);
  void setItems(vector<Item*> newItems);
  void displayRoomInfo();
  void displayExits();
  void displayItems();
  
  ~Room();

 private:
  char roomDetail[150];
  char roomName[40];
  map<char, char*> exits;
  vector<Item*> items;
};

#endif
