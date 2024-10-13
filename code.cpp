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



for (int i = 0 ; roundCount > i ; i++) {

std::cout << "1. Rock \n" ;
std::cout << "2. Paper \n" ;
std::cout << "3. Scissors \n" ;

    int userMove ;
    std::cout << "Chose Your Move : " ;
    std::cin >> userMove ;

srand ( time ( NULL ) ) ;
int botMove = ( rand() % 3 ) + 1 ;



    }


}
