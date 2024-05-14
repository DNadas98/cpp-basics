#include <iostream>

using std::cout, std::cin, std::endl, std::string;

char getUserChoice();

char getComputerChoice();

bool isRockPaperScissorsChoiceValid(char choice);

void displayChoice(char choice, string name);

void displayWinner(char player, char computer);

bool doesPlayerWantToContinue();

int main() {
  char playerChoice, computerChoice;

  while (true) {
    cout << "*** Rock-Paper-Scissors Game ***" << endl;
    playerChoice = getUserChoice();
    displayChoice(playerChoice, "Player");
    computerChoice = getComputerChoice();
    displayChoice(computerChoice, "Computer");
    displayWinner(playerChoice, computerChoice);
    if (!doesPlayerWantToContinue()) {
      break;
    }
  }
  return 0;
}

char getUserChoice() {
  char choice;
  do {
    cout << "Enter your choice: r, p, or s: ";
    std::cin >> choice;
    if (!isRockPaperScissorsChoiceValid(choice)) {
      cout << "Invalid input" << endl;
    }
  } while (!isRockPaperScissorsChoiceValid(choice));
  return choice;
}

bool isRockPaperScissorsChoiceValid(char choice) {
  return choice == 'r' || choice == 'p' || choice == 's';
}

char getComputerChoice() {
  srand(time(0)); // seed random number generator
  return rand() % 3 == 0 ? 'r' : rand() % 3 == 1 ? 'p' : 's';
}

void displayChoice(char choice, string name) {
  cout << name << " choose: ";
  switch (choice) {
    case 'r':
      cout << "Rock" << endl;
      break;
    case 'p':
      cout << "Paper" << endl;
      break;
    case 's':
      cout << "Scissors" << endl;
      break;
    default:
      throw "Invalid choice";
  }
}

void displayWinner(char player, char computer) {
  if (player == computer) {
    cout << "It's a tie!" << endl;
  } else if (player == 'r' && computer == 's'
             || player == 'p' && computer == 'r'
             || player == 's' && computer == 'p') {
    cout << "Player wins!" << endl;
  } else {
    cout << "Computer wins!" << endl;
  }
}

bool doesPlayerWantToContinue() {
  char choice;
  do {
    cout << "Do you want to play again? (y/n): ";
    std::cin >> choice;
  } while (choice != 'y' && choice != 'n');
  return choice == 'y';
}