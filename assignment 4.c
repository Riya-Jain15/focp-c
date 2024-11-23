#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the winner and display results
void determineWinner(char userChoice, char computerChoice) {
    printf("You chose: %c\n", userChoice);
    printf("Computer chose: %c\n", computerChoice);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 'R' && computerChoice == 'S') || 
               (userChoice == 'P' && computerChoice == 'R') || 
               (userChoice == 'S' && computerChoice == 'P')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

// Function to generate the computer's choice
char getComputerChoice() {
    int randomNumber = rand() % 101; // Generate random number between 0 and 100
    if (randomNumber <= 33) {
        return 'R'; // Rock
    } else if (randomNumber <= 66) {
        return 'P'; // Paper
    } else {
        return 'S'; // Scissors
    }
}

int main() {
    char userChoice, computerChoice;

    // Initialize random number generator
    srand(time(0));

    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter your choice (R for Rock, P for Paper, S for Scissors): ");
    scanf(" %c", &userChoice);

    // Convert lowercase input to uppercase
    if (userChoice >= 'a' && userChoice <= 'z') {
        userChoice -= 32;
    }

    // Validate user input
    if (userChoice != 'R' && userChoice != 'P' && userChoice != 'S') {
        printf("Invalid input. Please enter R, P, or S.\n");
        return 1;
    }

    computerChoice = getComputerChoice();
    determineWinner(userChoice, computerChoice);

    return 0;
}
