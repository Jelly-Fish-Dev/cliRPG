//
// Created by isaac on 12/05/2018.
//

#ifndef CLIRPG_BATTLER_H
#define CLIRPG_BATTLER_H

/*
 * Headers
 * */
#include <string>
class Battler
{
private:

    std::string Name;
    int HP;
    int MP;
    int St;
    int Dx;
    int Mg;
    int Ag;
    int Lu;


public:
    //Battler Constructor
    // Name, hp, mp, st, dx, mg, ag, lu
    Battler( std::string, int, int, int, int, int, int, int  );

    //Get Hp/Mp
    int get_Hp(){ return HP; }
    int get_Mp(){ return MP; }

    //Get Stats
    int get_St(){ return St;}
    int get_Dx(){ return Dx;}
    int get_mg(){ return Mg;}
    int get_ag(){ return Ag;}
    int get_lu(){ return Lu;}
};

#endif //CLIRPG_BATTLER_H
