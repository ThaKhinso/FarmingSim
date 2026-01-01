#include "objects.hpp"
#include "raylib.h"
#include <cstring>

Object::Object(std::string name, int dps, int health, Vector2& position, bool attackable)
    /*dps(dps), health(health), position(position), canBeAttacked(attackable)*/{
    // this->name = name.c_str();
  this->name = name;
    this->dps = dps;
    this->health = health;
    this->position = position;
    this->canBeAttacked = attackable;
};
