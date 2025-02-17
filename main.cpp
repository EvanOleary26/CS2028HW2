#include<iostream>

int main() {
    /*
    Create a loop for repeating the game
    Create options for Doubling or Halving
    Create a way to show current money
    Create a way to cash out
    Player needs to be able to set the amount of values on the wheel
    
    Hard Mode?
    */

    //we need to load the player here
    Player player;
    int purse = player.getmoney();
    char cashout = ' '; // prompts the user to cash out at the end of each turn

    std::cout << "Welcome to Roulette!\nYou are stepping up to the table with $500 in your pocket...let's see if you make it big or lose it all!" << std::endl;

    std::cout << "\nThe wheel has a default range of 1-10. You can change that if you like.\nDo you want to change the range? y/n: ";

    char changeRangePrompt = ' ';

    if (changeRangePrompt == 'y') {
        int min{ 1 };
        int max{ 10 };
        std::cout << "What do you want your lower bound to be?";
        std::cin >> min;
        std::cout << "What do you want your upper bound to be?";
        std::cin >> max;
    }

    while (purse > 0 || cashout == 'y') {
        std::cout << "All right...You and the house each place a ball in the wheel. What do you want to wager?";
        int wager{ 0 };
        std::cin >> wager;

        while (wager > purse){
            std::cout << "You don't have enough in your purse to bet that much. Re-enter a wager: ";
            std::cin >> wager;
        }

        //gameplay goes here

        if (purse > 0) {
            std::cout << "Would you like to cash out? y/n: ";
            std::cin >> cashout;
            if (cashout != 'y') {
                std::cout << "You are able to cash out with $" << purse << "! Thanks for playing!";
                break;
            }
            else {
                continue;
            }
        }
        else {
            std::cout << "You have no money in your purse and can no longer play. Thank you for playing!";
            break;
        }

    }




    return 0;
}
