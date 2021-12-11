#include <iostream>
#include <cstring>
#include "room.h"

using namespace std;

Room:: Room() {}

Room:: Room(char* newRoomDetail, char* newRoomName)
{
  strcpy(roomDetail, newRoomDetail);
  strcpy(roomName, newRoomName);
}

char* Room::getRoomDescription()
{
  return roomDescription;
}

char* Room::getRoomName()
{
  return roomName;
}

void Room::setExits(map<char, char*> newExit)
{
  exits = newExit;
}

map<char, char*> Room::getExit()
{
  return exits;
}

Room::~Room() {}
