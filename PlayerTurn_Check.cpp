#include <iostream>

void PlayerTurn(int gF[3][3]) {
    int a, b;
    std::cout << "Сделайте ход, введите координаты ячейки";
    std::cin >> a >> b;
    if (a > 3 || b > 3 || a < 1 || b < 1 || gF[a][b] != 0) {
        std::cout << "Пожалуйста, введите координаты правильно";
        PlayerTurn(gF);
    }
    else {
        std::cout <<"Спасибо";
        gF[a][b] = 1;
    }
}


int CheckGameState(int gF[3][3]) {

    if (gF[0][0] * gF[1][0] * gF[2][0] == 1) {
        return 1;
    }
    else if (gF[0][0] * gF[1][0] * gF[2][0] == 64) {
        return 2;
    }
    if (gF[0][0] * gF[1][1] * gF[2][2] == 1) {
        return 1;
    }
    else if (gF[0][0] * gF[1][1] * gF[2][2] == 64) {
        return 2;
    }
    if (gF[0][1] * gF[1][1] * gF[2][1] == 1) {
        return 1;
    }
    else if (gF[0][1] * gF[1][1] * gF[2][1] == 64) {
        return 2;
    }
    if (gF[0][1] * gF[1][1] * gF[2][1] == 1) {
        return 1;
    }
    else if (gF[0][2] * gF[1][2] * gF[2][2] == 64) {
        return 2;
    }
    if (gF[0][0] * gF[0][1] * gF[0][2] == 1) {
        return 1;
    }
    else if (gF[0][0] * gF[0][1] * gF[0][2] == 64) {
        return 2;
    }
    if (gF[1][0] * gF[1][1] * gF[1][2] == 1) {
        return 1;
    }
    else if (gF[1][0] * gF[1][1] * gF[1][2] == 64) {
        return 2;
    }
    if (gF[2][0] * gF[2][1] * gF[2][2] == 1) {
        return 1;
    }
    else if (gF[2][0] * gF[2][1] * gF[2][2] == 64) {
        return 2;
    }
    if (gF[2][0] * gF[1][1] * gF[0][2] == 1) {
        return 1;
    }
    else if (gF[2][0] * gF[1][1] * gF[0][2] == 64) {
        return 2;
    }
    bool full;
    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gF[i][j] != 0) {
                count++;
            }
        }
    }
    if (count == 9) {
        return 3;
    }
    return 0;
}



