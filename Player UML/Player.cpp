//
//  Player.cpp
//  Player UML
//
//  Created by Josh Nelson on 10/3/23.
//

#include "Player.hpp"
#include <iostream>
using namespace std;

Player::Player(string y, int x)
{
    hp = x;
    name = y;
}
int Player::getHp()
{
    return hp;
}
void Player::setHp(int num)
{
    hp = num;
}
string Player::getName()
{
    return name;
}
void Player::setName(string newName)
{
    name = newName;
}
void Player::printPlayer()
{
    cout << "HP: " << getHp() << endl;
    cout << "Name: " << getName() << endl;
    cout << endl;
}
