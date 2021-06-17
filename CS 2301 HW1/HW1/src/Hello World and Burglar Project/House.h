//
// Created by supad on 10/28/2020.
//

#ifndef UNTITLED_HOUSE_H
#define UNTITLED_HOUSE_H
#include "Layout.h"
#include "Room.h"
typedef struct {
    int nRooms;
    Room** the RoomPs;
}House;

int getNumberRooms(House*);
Room* getNewRoom(House*);

#endif //UNTITLED_HOUSE_H
