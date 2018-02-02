//
// Created by Daniel J Hazelton on 2018-01-30.
//

#ifndef UNTITLED1_MONSTER_H
#define UNTITLED1_MONSTER_H

class Monster{
private:
    int m_hp;
    int m_damage;
    std::string m_name;
public:
    Monster(){

    }


    Monster(int x = 1, int y = 1 , std::string name = "error"):
            m_hp(x),m_damage(y),m_name(name)
    {

        std::cout<<"Monster: \"" <<m_name <<"\" created with " <<m_hp <<"HP and " <<m_damage <<" Damage." ;
    }


    void genRandomMonster(){

    }

    std::string getMonsterName() {
        return m_name;
    }

    int getMonsterHP() {
        return m_hp;
    }

    int getMonsterDamage(){
        return m_damage;
    }

};

enum MonsterType{
    DRAGON,
    OGRE,
    SNAKE,
    PIXIE,
    MAX_MONSTERTYPE
};

#endif //UNTITLED1_MONSTER_H
