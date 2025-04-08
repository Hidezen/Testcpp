#include <iostream>
#include <ctime>

char Introduction(char player);
char computerChoice();
void result(char player, char computer);
void winner();

int main(){

}

char Introduction(char player) {
    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;
    std::cout << "Please choose: R for Rock, P for Paper, S for Scissors: ";
    std::cin >> player;
    switch(player){
        case 'R':
        case 'r':
            std::cout << "You chose Rock!" << std::endl;
            break;
        case 'P':
        case 'p':
            std::cout << "You chose Paper!" << std::endl;
            break;
        case 'S':
        case 's':
            std::cout << "You chose Scissors!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice! Please try again." << std::endl;
            Introduction(player);
    }
    return player;
}
char computerChoice() {
    srand(time(0));
    int random = rand() % 3;
    char computer;
    switch(random){
        case 0:
            computer = 'R';
            std::cout << "Computer chose Rock!" << std::endl;
            break;
        case 1:
            computer = 'P';
            std::cout << "Computer chose Paper!" << std::endl;
            break;
        case 2:
            computer = 'S';
            std::cout << "Computer chose Scissors!" << std::endl;
            break;
    }
    return computer;
}
void result(char player, char computer) {
    if (player == computer) {
        std::cout << "It's a tie!" << std::endl;
    } else if ((player == 'R' && computer == 'S') || (player == 'P' && computer == 'R') || (player == 'S' && computer == 'P')) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "Computer wins!" << std::endl;
    }
}
void winner() {
    char player;
    char computer;
    player = Introduction(player);
    computer = computerChoice();
    result(player, computer);
}