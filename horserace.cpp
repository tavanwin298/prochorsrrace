#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

void advance(int horseNum, int* horses) {
    if (rand() % 2 == 1) {
        horses[horseNum]++;
    }
}

void printLane(int horseNum, int* horses) {
    for (int i = 0; i < TRACK_LENGTH; i++) {
        if (i == horses[horseNum]) {
            cout << horseNum;
        } else {
            cout << '.';
        }
    }
    cout << endl;
}

bool isWinner(int horseNum, int* horses) {
    return horses[horseNum] >= TRACK_LENGTH;
}

int main() {
    srand(time(0));
    int horses[NUM_HORSES] = {0};
    bool raceOver = false;
    
    while (!raceOver) {
        for (int i = 0; i < NUM_HORSES; i++) {
            advance(i, horses);
            printLane(i, horses);
            if (isWinner(i, horses)) {
                raceOver = true;
            }
        }
        if (!raceOver) {
            cout << "Press enter for another turn";
            cin.get();
        }
    }
    
    cout << "Horse " << (min_element(horses, horses + NUM_HORSES) - horses) << " WINS!!!" << endl;
    return 0;
}

