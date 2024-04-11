#include <iostream>
#include <string>

class Player {
public:
    Player(const std::string& name, int score) : name(name), score(score) {}

    const std::string& getName() const {
        return name;
    }

    int getScore() const {
        return score;
    }

private:
    std::string name;
    int score;
};

void displayTopPlayers(Player* players, int numPlayers, int topN) {
    if (topN <= 0) {
        std::cout << "Invalid value for 'topN'. Please provide a positive integer." << std::endl;
        return;
    }

    // Sort the players by score (you can use a more efficient sorting algorithm if needed)
    for (int i = 0; i < numPlayers - 1; ++i) {
        for (int j = 0; j < numPlayers - i - 1; ++j) {
            if (players[j].getScore() < players[j + 1].getScore()) {
                std::swap(players[j], players[j + 1]);
            }
        }
    }

    std::cout << "Top " << topN << " Players:" << std::endl;
    for (int i = 0; i < std::min(topN, numPlayers); ++i) {
        std::cout << "Name: " << players[i].getName() << ", Score: " << players[i].getScore() << std::endl;
    }
}

int main() {
    const int numPlayers = 5;  // Change this to the number of players in your game
    Player players[numPlayers] = {
        Player("Player1", 150),
        Player("Player2", 200),
        Player("Player3", 120),
        Player("Player4", 250),
        Player("Player5", 180)
    };

    int topN = 3;  // Display the top 3 players

    displayTopPlayers(players, numPlayers, topN);

    return 0;
}
