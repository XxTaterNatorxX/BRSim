#include<stdio.h>
#include"card.h"

int decrement(card* card){
    if(card -> ammo = card > 0){
        card -> ammo = card -> ammo - card -> uses_per_turn;
        return 1;
    }
    else{
        return 0;
    }
}
void reset(card* card){
    card -> ammo = card -> max_ammo;
}
int isConsumable(card* card){
    if(card -> is_consumable == 1){
        return 1;
    }
    else{
        return 0;
    }
}