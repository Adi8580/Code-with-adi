#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

// Class to represent a Player
class Player {
private:
    std::string name;
    int position;

public:
    Player(const std::string& playerName) : name(playerName), position(0) {}

    std::string getName() const {
        return name;
    }

    int getPosition() const {
        return position;
    }

    void setPosition(int newPosition) {
        position = newPosition;
    }

    void move(int steps) {
        position += steps;
        std::cout << name << " moved to position " << position << std::endl;
    }
};

// Class to represent the Board
class Board {
private:
    std::vector<std::pair<int, int>> snakes;  // {head, tail}
    std::vector<std::pair<int, int>> ladders; // {bottom, top}

public:
    Board() {
        // Initialize snakes and ladders
        snakes = {{17, 7}, {54, 34}, {62, 19}, {98, 79}};
        ladders = {{3, 38}, {24, 33}, {42, 63}, {72, 84}};
    }

    // Check if the player lands on a snake or ladder
    int checkPosition(int position) {
        for (const auto& snake : snakes) {
            if (position == snake.first) {
                std::cout << "Oops! You landed on a snake. Sliding down to " << snake.second << std::endl;
                return snake.second;
            }
        }
        for (const auto& ladder : ladders) {
            if (position == ladder.first) {
                std::cout << "Yay! You found a ladder. Climbing up to " << ladder.second << std::endl;
                return ladder.second;
            }
        }
        return position;
    }
};

// Class to represent the Game
class Game {
private:
    Board board;
    std::vector<Player> players;
    int currentPlayerIndex;

public:
    Game(const std::vector<std::string>& playerNames) : currentPlayerIndex(0) {
        for (const auto& name : playerNames) {
            players.push_back(Player(name));
        }
    }

    // Roll a dice (returns a random number between 1 and 6)
    int rollDice() {
        return rand() % 6 + 1;
    }

    // Play the game
    void play() {
        srand(time(0));  // Seed the random number generator
        while (true) {
            Player& currentPlayer = players[currentPlayerIndex];
            std::cout << "\n" << currentPlayer.getName() << "'s turn. Press Enter to roll the dice...";
            std::cin.ignore();  // Wait for user input
            int diceValue = rollDice();
            std::cout << currentPlayer.getName() << " rolled a " << diceValue << std::endl;

            int newPosition = currentPlayer.getPosition() + diceValue;
            if (newPosition > 100) {
                std::cout << "Cannot move beyond 100. Try again next turn!" << std::endl;
            } else {
                currentPlayer.setPosition(newPosition);
                std::cout << currentPlayer.getName() << " moved to " << newPosition << std::endl;

                // Check for snakes or ladders
                newPosition = board.checkPosition(newPosition);
                currentPlayer.setPosition(newPosition);

                // Check for win condition
                if (newPosition == 100) {
                    std::cout << "\nCongratulations, " << currentPlayer.getName() << "! You won the game!" << std::endl;
                    break;
                }
            }

            // Switch to the next player
            currentPlayerIndex = (currentPlayerIndex + 1) % players.size();
        }
    }
};

int main() {
    std::vector<std::string> playerNames = {"Alice", "Bob"};  // Add more players if needed
    Game game(playerNames);
    game.play();
    return 0;
}