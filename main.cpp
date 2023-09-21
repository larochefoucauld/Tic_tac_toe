#include <iostream>


int CheckGameState(int gF[3][3]);
void PrintGameField(int gF[3][3]);
void AITurn(int gF[3][3]);
void PlayerTurn(int gF[3][3]);



int main(){
  int gF[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  int game_state;
  while (true){
    PlayerTurn(gF);
    int game_state = CheckGameState(gF);
    switch (game_state){
      case 1:
        PrintGameField(gF);
        std::cout << "Вы выиграли!\n";
        return 0;
      case 3:
        PrintGameField(gF);
        std::cout << "Ничья\n";
        return 0;
      case 0:
        std::cout << "Ход компьютера...";
    }
    AITurn(gF);
    PrintGameField(gF);
    game_state = CheckGameState(gF);
    switch (game_state){
      case 2:
        std::cout << "Вы проиграли\n";
        return 0;
      case 3:
        std::cout << "Ничья\n";
        return 0;
    }
  }
}
