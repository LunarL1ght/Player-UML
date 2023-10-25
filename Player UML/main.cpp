//
//  main.cpp
//  Player UML
//
//  Created by Josh Nelson on 10/3/23.
//

#include <iostream>
#include "Player.hpp"
using namespace std;
int main()
{
    Player player("L. Jenkins", 100);
    player.printPlayer();
    
    player.setName("GailForceWinds");
    player.setHp(50);
    printf("| %s hp: %d |\n", player.getName().c_str(), player.getHp());
    

    return 0;
}
