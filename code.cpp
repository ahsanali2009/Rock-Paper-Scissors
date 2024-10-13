#include <iostream>
#include <string>


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

for (int i = 0 ; roundCount > i ; i++) {



std::cout << "1. Rock \n" ;
std::cout << "2. Paper \n" ;
std::cout << "3. Scissors \n" ;

    int userMove  ;
    std::cout << "Chose Your Move : " ;
    std::cin >> userMove ;

srand ( time ( NULL ) ) ;
int botMove = ( rand() % 3 ) + 1 ;
// std::cout << botMove << std::endl ;

// this code under is for rock = rock,paper,scissors.

if ( userMove == 1 && botMove == 2){

    std::cout << "Bot Wins This Round \n" ;
    botScore++ ;

}
else if (userMove == 1 && botMove == 3) {

    std::cout << "You Won This Round \n" ;
    userScore++ ;

}
else if (userMove == 1 && botMove == 1) {

std::cout << "Both Got The Same, Tie ! \n" ;

}

// this code under is for Paper = papers,rock,scissors.

if (userMove == 2 && botMove == 1) {

std::cout << "You Won This Round \n" ;
userScore++;
    }

else if ( userMove == 2 && botMove == 3 ) {

std::cout << "Bot Wins This Round \n" ;
botScore++ ;

}

else if ( userMove == 2 && botMove ==2 ) {

std::cout << "Bot Got The Same, Tie ! \n" ;

}

// this code under is for Scissors  = scissors,paper,rock.

if(userMove == 3 && botMove == 1){

std::cout << "Bot Wins This Round \n" ;
botScore++ ;

}

else if (userMove == 3 && botMove == 2) {

std::cout << "You Won This Round \n" ;
userScore ++ ;

}

else if (userMove == 3 && botMove == 3) {

std::cout << "Both Got The Same, Tie ! \n" ;

}


}

if (userScore > botScore) {

std::cout << "YOU WON THE GAME !!! \n" ;

}

else if (botScore > userScore) {

std::cout << "YOU LOST !!! \n" ;

}

else if (userScore == botScore){

std::cout << "IT'S A TIE ! \n" ;

}

    }