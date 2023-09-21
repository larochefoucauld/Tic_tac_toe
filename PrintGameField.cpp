#include <iostream>
#include "header.h"

void PrintGameField(int field[3][3])
{
    for (int i = 0; i<3;++i){
        for (int j = 0;j < 3; ++ j)
        {
            switch(field[i][j])
            {
                case 0:
                    std :: cout << " - ";
                    break;
                case 1:
                    std :: cout << " X ";
                    break;
                case 4:
                    std :: cout << " O ";
                    break;
                default:
                    break;
            }
            if (j < 2)
                std :: cout << "|";
        }
        std :: cout << "\n";
        if (i < 2)
            std :: cout << "___ ___ ___"  << "\n";
    }
    std :: cout << "\n";
}