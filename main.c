// an adventure game.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define print printf

void playerInfo() {

}

// the actual game!
void game(char YorN[2]) {

    print("You spawned in with the castle\n");
    sleep(1);
    
}

// main menu of the game which starts
// function where is the game
void mainMenu(char YorN[2]) {
    int menurun = 1;

    print("Welcome to Life Survival(alpha 0.1)!\n");
    sleep(1);
    while (menurun)
    {
        print("start the game(y/n): ");
        fgets(YorN, 10, stdin);
        YorN[strlen(YorN)-1] = '\0';
        
        if (strcmp(YorN, "y")== 0) {
            menurun = 0;
            print("starting the game\n");
            game(YorN);
        }
        else if (strcmp(YorN, "n")== 0) {
            menurun = 0;
        }
    }
    

}


int main()
{

    char YorN[2];
    mainMenu(YorN);
    return 0; 
}

// 05.04.24 the developing of the started.
// 06.04.24 start create the actual game.