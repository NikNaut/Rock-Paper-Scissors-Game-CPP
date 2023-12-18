#include <iostream>
#include <ctime>

char choicePlayer();
char choiceComputer();
void showChoice(char players);
void result(char player, char computer);


int main() {
    char player;
    char computer;
    player = choicePlayer();
    std::cout << "You chose: ";
    showChoice(player);
    computer = choiceComputer();
    std::cout << "Computer chose: ";
    showChoice(computer);
    result(player, computer);

    return 0;
}

char choicePlayer() {
    char player;
    while (player != 'r' && player != 'p' && player != 's') {
        std::cout << "Rock Paper Scissors Game!\n";
        std::cout << "*************************\n";
        std::cout << "Choose one of the following\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'s' for Scissors\n";
        std::cin >> player;
    }
    return player;
}

char choiceComputer() {
    char computer;
    srand(time(0));
    int rno = rand() % 3 + 1;
    switch (rno)
    {
    case 1:
        computer = 'r';
        break;
    case 2:
        computer = 'p';
        break;
    case 3:
        computer = 's';
        break;
    }
    return computer;
}

void showChoice(char players) {
    switch (players)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

void result(char player, char computer) {
    if (player == computer) {
        std::cout << "It's a Draw!";
    }
    else if ((player == 'r' && computer == 's') || (player == 's' && computer == 'p') || (player == 'p' && computer == 'r')) {
        std::cout << "Player wins!";
    }
    else if ((computer == 'r' && player == 's') || (computer == 's' && player == 'p') || (computer == 'p' && player == 'r')) {
        std::cout << "Computer wins!";
    }
}
