// an adventure game.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define print printf

// ooooh items!
#include "items.h"
#include "enemy.h"

// struct of the player!!!!!
struct playerr
{
    char choice[100];
    int x;
    int y;
};

// struct of the world!!!
struct world
{
    char place[100];
    // struct of the castles!!!
    struct castle
    {
        int chests;
        char TypeCastle[100];
    } castle;
};


// the actual game!
void game(char YorN[2])
{
    struct playerr player;
    // struct castle castlee;
    struct world worlde;

    
    struct Sword wooden_sword, iron_sword, titanuim_sword, legend_sword;
    struct Armor leather_armor, iron_armor, titanuim_armor, legend_armor;
    struct Bow wooden_bow, rare_bow, legend_bow;
    
    // attack of the sword
    wooden_sword.attack = 1;
    iron_sword.attack = 3;
    titanuim_sword.attack = 6;
    legend_sword.attack = 10;
    // Item damage of the sword.
    wooden_sword.ItemDamage = 5.0;
    iron_sword.ItemDamage = 7.5;
    titanuim_sword.ItemDamage = 10.0;
    legend_sword.ItemDamage = 15.5;
    // Text name of the sword.
    strncpy(wooden_sword.TextName, "wooden sword", 50);
    strncpy(iron_sword.TextName, "iron sword", 50);
    strncpy(titanuim_sword.TextName, "titanium sword", 50);
    strncpy(legend_sword.TextName, "legend sword", 50);

    int gameRun = 1;
    // i dont have yet random generation. :(
    strncpy(worlde.castle.TypeCastle, "plain castle", 100);
    print("you spawned in %s\n", worlde.castle.TypeCastle);
    strncpy(worlde.place, worlde.castle.TypeCastle, 100);

    player.x = 8;
    player.y = 8;

    sleep(1);


    while (gameRun)
    {
        print("player: ");
        fgets(player.choice, 10, stdin);
        player.choice[strlen(player.choice) - 1] = '\0';

        if (strcmp(player.choice, "q") == 0)
        {
            gameRun = 0;
        }

        // place of where the player is.
        else if (strcmp(player.choice, "place") == 0)
        {
            print("%s\n", worlde.castle.TypeCastle);
        }

        // will show coordinates of the palyer
        else if (strcmp(player.choice, "coords") == 0)
        {
            print("x%i, y%i\n", player.x, player.y);
        }

        else if (strcmp(player.choice, "sword") == 0) {
            if (wooden_sword.TextName) {
                print("%s\n", wooden_sword.TextName);
                // add more info about the sword.
            }
            // add other sword types.
        }

        // checks what you have around you(for example a chest) just a demo!
        /*
        else if (strcmp(player.choice, "around") == 0) {
            print("(test: a chest nearby!)\n");
        }
        */
    }
}

// main menu of the game which starts
// function where is the game
void mainMenu(char YorN[2])
{
    int menurun = 1;

    print("Welcome to Life Survival(alpha 0.6)!\n");
    sleep(1);
    while (menurun)
    {
        print("start the game(y/n): ");
        fgets(YorN, 10, stdin);
        YorN[strlen(YorN) - 1] = '\0';

        if (strcmp(YorN, "y") == 0)
        {
            menurun = 0;
            print("starting the game\n\n\n");
            game(YorN);
        }
        else if (strcmp(YorN, "n") == 0)
        {
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
