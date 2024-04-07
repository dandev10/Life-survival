// an adventure game.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define print printf

// struct of the player!!!!!
struct playerr {
    char choice[100];
    char place[100];
    int cord1;
    int cord2;
};

// struct of the castles!!!
struct castle {
    int chests;
    char TypeCastle[100];
};

// the actual game!
void game(char YorN[2]) {
    struct playerr player;
    struct castle castlee;

    int gameRun = 1;
    // i dont have yet random generation. :(
    strncpy(castlee.TypeCastle = "plain castle", 100);
    print("you spawned in plain %s\n", castlee.TypeCastle);
    player.place = castlee.TypeCastle;

    player.cord1 = 8;
    player.cord2 = 8;
    
    sleep(1);

    while(gameRun) {
        print("player: ");
        fgets(player.choice, 10, stdin);
        player.choice[strlen(player.choice)-1] = '\0';

        if (strcmp(player.choice, "exit")== 0) {
            gameRun = 0;
        }

        // place of where the player is.
        else if (strcmp(player.choice, "place")==0) {
            print("%s\n", player.place);
        }

        // will show coordinates of the palyer
        else if (strcmp(player.choice, "coords")==0) {
            print("%i, %i\n", player.cord1, player.cord2);
        }
        
        // checks what you have around you(for example a chest)
        else if (strcmp(player.choice, "around") == 0) {

        }

    }
    
    
}

// main menu of the game which starts
// function where is the game
void mainMenu(char YorN[2]) {
    int menurun = 1;

    print("Welcome to Life Survival(alpha 0.3)!\n");
    sleep(1);
    while (menurun)
    {
        print("start the game(y/n): ");
        fgets(YorN, 10, stdin);
        YorN[strlen(YorN)-1] = '\0';
        
        if (strcmp(YorN, "y")== 0) {
            menurun = 0;
            print("starting the game\n\n\n");
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