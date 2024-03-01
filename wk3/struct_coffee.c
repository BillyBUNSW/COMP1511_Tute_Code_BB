// coffee_shop.c
//
// Written by YOUR-NAME (zID)
// on TODAYS-DATE 
//
// This program is a simple coffee shop used to demonstrate the use of 
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5


enum coffee_type {
	LATTE,
	CAPPUCCINO,
	ESPRESSO,
	AMERICANO,
	MATCHA
};



// TODO: Define a struct `coffee` that stores 
// 1. the coffee type (an enum)
// 2. the number of sugars 
// 3. the size of a coffee 

struct coffee {
    enum coffee_type type;
    int num_sugars;
    char size;
};

// TODO: Define an enum `coffee_type` that stores the different types of coffees 
// the shop sells. These are: LATTEE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.



int main(void) {
    // TODO: Initalise a variable for the struct
    struct coffee order;

    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, 
      3: AMERICANO, 4: MATCHA): ");
    
    // TODO: take user input
    scanf("%d", &order.type);

    printf("Enter number of sugars: ");

    scanf("%d", &order.num_sugars);

    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input
    scanf("%c", &order.size);

    // TODO: Calculate cost of order
    double cost = BASE_COST;
    if (order.size == LARGE) {
        cost = cost + ADDED_COST;
    } 
    
    if (order.type == LATTE) {
        cost = cost + ADDED_COST;
    }

    cost = cost + order.num_sugars * ADDED_COST;

	printf("Total cost: %.2lf\n", cost);
	return 0;
}
