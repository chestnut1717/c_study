#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS (4)
#define NUM_RANKS (13)

int main(void) {
    int num_cards;
    int random_num;
    int pattern;
    int number;

    int i = 0;
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false, };
    const char pattern_arr[] = {'c', 'd', 'h', 's'};
    const char number_arr[] = {'a', '2', '3', '4', '5', '6', '7',
                                 '8', '9', 't', 'j', 'q', 'k'};

    // Random seed(time t = long type), the args of srand should have unsigned type
    srand((unsigned) time(NULL));

    // Card number input
    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);
    
    printf("Your hand: ");

    // Draw cards
    while (num_cards > 0) {
        
        random_num = rand();
        pattern = random_num % 4;
        number = random_num % 13;

        // If not in hand, convert false to true
        if (!in_hand[pattern][number]){
            in_hand[pattern][number] = true;
            printf("%c%c ", pattern_arr[pattern], number_arr[number]);
            --num_cards;
        }

    }

    return 0;
}