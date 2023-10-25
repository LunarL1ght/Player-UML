//
//  Player.hpp
//  Player UML
//
//  Created by Josh Nelson on 10/3/23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>
#endif /* Player_hpp */
using namespace std;

class Player
{
public:
    Player(string name, int hp);
    int getHp();
    void setHp(int num);
    string getName();
    void setName(string newName);
    void printPlayer();
private:
    string name;
    int hp;
};
