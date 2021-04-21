/*
Rock Paper Scissors
*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));

  int computer = rand() % 3 + 1;
  
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
  
  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  
  std::cout << "shoot! \n";

  std::cin >> user;

  if (user == computer) {
    std::cout << "tie\n";
  } else if (user == 1) {
    if (computer == 2) {
      std::cout << "computer wins\n";
    }
    if (computer == 3) {
      std::cout << "user wins\n";
    }
  } else if (user == 2) {
    if (computer == 1) {
      std::cout << "user wins\n";
    }
    if (computer == 3) {
      std::cout << "computer wins\n";
    }
  } else if (user == 3) {
    if (computer == 1) {
      std::cout << "computer wins\n";
    }
    if (computer == 2) {
      std::cout << "user wins\n";
    }
  }

}
