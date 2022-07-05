/* This is a simple terminal based Tic Tac Toe game you can enjoy with your friends. */


#include <stdio.h>
#include <stdlib.h>

// global variable board initialized to be used in more than one function
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

// function prototypes
static void print_board();
static void playXorO();
static void gameCheckwin();
static void clearScreen();
static void playerX();
static void playerO();
static void declareWin();


int main(int argc, char **argv){
    clearScreen(); 
    
    //start here
    printf("********TIC-TAC-TOE********\n\n");

    print_board();
    playXorO();

    // end here
    return 0;

}

//function to clear the screen
static void clearScreen(){

    system("clear");
}


//function to print the board
static void print_board(){

    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);

}

static void playerX(){

    clearScreen();
    print_board();

    char posX;

    printf("Where will you place X: ");
    posX = getchar();
    scanf("%c", &posX);

    switch(posX){
        case '1':
            board[0][0] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;
        
        case '2':
            board[0][1] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        case '3':
            board[0][2] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        case '4':
            board[1][0] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        case '5':
            board[1][1] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        case '6':
            board[1][2] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        case '7':
            board[2][0] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        case '8':
            board[2][1] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        case '9':
            board[2][2] = 'X';
            print_board();
            gameCheckwin();
            playerO();
            break;

        default:
            printf("Invalid!\n");
            playerX();
            break;
    }
}

static void playerO(){
    clearScreen();
    print_board();

    char posO;

    printf("Where will you place O: ");
    posO = getchar();
    scanf("%c", &posO);

    switch(posO){
        case '1':
            board[0][0] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '2':
            board[0][1] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '3':
            board[0][2] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '4':
            board[1][0] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '5':
            board[1][1] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '6':
            board[1][2] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '7':
            board[2][0] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '8':
            board[2][1] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        case '9':
            board[2][2] = 'O';
            print_board();
            gameCheckwin();
            playerX();
            break;

        default:
            printf("Invalid!\n");
            playerO();
            break;
    }
}

// This is where x or o is chosen
static void playXorO(){

    char choice;

    printf("Choose X or O: ");
    scanf("%c", &choice);

    switch(choice){
        case 'x':
            playerX();
            break;
        case 'X':
            playerX();
            break;
        case 'o':
            playerO();
            break;
        case 'O':
            playerO();
            break;
        default:
            printf("Invalid choice! TRY AGAIN!!\n");
            playXorO();

    }
}

static void gameCheckwin(){

    //horizontals check
    if(board[0][0] == board[0][1] && board[0][1] == board[0][2]){
        declareWin();
    }else if(board[1][0] == board[1][1] && board[1][1] == board[1][2]){
        declareWin();
    }else if(board[2][0] == board[2][1] && board[2][1] == board[2][2]){
        declareWin();

    //verticals check
    }else if(board[0][0] == board[1][0] && board[1][0] == board[2][0]){
        declareWin();
    }else if(board[0][1] == board[1][1] && board[1][1] == board[2][1]){
        declareWin();
    }else if(board[0][2] == board[1][2] && board[1][2] == board[2][2]){
        declareWin();

    //diagonals check
    }else if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        declareWin();
    }else if(board[2][0] == board[1][1] && board[1][1] == board[0][2]){
        declareWin();
    }

}

static void declareWin(){

    printf("CONGRATULATIONS!! YOU WIN!!\n");
    exit(0);

}

// will add more lines to check if space is already filled.

   