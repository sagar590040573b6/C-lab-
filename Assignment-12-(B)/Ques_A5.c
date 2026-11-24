
/* A5. Vending Machine Finite-state Machine
   Use enum states to represent vending machine conditions.
   Process commands and display state transitions.
*/

#include <stdio.h>

enum State
{
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum State nextState(enum State state, int command, int stock)
{
    if (stock <= 0)
        return OUT_OF_STOCK;

    switch (state)
    {
        case IDLE:
            if (command == 1)
                return COIN_INSERTED;
            else
                return IDLE;

        case COIN_INSERTED:
            if (command == 2)
                return DISPENSE;
            else if (command == 3)
                return IDLE;
            else
                return COIN_INSERTED;

        case DISPENSE:
            return IDLE;

        case OUT_OF_STOCK:
            return OUT_OF_STOCK;
    }

    return state;
}

void displayState(enum State state)
{
    switch (state)
    {
        case IDLE:
            printf("IDLE");
            break;

        case COIN_INSERTED:
            printf("COIN_INSERTED");
            break;

        case DISPENSE:
            printf("DISPENSE");
            break;

        case OUT_OF_STOCK:
            printf("OUT_OF_STOCK");
            break;
    }
}

int main()
{
    enum State state = IDLE;
    int command, stock = 5;

    printf("Vending Machine\n");

    while (1)
    {
        printf("\n\n1. Insert Coin");
        printf("\n2. Select Product");
        printf("\n3. Cancel");
        printf("\n4. Exit");

        printf("\nEnter command: ");
        scanf("%d", &command);

        if (command == 4)
            break;

        if (command < 1 || command > 4)
        {
            printf("Invalid command!");
            continue;
        }

        printf("\nPrevious State: ");
        displayState(state);

        enum State newState = nextState(state, command, stock);

        if (state == COIN_INSERTED && command == 2 &&
            newState == DISPENSE)
        {
            stock--;
            if (stock == 0)
                printf("\nLast product dispensed!");
        }

        state = newState;

        printf("\nNew State: ");
        displayState(state);

        if (state == DISPENSE)
            state = IDLE;

        if (stock == 0)
            state = OUT_OF_STOCK;
    }

    return 0;
}

/*
Valid transitions:
1. IDLE -> COIN_INSERTED
2. COIN_INSERTED -> DISPENSE
3. COIN_INSERTED -> IDLE (Cancel)
4. DISPENSE -> IDLE
5. Any state -> OUT_OF_STOCK (when stock is zero)

Invalid transitions:
1. IDLE -> DISPENSE
2. IDLE -> OUT_OF_STOCK (when stock is available)
3. COIN_INSERTED -> DISPENSE without selecting a product
4. OUT_OF_STOCK -> COIN_INSERTED
5. OUT_OF_STOCK -> DISPENSE
*/
