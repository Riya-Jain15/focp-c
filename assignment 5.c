//Assignment 5:
#include <stdio.h>
#include <string.h>

void displayWord(char word[], int guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    // The word to guess (you can change it)
    char word[] = "COMPUTER";
    int wordLength = strlen(word);
    int guessed[wordLength];
    int wrongGuesses = 0, maxGuesses = 3;

    // Initialize guessed array to 0 (no letters guessed)
    for (int i = 0; i < wordLength; i++) {
        guessed[i] = 0;
    }

    printf("Welcome to Hangman Game!\n");
    printf("You have %d chances to save the man.\n", maxGuesses);

    while (wrongGuesses < maxGuesses) {
        char guess;
        int correct = 0;

        // Display current state of the word
        printf("\nWord: ");
        displayWord(word, guessed);

        // Take user input
        printf("Enter your guess (a single letter): ");
        scanf(" %c", &guess);
        guess = toupper(guess); // Convert to uppercase

        // Check if the guess is correct
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correct = 1;
            }
        }

        // If the guess was incorrect
        if (!correct) {
            wrongGuesses++;
            printf("Wrong guess! You have %d chances left.\n", maxGuesses - wrongGuesses);
        }

        // Check if the player has guessed the entire word
        int allGuessed = 1;
        for (int i = 0; i < wordLength; i++) {
            if (!guessed[i]) {
                allGuessed = 0;
                break;
            }
        }

        if (allGuessed) {
            printf("\nCongratulations! You've saved the man.\n");
            printf("The word was: %s\n", word);
            return 0;
        }
    }

    // If the player loses
    printf("\nGame Over! The man has been hanged.\n");
    printf("The word was: %s\n", word);
    return 0;
}
