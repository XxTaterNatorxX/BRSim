#ifndef CARD_H
#define CARD_H
typedef struct{
    int ammo;
    int max_ammo;
    int uses_per_turn;
    int dmg;
    int range;
    int armor;
    int weight;
    int is_consumable;
    int consumable_type;
}card;

typedef struct{
    int speed;
    int row;
    int col;
    int hp;
    card* inventory;
    int max_capacity;
    int size;
}unit;

int decrement(card* card);
void reset(card* card);
int isConsumable(card* card);

#endif //CARD_H