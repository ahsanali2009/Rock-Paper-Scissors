#include <iostream>
#include <stdlib.h>
#include <cmath>

int main () {

std::cout << " \n Instructions : \n \n" ;
std::cout << "1. You Will Be Competing Against A Bot. \n" ;
std::cout << "2. You Can Decide How Much Rounds You Want To Play. \n" ;
std::cout << "3. Player Who Secures The Most Rounds, Wins The Game. \n" ;
std::cout << "--------------------------------------------------------- \n \n" ;

std::cout << "Lets Start The Game ! \n \n" ;

int roundCount ;
std::cout << "How Many Rounds Do You Want To Play : " ;
std::cin >> roundCount ;
std::cout << "--------------------------------------- \n" ;

int userScore ;
int botScore ;

srand (time(NULL)) ;

for (int i = 0 ; roundCount > i ; i++) {


std::cout << "1. Rock \n" ;
std::cout << "2. Paper \n" ;
std::cout << "3. Scissors \n" ;


    int userMove  ;
    std::cout << "Chose Your Move : " ;
    std::cin >> userMove ;

    int botMove = ( rand() % 3 ) + 1 ;


// this code under is for rock = rock,paper,scissors.

if ( userMove == 1 && botMove == 2 ) { // rock and paper

    std::cout << "Bot Wins This Round : " << botMove << std::endl << std::endl ;
    botScore++ ;

}

     else if ( userMove == 1 && botMove == 3 ) { //rock and scissors

        std::cout << "You Won This Round \n \n" ;
        userScore++ ;

}

        else if ( userMove == 1 && botMove == 1 ) { //rock and rock

             std::cout << "Both Got The Same, Tie ! \n \n" ;

}

// this code under is for Paper = papers,rock,scissors.

if ( userMove == 2 && botMove == 1 ) { //paper and rock

    std::cout << "You Won This Round \n \n" ;
    userScore++;

    }

        else if ( userMove == 2 && botMove == 3 ) { //paper and scissor

            std::cout << "Bot Wins This Round : "<< botMove << std::endl << std::endl ;
            botScore++ ;

}

            else if ( userMove == 2 && botMove ==2 ) { //paper and paper

                std::cout << "Both Got The Same, Tie ! \n \n" ;

}

// this code under is for Scissors  = scissors,paper,rock.

if ( userMove == 3 && botMove == 1 ) { //scissors and rock

    std::cout << "Bot Wins This Round : " << botMove << std::endl << std::endl;
    botScore++ ;

}

    else if ( userMove == 3 && botMove == 2 ) { //scissors and paper

        std::cout << "You Won This Round \n \n" ;
        userScore ++ ;

}

        else if (userMove == 3 && botMove == 3) { //paper and paper

            std::cout << "Both Got The Same, Tie ! \n \n" ;

}

    }   

botScore =  botScore - 8;

if ( userScore > abs(botScore) ) {

std::cout << " \n \nYOU WON THE GAME !!! \n" ;
std::cout << "You : " << userScore << " Bot : " << botScore ;

}

else if ( userScore < abs(botScore) ) {

std::cout << "\n \nYOU LOST !!! \n" ;
std::cout << "You : " << userScore << " | " << "Bot : " << botScore ;

}

else if ( userScore == botScore ){

std::cout << "\nIT'S A TIE ! \n" ;

}


    }
