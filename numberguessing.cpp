#include <iostream>
#include <ctime>

int main() {
   
   srand(time(NULL));

   int num = (rand() % 100) + 1;
   int guess = 0;
   int tries = 0;
   int options = 0;

   std::cout << '\n';
   std::cout << "Random Number Guessing Game" << '\n';
   std::cout << '\n';
   std::cout << "Select a gamemode: " << '\n';
   std::cout << "1 - Easy Mode" << '\n';
   std::cout << "2 - Hard Mode" << '\n';
   std::cout << "3 - Quit Game" << '\n';

   while (options < 1 || options > 3) {
      std::cout << "Enter option: ";
      std::cin >> options;
      if (options < 1 || options > 3) {
         std::cout << "Invalid option, try again." << '\n';
      }
   }

   std::cout << '\n';

   switch (options) {
      case 1:
         do {
            std::cout << "Enter a guess between (1 - 100): ";
            std::cin >> guess;
            tries++;
            if (guess > num) {
               std::cout << "Too high!" << '\n';
            }
            else if (guess < num) {
               std::cout << "Too low!" << '\n';
            }
            else {
               std::cout << "Correct number of tries: " << tries << '\n';
            }
         } while (guess != num);
         break;
      case 2:
         std::cout << "Guess the number under 3 tries!" << '\n';
         do {
            std::cout << "Enter a guess between (1 - 100): ";
            std::cin >> guess;
            tries++;
            if (guess > num) {
               std::cout << "Too high!" << '\n';
            }
            else if (guess < num) {
               std::cout << "Too low!" << '\n';
            }
            else {
               std::cout << "Correct number of tries: " << tries << '\n';
               break;
            }
            if (tries == 3) {
               std::cout << "Failed! The number was " << num << '\n';
               return 0;
            }
         } while (guess != num);
      case 3:
         return 0;
   }

   return 0;
}
