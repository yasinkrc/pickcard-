//
// Created by Yasin Karaca on 26.12.2022.
//
#include <iostream>
#include "Play.h"
#include "../base/Result.h"

using namespace std;
namespace Game {
    int pointPlayer1 = 0;
    int pointPlayer2 = 0;

    void Play::play(Base **base[]) {
        for (int i = 0; i < 10; ++i) {
            base[0][i]->compare(base[1][i]);
            if (base[0][i]->getResult() == Result::WIN) {
                cout << "Player 1 won the round " << i + 1 << endl;
                pointPlayer1 += 2;
            } else if (base[0][i]->getResult() == Result::LOSE) {
                cout << "Player 2 won the round " << i + 1 << endl;
                pointPlayer2 += 2;
            } else {
                cout << "Round " << i + 1 << " was a draw" << endl;
                pointPlayer1++;
                pointPlayer2++;
            }
        }
        cout << "------------ SONUÇ ------------" << endl;
        // print all scores and winner
        cout << "Player 1: " << pointPlayer1 << endl;
        cout << "Player 2: " << pointPlayer2 << endl;
        if (pointPlayer1 > pointPlayer2) {
            cout << "Player 1 won the game" << endl;
        } else if (pointPlayer1 < pointPlayer2) {
            cout << "Player 2 won the game" << endl;
        } else {
            cout << "The game was a draw" << endl;
        }
    }
} // Game