#include<iostream>
#include "Player.h"

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
    int purse = player.getMoney();
    char cashout = ' '; // prompts the user to cash out at the end of each turn

   


    std::cout << "Welcome to Roulette!\nYou are stepping up to the table with $500 in your pocket...let's see if you make it big or lose it all!" << std::endl;

    std::cout << "\nThe wheel has a default range of 1-10. You can change that if you like.\nDo you want to change the range? y/n: ";

    char changeRangePrompt = ' ';

    int min{ 1 };
    int max{ 10 };
    std::cout << "What do you want your lower bound to be?";
    std::cin >> min;
    std::cout << "What do you want your upper bound to be?";
    std::cin >> max;
    
    //Load House
    Wheel house(min,max);

    while (purse > 0 || cashout == 'y') {
        std::cout << "All right...You and the house each place a ball in the wheel. What do you want to wager?";
        int wager{ 0 };
        std::cin >> wager;

        while (wager > purse){
            std::cout << "You don't have enough in your purse to bet that much. Re-enter a wager: ";
            std::cin >> wager;
        }

        //gameplay goes here

        //Spin player ball
        player.spinWheel(min,max);

        std::cout << "The ball landed on " << player.getWheel() << "!" << std::endl;

        std::cout << "What would like to do? (Enter the number)" << std::endl;
        std::cout << "1) Double your bet\n" << "2) Halve your bet\n" << "3) No change" << std::endl;
        
        char betOption; //Players choice when betting

        std::cin >> betOption;

        while (betOption != '1' || betOption != '2' || betOption != '3'){
            std::cout << "Invalid option, please choose 1, 2, or 3: ";
            std::cin >> betOption;
        }

        if(betOption == '1'){   
            //double players wager, spin house's wheel twice, if either is equal or greater than the players spin they win
            wager *= 2;
            for (int i{0}; i < 2; i++){
                house.Spin(min,max);
                std::cout << "The house rolled a " << house.getWheel() << "." << std::endl;
                if (house.getWheel() >= player.getWheel()){
                    std::cout << "The house wins..." << std::endl;
                    std::cout << "You lose $" << wager << std::endl;
                    purse -= wager; 
                    break;
                }
            }

            if (house.getWheel() < player.getWheel()){
                std::cout << "Congrats you win!" << std::endl;
                std::cout << "You won $" << wager << std::endl;
                purse += wager; 
            }
        } 
        else if(betOption == '2'){
            //halve players bet, spin the house's wheel twice if they cant roll higher on both it loses player total is unchanged
            // if the house rolls higher on both the player loses their total bet
            int houseWin = 0;   //track number of house wins
            for (int i{0}; i < 2; i++){
                house.Spin(min,max);
                std::cout << "The house rolled a " << house.getWheel() << "." << std::endl;
                if (house.getWheel() >= player.getWheel()){
                    houseWin++;
                }
            }
            if (houseWin == 2){
                std::cout << "The house wins..." << std::endl;
                std::cout << "You lose $" << wager << std::endl;
                purse -= wager;
            } else {
                std::cout << "Congrats you win!" << std::endl;
                std::cout << "You didn't lose anything, but you didn't gain anything." << std::endl;
            }
        } else {
            //No special bet player wins if they roll higher than the house, wager is unchanged
            house.Spin(min,max);
            std::cout << "The house rolled a " << house.getWheel() << "." << std::endl;
            if (house.getWheel() >= player.getWheel()){
                std::cout << "The house wins..." << std::endl;
                std::cout << "You lose $" << wager << std::endl;
                purse -= wager; 
                break;
            } else {
                std::cout << "Congrats you win!" << std::endl;
                std::cout << "You won $" << wager << std::endl;
                purse += wager; 
            }
        }


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
