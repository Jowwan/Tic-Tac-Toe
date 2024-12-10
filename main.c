#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

void TicTacToe()
{
    void gotoxy(int x, int y){
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    void nameGet(){
        system("cls");
        printf("\n\n");
        printf("                                                                                               _______ _        _______           _______ \n");
        printf("                                                                                              |__   __(_)      |__   __|         |__   __| \n");
        printf("                                                                                                 | |   _  ___     | | __ _  ___     | | ___   ___ \n");
        printf("                                                                                                 | |  | |/ __|    | |/ _` |/ __|    | |/ _ \\ / _ \\ \n");
        printf("                                                                                                 | |  | | (__     | | (_| | (__     | | (_) |  __/ \n");
        printf("                                                                                                 |_|  |_|\\___|    |_|\\__,_|\\___|    |_|\\___/ \\___| \n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("                                              __________________________________________                                                               ___________________________________________\n");
        printf("                                              |                                        |                                                               |                                         |\n");
        printf("                                              |  PLAYER 1. USERNAME:                   |                                                               |  PLAYER 2. USERNAME:                    |\n");
        printf("                                              |________________________________________|                                                               |_________________________________________|\n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("                                                                                                           TYPE \"EXIT\" TO EXIT THE GAME ");
    }
    void mainScreen (){
        system("cls");
        printf("\n\n");
        printf("                                                                                               _______ _        _______           _______ \n");
        printf("                                                                                              |__   __(_)      |__   __|         |__   __| \n");
        printf("                                                                                                 | |   _  ___     | | __ _  ___     | | ___   ___ \n");
        printf("                                                                                                 | |  | |/ __|    | |/ _` |/ __|    | |/ _ \\ / _ \\ \n");
        printf("                                                                                                 | |  | | (__     | | (_| | (__     | | (_) |  __/ \n");
        printf("                                                                                                 |_|  |_|\\___|    |_|\\__,_|\\___|    |_|\\___/ \\___| \n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("                ___________________________________________________                            ___________________________________________________                            ___________________________________________________\n");
        printf("                |                                                 |                            |                                                 |                            |                                                 |\n");
        printf("                |                  $$$$$$$$$$$$$                  |                            |        = =      |             |                 |                            |                                                 |\n");
        printf("                |              $$$$$$$ _________$$$               |                            |      =     =    |             |                 |                            |                  ..ee$$$$$ee..                  |\n");
        printf("                |           $$$$$$$$$ ___________ $$$$            |                            |     =       =   |             |                 |                            |              .e$*\"\"    $    \"\"*$e.              |\n");
        printf("                |          $$_$$$____$$ ________ $___$$           |                            |     =       =   |             |                 |                            |            z$\"*.       $         $$c            |\n");
        printf("                |         $___$________$ ______ $______$$         |                            |      =     =    |             |                 |                            |          z$\"   *.      $       .P  ^$c          |\n");
        printf("                |        $___$ _________ $$$$$$$$_______$$        |                            |        = =      |             |                 |                            |         d\"      *      $      z\"     \"b         |\n");
        printf("                |       $___$$ ________ $$$$$$$$$________$$       |                            |    _____________|_____________|_____________    |                            |        $\"        b     $     4%       ^$        |\n");
        printf("                |      $$___$ _________ $$$$$$$$$$________$$      |                            |                 |  __     __  |                 |                            |       d%         *     $     P         '$       |\n");
        printf("                |      $___$$ _______$$$$$$$$$$$$$$_______$$      |                            |                 |  \\ \\   / /  |                 |                            |      .$          'F    $    J\"          $r      |\n");
        printf("                |      $__$$$$$ __ $$$___$$$$$$$__ $$$$___$$      |                            |                 |   \\ \\_/ /   |                 |                            |      4L           b    $    $           J$      |\n");
        printf("                |      $$$$$$$$$$$ _______ $$$________$$$$$$      |                            |                 |    | _ |    |                 |                            |      $F$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      |\n");
        printf("                |      $_$$$$$$$ __________ $__________$$$$$      |                            |                 |   / / \\ \\   |                 |                            |      4F          4F    $    4r          4P      |\n");
        printf("                |      $_$$$$$$$ __________ $__________$$$$$      |                            |                 |  /_/   \\_\\  |                 |                            |      ^$          $     $     b          $%      |\n");
        printf("                |       $_$$$$$$ _________ $$__________ $$$       |                            |    _____________|_____________|_____________    |                            |       3L        .F     $     'r        JP       |\n");
        printf("                |        $_$$__$$ ________ $_________$$_$$        |                            |                 |  __     __  |      = =        |                            |        *c       $      $      3.      z$        |\n");
        printf("                |         $$_____$$$ ___ $$$$$____$$$___$         |                            |                 |  \\ \\   / /  |    =     =      |                            |         *b     J\"      $       3r    dP         |\n");
        printf("                |          $$ _____ $$$$$$$$$$$$$$$___$$          |                            |                 |   \\ \\_/ /   |   =       =     |                            |          ^$c  z%       $        \"c z$\"          |\n");
        printf("                |           $$$ _____ $$$$$$$$$$____$$            |                            |                 |    | _ |    |   =       =     |                            |            \"*$L        $        .d$\"            |\n");
        printf("                |             $$$$ __ $$$$$$$$$__$$$              |                            |                 |   / / \\ \\   |    =     =      |                            |               \"*$ee..  $  ..ze$P\"               |\n");
        printf("                |                $$$$$ _____ $$$$$                |                            |                 |  /_/   \\_\\  |      = =        |                            |                   \"\"*******\"\"                   |\n");
        printf("                |                    $$$$$$$$$$                   |                            |                                                 |                            |                                                 |\n");
        printf("                |_________________________________________________|                            |_________________________________________________|                            |_________________________________________________|\n");
        printf("\n");
        printf("                                FOOTY TIC-TAC-TOE: 1                                                         CLASSIC TIC-TAC-TOE: 2                                                         BASKETBALL TIC-TAC-TOE: 3            \n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("                           _____________________________                                                  _____________________________                                                   \n");
        printf("                           |                           |                                                  |                           |                                                   \n");
        printf("                           |          EXIT: 0          |                                                  |    ENTER YOUR CHOICE:     |                                                   \n");
        printf("                           |___________________________|                                                  |___________________________|                                                   \n");
        printf("\n");
    }
    void basketballTicTacToe(char player1Name[30], char player2Name[30])
    {
        char listaIgraci[][30] = {"Kareem Abdul-Jabbar","Michael Jordan", "Larry Bird", "Magic Johnson","LeBron James", "Kevin Durant","Stephen Curry","Dirk Nowitzki","Giannis Antetokounmpo","David Robinson", /*1;3*/ "Stephen Curry","Kevin Durant","Michael Jordan","LeBron James","Kareem Abdul-Jabbar","Kobe Bryant","Tim Duncan","Magic Johnson","David Robinson","Hakeem Olajuwon" /*1:4*/,"Kareem Abdul-Jabbar","Bill Russell","Micheal Jordan", "Lebron James","Magic Johnson","Tim Duncan","James Harden","Allen Iverson","David Robinson","Derrick Rose"/*1:5*/, "LeBron James","Derrick Rose","/","/","/","/","/","/","/","/" /*1:6*/, "Micheal Jordan", "Derrick Rose","/","/","/","/","/","/","/","/" /*1:7*/,"LeBron James","Kevin Durant","James Harden","/","/","/","/","/","/","/" /*1:8*/, "LeBron James","Shaquille O'Neal","/","/","/","/","/","/","/","/" /*1:9*/, "LeBron James","Kareem Abdul-Jabbar","Russell Westbrook","Magic Johnson","Kobe Bryant","Shaquille O'Neal","/","/","/","/" /*1:10*/, "LeBron James","David Robinson","Stephen Curry","Larry Bird","Micheal Jordan","Allen Iverson","Kobe Bryant","James Harden","Tim Duncan","Kevin Durant" /*2:3*/, "LeBron James","Micheal Jordan","Hakeem Olajuwon","Kobe Bryant","Shaquille O'Neal","Kawhi Leonard","Kevin Durant","Stephen Curry","Magic Johnson","Tim Duncan" /*2:4*/, "LeBron James","Micheal Jordan","Hakeem Olajuwon","Tim Duncan","Magic Johnson","David Robinson","Shaquille O'Neal","/","/","/" /*2:5*/,"Lebron James","Dwayne Wade","Shaquille O'Neal","/","/","/","/","/","/","/" /*2:6*/, "Micheal Jordan","Dwayne Wade","/","/","/","/","/","/","/","/" /*2:7*/, "LeBron James","Kevin Durant","Kawhi Leonard","/","/","/","/","/","/","/" /*2:8*/, "LeBron James","Dwayne Wade","Shaquille O'Neal","/","/","/","/","/","/","/" /*2:9*/, "LeBron James","Shaquille O'Neal","Kobe Bryant","Magic Johnson","Kareem Abdul-Jabbar","/","/","/","/","/" /*2:10*/,"LeBron James","Micheal Jordan","Kobe Bryant","Kevint Durant","Stephen Curry","Tim Duncan","David Robinson","Kareem Abdul-Jabbar","/","/" /*3:4*/,"Kareem Abdul-Jabbar","Lebron James","Micheal Jordan","Magic Johnson","Tim Duncan","David Robinson","Hakeem Olajuwon","Shaquille O'Neal","/","/" /*3:5*/,"LeBron James","Dwayne Wade","Shaquille O'Neal","/","/","/","/","/","/","/" /*3:6*/,"Micheal Jordan","Dwayne Wade","Dennis Rodman","Scottie Pippen","Steave Kerr","Toni Kukoc","/","/","/","/" /*3:7*/, "Lebron James","Kevin Durant","Kawhi Leonard","/","/","/","/","/","/","/" /*3:8*/,"LeBron James","Dwayne Wade","Kevin Love","Shaquille O'Neal","/","/","/","/","/","/" /*3:9*/ ,"LeBron James","Kareem Abdul-Jabbar","Magic Johnson","Kobe Bryant","Shaquille O'Neal","Wilt Chamberlain","Rajon Rondo","Paul Gasol","/" /*3:10*/,"Lebron James","Kobe Bryant","Kareem Abdul-Jabbar","Wilt Chamberlain","Micheal Jordan","Shaquille O'Neal","Kevin Durant","Tim Duncan","David Robinson","Rey Allen","/" /*4:5*/,"Zydrunas Ilgauskas","LeBron James","Kyrie Irving","/","/","/","/","/","/","/" /*4:6*/,"Derrick Rose","Micheal Jordan","Scottie Pippen","/","/","/","/","/","/","/" /*4:7*/,"Kevin Durant","LeBron James","Antony Davis","James Harden","/","/","/","/","/","/" /*4:8*/,"LeBron James","Dwayne Wade","/","/","/","/","/","/","/","/" /*4:9*/,"Magic Johnson","LeBron James","Kareem Abdul-Jabbar","Carmelo Anthony","/","/","/","/","/","/" /*4:10*/,"Kareem Abdul-Jabbar","LeBron James","David Robinson","Tim Duncan","Hakeem Olajuwon","Kevin Durant","James Harden","/","/","/" /*5:6*/,"Dwayne Wade","/","/","/","/","/","/","/","/","/" /*5:7*/,"LeBron James","/","/","/","/","/","/","/","/","/" /*5:8*/,"LeBron James","Derrick Rose","Dwayne Wade","/","/","/","/","/","/","/" /*5:9*/,"George Mikan", "LeBron James","/","/","/","/","/","/","/","/"/*5:10*/,"LeBron James","/","/","/","/","/","/","/","/","/" /*6:7*/,"DeMar DeRozan","/","/","/","/","/","/","/","/","/" /*6:8*/,"Dwayne Wade","/","/","/","/","/","/","/","/","/" /*6:9*/,"Pat Bev","Alex Caruso","Lozno Ball","Dennis Rodman","Pau Gasol","/","/","/","/","/" /*6:10*/,"Micheal Jordan","Robert Parish","Dwayne Wade","DeMar DeRozan","Pau Gasol","George Gervin","/","/","/","/" /*7:8*/ ,"LeBron James","/","/","/","/","/","/","/","/","/" /*7:9*/,"LeBron James","Anthony Davis","Austin Reaves","Rui Hachimura","Dennis Shroder","/","/","/","/","/" /*7:10*/,"LeBron James","Kevin Durant","James Harden","Carmelo Anthony","/","/","/","/","/","/" /*8;9*/,"LeBron James","Shaquille O'Neal","Gary Payton","/","/","/","/","/","/","/" /*8:10*/,"LeBron James","Shaquille O'Neal","Rey Allen","Dwayne Wade","Gary Payton","Joe Johnson","/","/","/","/" /*9:10*/ ,"LeBron James","Kareem Abdul-Jabbar","Kobe Bryant","Karl Malone","Wilt Chamberlain","Shaquille O'Neal","Carmelo Anthony","Jerry West","Russell Westbrook","Pau Gasol"};
        char listaTimova[25][25] = {"        MVP        ", "    FINALS MVP     ","     2+ RINGS      ","    TOP 5 PICK     ","       CAVS        ","       BULLS       ","   PW: WESTBROOK   ","       HEAT        ","      LAKERS       ","    20K POINTS     "};
        char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        char showingSquares[][20] = {"                   ","                   ","                   ","         1         ","                   ","                   ","                   ","                   ","                   ","                   ","         2         ","                   ","                   ","                   ","                   ","                   ","                   ","         3         ","                   ","                   ","                   ","                   ","                   ","                   ","         4         ","                   ","                   ","                   ","                   ","                   ","                   ","         5         ","                   ","                   ","                   ","                   ","                   ","                   ","         6         ","                   ","                   ","                   ","                   ","                   ","                   ","         7         ","                   ","                   ","                   ","                   ","                   ","                   ","         8         ","                   ","                   ","                   ","                   ","                   ","                   ","         9         ","                   ","                   ","                   "};


        int checkwin()
        {
            if (square[1] == square[2] && square[2] == square[3])
                return 1;

            else if (square[4] == square[5] && square[5] == square[6])
                return 1;

            else if (square[7] == square[8] && square[8] == square[9])
                return 1;

            else if (square[1] == square[4] && square[4] == square[7])
                return 1;

            else if (square[2] == square[5] && square[5] == square[8])
                return 1;

            else if (square[3] == square[6] && square[6] == square[9])
                return 1;

            else if (square[1] == square[5] && square[5] == square[9])
                return 1;

            else if (square[3] == square[5] && square[5] == square[7])
                return 1;

            else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                != '7' && square[8] != '8' && square[9] != '9')

                return 0;
            else
                return  - 1;
        }

        void board(int ind, char igrac[20],char row1[25], char row2[25], char row3[25], char col1[25], char col2[25], char col3[25])
        {
            system("cls");
            printf("\n\n\n");
            printf("                                              ___________________________________________________                                              ___________________________________________________\n");
            printf("                                              |                                                 |                                              |                                                 |\n");
            printf("                                              |                                                 |                                              |    Use capital letters when typing players      |\n");
            printf("                                              |                                                 |                                              |        Type the full name of the player         |\n");
            printf("                                              |                                                 |                                              |           example: Russell Westbrook            |\n");
            printf("                                              |_________________________________________________|                                              |_________________________________________________|\n");
            printf("\n\n\n\n");

            if(ind == 1) printf("                                                                                                          PLAYER SELECTED: %s            ", igrac);

            printf("\n\n\n");
            printf("                                                                                _________________________________________________________________________________\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",row1,row2,row3);
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[0],showingSquares[7],showingSquares[14]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[1],showingSquares[8],showingSquares[15]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[2],showingSquares[9],showingSquares[16]);
            printf("                                                                                |%s|%s|%s|%s|\n",col1,            showingSquares[3],showingSquares[10],showingSquares[17]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[4],showingSquares[11],showingSquares[18]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[5],showingSquares[12],showingSquares[19]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[6],showingSquares[13],showingSquares[20]);
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[21],showingSquares[28],showingSquares[35]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[22],showingSquares[29],showingSquares[36]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[23],showingSquares[30],showingSquares[37]);
            printf("                                                                                |%s|%s|%s|%s|\n",col2,            showingSquares[24],showingSquares[31],showingSquares[38]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[25],showingSquares[32],showingSquares[39]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[26],showingSquares[33],showingSquares[40]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[27],showingSquares[34],showingSquares[41]);
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[42],showingSquares[49],showingSquares[56]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[43],showingSquares[50],showingSquares[57]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[44],showingSquares[51],showingSquares[58]);
            printf("                                                                                |%s|%s|%s|%s|\n",col3,            showingSquares[45],showingSquares[52],showingSquares[59]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[46],showingSquares[53],showingSquares[60]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[47],showingSquares[54],showingSquares[61]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[48],showingSquares[55],showingSquares[62]);
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("\n\n\n\n\n\n");
            printf("        ___________________________________________________                                    ___________________________________________________                                   ___________________________________________________\n");
            printf("        |                                                 |                                    |                                                 |                                   |                                                 |\n");
            printf("        |                                                 |                                    |                                                 |                                   |                                                 |\n");

            if(ind == -1) printf("        |                NEW GAME: \"GAME\"                 |                                    |                 SKIP TURN: \"TURN\"               |                                   |                     EXIT: \"EXIT\"                |\n");
            else          printf("        |               SHUFFLE: \"SHUFFLE\"                |                                    |                 SKIP TURN: \"TURN\"               |                                   |                     EXIT: \"EXIT\"                |\n");

            printf("        |                                                 |                                    |                                                 |                                   |                                                 |\n");
            printf("        |_________________________________________________|                                    |_________________________________________________|                                   |_________________________________________________|\n");
        }

        int choiceCheck(char mark, char igrac[20], int col, int row)
        {
            int maks = MAX(row,col);
            int minn = MIN(row,col);
            int k = (minn*(minn+1))/2;
            int indeks = (minn*10 - k +(maks-minn)-1)*10;
            for(int i=0;i<10;i++)
            {
                if(strcmp(listaIgraci[indeks+i],igrac) == 0)
                {
                    return 1;
                }
            }
            return 0;
        }

        void tableChange(int choice, int player)
        {
            choice--;
            if(player == 1)
            {
                strcpy(showingSquares[7*choice],  "     __     __     ");
                strcpy(showingSquares[7*choice+1],"     \\ \\   / /     ");
                strcpy(showingSquares[7*choice+2],"      \\ \\_/ /      ");
                strcpy(showingSquares[7*choice+3],"       | _ |       ");
                strcpy(showingSquares[7*choice+4],"      / / \\ \\      ");
                strcpy(showingSquares[7*choice+5],"     /_/   \\_\\     ");


            }
            else
            {
                strcpy(showingSquares[7*choice],  "       =   =       ");
                strcpy(showingSquares[7*choice+1],"     =       =     ");
                strcpy(showingSquares[7*choice+2],"    =         =    ");
                strcpy(showingSquares[7*choice+3],"    =         =    ");
                strcpy(showingSquares[7*choice+4],"    =         =    ");
                strcpy(showingSquares[7*choice+5],"     =       =     ");
                strcpy(showingSquares[7*choice+6],"       =   =       ");
            }
        }

        void tableReset()
        {
            for(int i=0;i<63;i++)
            {
                strcpy(showingSquares[i],  "                   ");
            }
            strcpy(showingSquares[3],   "         1         ");
            strcpy(showingSquares[10],  "         2         ");
            strcpy(showingSquares[17],  "         3         ");
            strcpy(showingSquares[24],  "         4         ");
            strcpy(showingSquares[31],  "         5         ");
            strcpy(showingSquares[38],  "         6         ");
            strcpy(showingSquares[45],  "         7         ");
            strcpy(showingSquares[52],  "         8         ");
            strcpy(showingSquares[59],  "         9         ");
            square[1] = '1';
            square[2] = '2';
            square[3] = '3';
            square[4] = '4';
            square[5] = '5';
            square[6] = '6';
            square[7] = '7';
            square[8] = '8';
            square[9] = '9';
        }

        int player = 1, i, choice;
        char izbor[20];
        char mark;
        char tempPlayer[30];
        char indikator[20];
        int shuffind;

        int a[6];
        time_t t;
        srand((unsigned)time(&t));

        do
        {
            tableReset();
            i=-1;
            player  = 1;
            shuffind = 0;

            bool arr[15]={0};
            for(int i1=0;i1<6;++i1)
            {
                int r=rand()%9;
                if(!arr[r])
                a[i1] = r;
                else
                i1--;
                arr[r]=1;
            }

            do
            {

                player = (player % 2) ? 1 : 2;
                mark = (player == 1) ? 'X' : 'O';

                board(0,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);
                gotoxy(49,6);
                if(player == 1) printf("%s enter a player: ", player1Name);
                else printf("%s enter a player: ", player2Name);
                fflush(stdin);
                gets(izbor);

                if(!strcmp(izbor,"TURN"))
                {
                    player++;
                }
                else
                {
                    if(!strcmp(izbor,"SHUFFLE"))
                    {
                        i= 1;
                        shuffind = 1;
                    }
                    else
                    {
                        if(!strcmp(izbor,"EXIT"))
                        {
                            gotoxy(110,64);
                            return 0;
                        }
                        else
                        {

                            board(1,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);
                            gotoxy(49,6);

                            if(player == 1) printf("%s enter a number: ", player1Name);
                            else printf("%s enter a number: ", player2Name);


                            scanf("%d", &choice);

                            if (choice == 1 && square[1] == '1')
                            {
                                if(choiceCheck(mark,izbor,a[0],a[3]))
                                {
                                    square[1] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 2 && square[2] == '2')
                            {
                                if(choiceCheck(mark,izbor,a[0],a[4]))
                                {
                                    square[2] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 3 && square[3] == '3')
                            {
                                if(choiceCheck(mark,izbor,a[0],a[5]))
                                {
                                    square[3] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 4 && square[4] == '4')
                            {
                                if(choiceCheck(mark,izbor,a[1],a[3]))
                                {
                                    square[4] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 5 && square[5] == '5')
                            {
                                if(choiceCheck(mark,izbor,a[1],a[4]))
                                {
                                    square[5] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 6 && square[6] == '6')
                            {
                                if(choiceCheck(mark,izbor,a[1],a[5]))
                                {
                                    square[6] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 7 && square[7] == '7')
                            {
                                if(choiceCheck(mark,izbor,a[2],a[3]))
                                {
                                        square[7] = mark;
                                        tableChange(choice,player);
                                }
                            }
                            else if (choice == 8 && square[8] == '8')
                            {
                                if(choiceCheck(mark,izbor,a[2],a[4]))
                                {
                                    square[8] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 9 && square[9] == '9')
                            {
                                if(choiceCheck(mark,izbor,a[2],a[5]))
                                {
                                    square[9] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else
                            {
                                board(0,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);
                                gotoxy(115,13);
                                printf("INVALID MOVE");
                                gotoxy(62,6);
                                printf("PRESS ANY BUTTON ");
                                player--;
                                getch();

                            }

                            i = checkwin(square);
                            player++;
                        }
                    }
                }

            }while (i ==  - 1);

            if(!shuffind)
            {
                board(-1,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);

                if (i == 1)
                {

                    gotoxy(110,13);
                    if(player-1 == 1)
                    {
                        printf("RESULT: %s WIN ", player1Name);

                    }
                    else
                    {
                        printf("RESULT: %s WIN ", player2Name);

                    }

                }
                else
                {
                    gotoxy(111,13);
                    printf("\aRESULT: GAME DRAW");

                }


                gotoxy(53,6);
                printf("Enter \"GAME\" or \"EXIT\":  ");
                scanf("%s", &indikator);
            }



            strcpy(tempPlayer,player1Name);
            strcpy(player1Name,player2Name);
            strcpy(player2Name,tempPlayer);

        }
        while((!strcmp(indikator,"GAME")) || shuffind);

        return 0;
    }
    void footyTicTacToe (char player1Name[30], char player2Name[30])
    {

        char listaIgraci[][20] = {"Messi","Di Maria","Varane","Giroud","Kante","Neuer","Khedira","Schweinsteiger","Muller","Lahm","Kroos","Boateng","Iniesta","Ramos","Pique","Puyol","Xavi","Kaka","Ronaldinho","Casillas" /*1:3*/,"Pele","Cafu","Lucio","Carlos","Ronaldo","Rivaldo","Ronaldinho","Dida","Pele","Kaka","Garincha","Alberto","/","/","/","/","/","/","/","/"/*1:4*/,"Iniesta","Romario","Rivaldo","Pique","Puyol","Xavi","Pedro","Villa","Valdes","Busquets","Umtiti","Dembele","Messi","Henry","/","/","/","/","/","/"/*1:5*/,"Cannavaro","Valdano","Karembeu","Carlos","Casillas","Albiol","Alonso","Arbeloa","Khedira","Varane","Kroos","Mendy","Zidane","/","/","/","/","/","/","/"/*1:6*/,"Giroud","Kante","Pedro","Schurrle","Torres","Mata","Belleti","Petit","Deshamps","Desailly","Greaves","Fabregas","Bonetti","Fernandez","/","/","/","/","/","/"/*1:7*/,"Alonso","Torres","Reina","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*!;8*/,"Martinez","Di Maria","Charlton","Blanc","Varane","Pique","Mata","Schweomsteoger","/","/","/","/","/","/","/","/","/","/","/","/"/*1:9*/,"Alvarez","Boateng","Mendy","Silva","Navas","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*1:10*/,"Muller","Tolisso","Boateng","Gotze","Kroos","Lahm","Schweinsteiger","Neuer","Beckenbauer","/","/","/","/","/","/","/","/","/","/","/"/*1:11*/,"Dembele","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*1:12*/,"Martinez","Acuna","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*1:13*/,"Di Maria","Parades","Matuidi","Del Piero","Cannavaro","Buffon","Zidane","Deschamps","Coman","Khedira","/","/","/","/","/","/","/","/","/","/"/*1:14*/,"Giroud","Inzaghi","Pirlo","Nesta","Abbiati","Ronaldo","Ronaldinho","Kaka","/","/","/","/","/","/","/","/","/","/","/","/"/*1:15*/,"Martinez","Ronaldo","Materazzi","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*2:3*/,"Neymar","Casemiro","Marcelo","Alves","Carlos","Dida","Firmino","Luiz","Coutinho","Adriano","Lucio","Maicon","Rivaldo","Vinicius Jr","Silva","Rodrygo","Militao","Alberto","Kaka","Cafu"/*2:4*/,"Suarez","Neymar","Pedro","Messi","Xavi","Busquets","Iniesta","Rakitic","Alba","Alves","Pique","Ter Stegen","Henry","Toure","Valdes","Eto'o","Puyol","Mascherano","Fabregas","Adriano"/*2:5*/,"Ronaldo","Benzema","Bale","Modric","Kroos","Casemiro","Ramos","Varane","Carvajal","Marcelo","Casillas","Courtois","Vinicius Jr","Rodrygo","Camavinga","Alba","Coentrao","Zidane","Carlos","Pepe"/*2:6*/,"Drogba","Lampard","Cahill","Cole","Cech","Luiz","Mata","Werner","Ziyech","Pulisic","Giroud","Kante","Kovacic","Mount","Rudiger","James","Chillwell","Azpilicueta","Silva","Mendy"/*2:7*/,"Salah","Mane","Firmino","Thiago","Fabinho","Wijnildum","Henderson","Arnold","Robertson","Van Dijk","Matip","Alisson","Alonso","Owen","Gerrard","Carragher","Dudek","Carson","/","/"/*2:8*/,"Ronaldo","Di Maria","Casemiro","Varane","Solskjaer","Rooney","Welbeck","Tevez","Nani","Park","Giggs","Scholes","Carrick","Neville","Evra","Pique","Vidic","Ferdinand","Van Der Sar","/" /*2:9*/,"Tevez","Carson","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*2:10*/,"Robben","Ribery","Mandzukic","Lewandowski","Thiago","Schweinsteiger","Muller","Alaba","Boateng","Lahm","Coman","Gnabry","Neuer","Martinez","Mane","Kimmich","Davis","Coutinho","Kroos","Beckenbauer"/*2:11*/,"Lewandowski","Hakimi","Perisic","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*2:12*/,"Ziyech","Seedorf","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*2:13*/,"Ronaldo","Di Maria","Del Piero","Deschamps","Zidane","Khedira","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*2:14*/,"Maldini","Nesta","Dida","Cafu","Gattuso","Inzaghi","Pirlo","Seedorf","Shevchenko","Kaka","Ronaldinho","/","/","/","/","/","/","/","/","/" /*2:15*/,"Stankovic","Quaresma","Pandev","Milito","Eto'o","Balotelli","Motta","Sneijder","Materazzi","Lucio","Zanetti","Cordoba","Maicon","Cesar","/","/","/","/","/","/"/*3:4*/,"Alves","Ronaldinho","Neymar","Raphinha","Coutinho","Rivaldo","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*3:5*/,"Vinicius Jr", "Casemiro", "Marcelo", "Kaka","Rodrygo", "Militao", "Carlos","/","/","/","/","/","/","/","/","/","/","/","/","/" /*3:6*/,"Willian", "Luiz", "Ramires", "Pato", "Oscar", "Silva","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:7*/,"Fabinho","Alisson","Firmino","Coutinho","Arthur","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:8*/,"Antony","Fred","Casemiro","Telles","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:9*/,"Ederson","Jesus","Fernardinho","Danilo","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:10*/,"Costa","Coutinho","Dante","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:11*/,"Reinier","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:12*/,"Antony","Neres","Luis","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:13*/,"Bremer","Sandro","Alves","Danilo","Costa","Arthur","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*3:14*/,"Ronaldo","Kaka","Cafu","Ronaldinho","Silva","Pato","Rivaldo","Paqueta","Dida","/","/","/","/","/","/","/","/","/","/","/"/*3:15*/,"Ronaldo","Maicon","Cesar","Lucio","Miranda","Coutinho","Telles","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:5*/,"Figo","Hagi","Enrique","Ronaldo","Eto'o","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:6*/,"Fabregas","Petit","Gudjohnsen","Deco","Quaresma","Pedro","Eto'o","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:7*/,"Thiago","Suarez","Coutinho","Mascherano","Reina","Arthur","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:8*/,"Pique","Ibrahimovic","Valdes","Sanchez","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:9*/,"Torres","Toure","Aguero","Bravo","/","/","/","/","/","-/","/","/","/","/","/","/","/","/","/","/"/*4:10*/,"Thiago","Coutinho","Lewandowski","Vidal","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:11*/,"Dembele","Boateng","Lewandowski","Gomez","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:12*/,"De Jong","Vermalen","Koeman","Suarez","Dest","Rijkard","Davids","Ibrahimovic","Cruyff","Overmars","Kluivert","/","/","/","/","/","/","/","/","/"/*4:13*/,"Alves","Ibrahimovic","Henry","Davids","Pjanic","Vidal","Arthur","/","/","/","/","/","/","/","/","/","/","/","/","/"/*4:14*/,"Ronaldo","Ibrahimovic","Ronaldinho","Rivaldo","Dest","Kluivert","Kessie","Boateng","Reina","/","/","/","/","/","/","/","/","/","/","/"/*4:15*/,"Ronaldo","Ibrahimovic","Eto'o","Motta","Davids","Alcantara","Maxwell","Quaresma","Vidal","Figo","Sanchez","/","/","/","/","/","/","/","/","/"/*5:6*/,"Robben","Courtois","Kovacic","Hazard","Rudiger","Essien","Makelele","Morata","Eto'o","/","/","/","/","/","/","/","/","/","/","/"/*5:7*/,"Owen","Fabinho","Arbeloa","Anelka","Alonso","Dudek","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*5:8*/,"Ronaldo","Di Maria","Beckham","Varane","Casemiro","Oweb","Van Nistelrooy","Hernandez","/","/","/","/","/","/","/","/","/","/","/","/"/*5:9*/,"Diaz","Anelka","Danilo","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*5:10*/,"Robben","Rodriguez","Alaba","Kroos","Alonso","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*5:11*/,"Hakimi","Reinier","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*5:12*/,"Seedorf","Sneijder","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*5:13*/,"Ronaldo","Zidane","Morata","Cannavaro","Higuain","Khedira","Di Maria","Danilo","/","/","/","/","/","/","/","/","/","/","/","/" /*5:14*/,"Ronaldo","Kaka","Seedorf","Robinho","Higuain","Hernandez","Diaz","/","/","/","/","/","/","/","/","/","/","/","/","/" /*5:15*/,"Ronaldo","Seedorf","Figo","Sneijder","Hakimi","Cannavaro","Kovacic","/","/","/","/","/","/","/","/","/","/","/","/","/" /*6:7*/,"Salah","Anelka","Cole","Torres","Sturridge","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*6:8*/,"Lukaku","Matic","Veron","Mata","Falcao","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*6:9*/,"Ake","Lampard","De Bruyne","Sterling","Anelka","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*6:10*/,"Robben","Ballack","Pizzaro","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*6:11*/,"Pulisic","Schurrle","Aubameyang","Hazard","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*6:12*/,"Ziyech","Luis","Traore","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*6:13*/,"Morata","Cuadrado","Anelka","Higuain","Zakaria","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*6:14*/,"Giroud","Shevchenko","Essien","Silva","Aubameyang","Torres","Crespo","Guilit","Higuain","Bakayoko","/","/","/","/","/","/","/","/","/","/"/*6:15*/,"Lukaku","Eto'o","Crespo","Veron","Quaresma","Kovacic","Moses","/","/","/","/","/","/","/","/","/","/","/","/","/"/*7:8*/,"Toure","Owen","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*7:9*/,"Milner","Sterling","Balotelli","Toure","Sturridge","Anelka","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*7:10*/,"Thiago","Mane","Reina","Alonso","Can","Saqiri","Coutinho","/","/","/","/","/","/","/","/","/","/","/","/","/"/*7:11*/,"Can","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*7:12*/,"Suarez","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*7:12*/,"Arthur","Sissoko","Can","Anelka","Rush","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*7:14*/,"Torres","Balotelli","Suso","Reina","Origi","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*7:15*/,"Saqiri","Coutinho","Balotelli","Keane","Moses","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*8:9*/,"Tevez","Schmeichel","Sancho","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*8:10*/,"Sabitzer","Schweinsteiger","Blind","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*8:11*/,"Sancho","Kagawa","Mkhitaryan","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*8:12*/,"Antony","Martinez","Van De Beek","Blind","Stam","Ibrahimovic","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*8:13*/,"Ronaldo","Pogba","Tevez","Ibrahimovic","Van Der Sar","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*8:14*/,"Ibrahimovic","Beckham","Dalot","Darmian","Stam","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*8:15*/,"Lukaku","Ibrahimovic","Telles","Sanchez","Veron","Forlan","Darmian","Young","Vidic","Eriksen","Mkhitaryan","/","/","/","/","/","/","/","/","/"/*9:10*/,"Cancelo","Sane","Boateng","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/" /*9:11*/,"Sancho","Haaland","Akanji","Gundogan","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*9:12*/,"De Jong","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*9:13*/,"Cancelo","Danilo","Tevez","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*9:14*/,"Diaz","Balotelli","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*9:15*/,"Cancelo","Balotelli","Dzeko","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*10:11*/,"Lewandowski","Hummels","Gotze","Sule","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*10:12*/,"Blind","Gravenberch","Mazraoui","De Ligt","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*10:13*/,"Costa","De Ligt","Coman","Benatia","Vidal","Mandzukic","Can","/","/","/","/","/","/","/","/","/","/","/","/","/"/*10:14*/,"Oddo","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*10:15*/,"Matthaus","Lucio","Perisic","Cancelo","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*11:12*/,"Haller","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*11:13*/,"Can","Immobile","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*11:14*/,"Aubameyang","Boateng","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*11:15*/,"Perisic","Hakimi","Mkhitaryan","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*12:13*/,"De Ligt","Ibrahimovic","Van Der Sar","Davids","Milik","/","/","/","/","/","/","/","/","/","/","/","/","/","/","/"/*12:14*/,"Seedorf","Van Basten","Davids","Ibrahimovic","Rijkaard","Kluivert","Stam","Dest","/","/","/","/","/","/","/","/","/","/","/","/"/*12:15*/,"Seedorf","Davids","Ibrahimovic","Onana","Bergkamp","Sneijder","Eriksen","/","/","/","/","/","/","/","/","/","/","/","/","/"/*13:14*/,"Pirlo","Baggio","Inzaghi","Davids","Bonucci","Zambrota","Vieira","Higuain","/","/","/","/","/","/","/","/","/","/","/","/"/*13:15*/,"Pirlo","Ibrahimovic","Vieira","Davids","Baggio","Cannavaro","Bonucci","Cancelo","/","/","/","/","/","/","/","/","/","/","/","/"/*14:15*/,"Pirlo","Ronaldo","Seedorf","Crespo","Ibrahimovic","Balotelli","Baggio","Calhanoglu","/","/","/","/","/","/","/","/","/","/","/","/"};
        char listaTimova[25][25] = {"     WC Winner     ", "     CL Winner     ","     Brazilian     ","     Barcelona     ","    Real Madrid    ","      Chelsea      ","     Liverpool     ","    Man. United    ","     Man. City     ", "   Bayern Munich   ","     Dortmund      ","        Ajax       ","     Juventus      ", "      AC Milan     ", "    Inter Milan    "};
        char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        char showingSquares[][20] = {"                   ","                   ","                   ","         1         ","                   ","                   ","                   ","                   ","                   ","                   ","         2         ","                   ","                   ","                   ","                   ","                   ","                   ","         3         ","                   ","                   ","                   ","                   ","                   ","                   ","         4         ","                   ","                   ","                   ","                   ","                   ","                   ","         5         ","                   ","                   ","                   ","                   ","                   ","                   ","         6         ","                   ","                   ","                   ","                   ","                   ","                   ","         7         ","                   ","                   ","                   ","                   ","                   ","                   ","         8         ","                   ","                   ","                   ","                   ","                   ","                   ","         9         ","                   ","                   ","                   "};
        int scoreAddPlayer1=0;
        int scoreAddPlayer2=0;
        int tempScore;

        int checkwin()
        {
            if (square[1] == square[2] && square[2] == square[3])
                return 1;

            else if (square[4] == square[5] && square[5] == square[6])
                return 1;

            else if (square[7] == square[8] && square[8] == square[9])
                return 1;

            else if (square[1] == square[4] && square[4] == square[7])
                return 1;

            else if (square[2] == square[5] && square[5] == square[8])
                return 1;

            else if (square[3] == square[6] && square[6] == square[9])
                return 1;

            else if (square[1] == square[5] && square[5] == square[9])
                return 1;

            else if (square[3] == square[5] && square[5] == square[7])
                return 1;

            else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                != '7' && square[8] != '8' && square[9] != '9')

                return 0;
            else
                return  - 1;
        }

        void board(int ind, char igrac[20],char row1[25], char row2[25], char row3[25], char col1[25], char col2[25], char col3[25])
        {
            system("cls");
            printf("\n\n\n");
            printf("                                              ___________________________________________________                                              ___________________________________________________\n");
            printf("                                              |                                                 |                                              |                                                 |\n");
            printf("                                              |                                                 |                                              |    Use capital letters when typing players      |\n");
            printf("                                              |                                                 |                                              |   Only type the last name of the player except  |\n");
            printf("                                              |                                                 |                                              |      for players like Di Maria, De Jong ...     |\n");
            printf("                                              |_________________________________________________|                                              |_________________________________________________|\n");
            printf("\n\n\n\n");

            if(ind == 1) printf("                                                                                                             PLAYER SELECTED: %s            ", igrac);

            printf("\n\n\n");
            printf("                                                                                _________________________________________________________________________________\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",row1,row2,row3);
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[0],showingSquares[7],showingSquares[14]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[1],showingSquares[8],showingSquares[15]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[2],showingSquares[9],showingSquares[16]);
            printf("                                                                                |%s|%s|%s|%s|\n",col1,            showingSquares[3],showingSquares[10],showingSquares[17]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[4],showingSquares[11],showingSquares[18]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[5],showingSquares[12],showingSquares[19]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[6],showingSquares[13],showingSquares[20]);
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[21],showingSquares[28],showingSquares[35]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[22],showingSquares[29],showingSquares[36]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[23],showingSquares[30],showingSquares[37]);
            printf("                                                                                |%s|%s|%s|%s|\n",col2,            showingSquares[24],showingSquares[31],showingSquares[38]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[25],showingSquares[32],showingSquares[39]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[26],showingSquares[33],showingSquares[40]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[27],showingSquares[34],showingSquares[41]);
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("                                                                                |                   |                   |                   |                   |\n");
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[42],showingSquares[49],showingSquares[56]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[43],showingSquares[50],showingSquares[57]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[44],showingSquares[51],showingSquares[58]);
            printf("                                                                                |%s|%s|%s|%s|\n",col3,            showingSquares[45],showingSquares[52],showingSquares[59]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[46],showingSquares[53],showingSquares[60]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[47],showingSquares[54],showingSquares[61]);
            printf("                                                                                |                   |%s|%s|%s|\n",showingSquares[48],showingSquares[55],showingSquares[62]);
            printf("                                                                                |___________________|___________________|___________________|___________________|\n");
            printf("\n\n\n\n\n\n");
            printf("        ___________________________________________________                                    ___________________________________________________                                   ___________________________________________________\n");
            printf("        |                                                 |                                    |                                                 |                                   |                                                 |\n");
            printf("        |                                                 |                                    |                                                 |                                   |                                                 |\n");

            if(ind == -1) printf("        |                NEW GAME: \"GAME\"                 |                                    |                 SKIP TURN: \"TURN\"               |                                   |                     EXIT: \"EXIT\"                |\n");
            else          printf("        |               SHUFFLE: \"SHUFFLE\"                |                                    |                 SKIP TURN: \"TURN\"               |                                   |                     EXIT: \"EXIT\"                |\n");

            printf("        |                                                 |                                    |                                                 |                                   |                                                 |\n");
            printf("        |_________________________________________________|                                    |_________________________________________________|                                   |_________________________________________________|\n");
        }

        int choiceCheck(char mark, char igrac[20], int col, int row)
        {
            int maks = MAX(row,col);
            int minn = MIN(row,col);
            int k = (minn*(minn+1))/2;
            int indeks = (minn*15 - k +(maks-minn)-1)*20;
            for(int i=0;i<20;i++)
            {
                if(strcmp(listaIgraci[indeks+i],igrac) == 0)
                {
                    return 1;
                }
            }
            return 0;
        }

        void tableChange(int choice, int player)
        {
            choice--;
            if(player == 1)
            {
                strcpy(showingSquares[7*choice],  "     __     __     ");
                strcpy(showingSquares[7*choice+1],"     \\ \\   / /     ");
                strcpy(showingSquares[7*choice+2],"      \\ \\_/ /      ");
                strcpy(showingSquares[7*choice+3],"       | _ |       ");
                strcpy(showingSquares[7*choice+4],"      / / \\ \\      ");
                strcpy(showingSquares[7*choice+5],"     /_/   \\_\\     ");


            }
            else
            {
                strcpy(showingSquares[7*choice],  "       =   =       ");
                strcpy(showingSquares[7*choice+1],"     =       =     ");
                strcpy(showingSquares[7*choice+2],"    =         =    ");
                strcpy(showingSquares[7*choice+3],"    =         =    ");
                strcpy(showingSquares[7*choice+4],"    =         =    ");
                strcpy(showingSquares[7*choice+5],"     =       =     ");
                strcpy(showingSquares[7*choice+6],"       =   =       ");
            }
        }

        void tableReset()
        {
            for(int i=0;i<63;i++)
            {
                strcpy(showingSquares[i],  "                   ");
            }
            strcpy(showingSquares[3],   "         1         ");
            strcpy(showingSquares[10],  "         2         ");
            strcpy(showingSquares[17],  "         3         ");
            strcpy(showingSquares[24],  "         4         ");
            strcpy(showingSquares[31],  "         5         ");
            strcpy(showingSquares[38],  "         6         ");
            strcpy(showingSquares[45],  "         7         ");
            strcpy(showingSquares[52],  "         8         ");
            strcpy(showingSquares[59],  "         9         ");
            square[1] = '1';
            square[2] = '2';
            square[3] = '3';
            square[4] = '4';
            square[5] = '5';
            square[6] = '6';
            square[7] = '7';
            square[8] = '8';
            square[9] = '9';
        }

        int player = 1, i, choice;
        char izbor[20];
        char mark;
        char tempPlayer[30];
        char indikator[20];
        int shuffind;

        int a[6];
        time_t t;
        srand((unsigned)time(&t));

        do
        {
            tableReset();
            i=-1;
            player  = 1;
            shuffind = 0;

            bool arr[15]={0};
            for(int i1=0;i1<6;++i1)
            {
                int r=rand()%14;
                if(!arr[r])
                a[i1] = r;
                else
                i1--;
                arr[r]=1;
            }

            do
            {

                player = (player % 2) ? 1 : 2;
                mark = (player == 1) ? 'X' : 'O';

                board(0,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);
                gotoxy(49,6);
                if(player == 1) printf("%s enter a player name: ", player1Name);
                else printf("%s enter a player name: ", player2Name);
                fflush(stdin);
                gets(izbor);

                if(!strcmp(izbor,"TURN"))
                {
                    player++;
                }
                else
                {
                    if(!strcmp(izbor,"SHUFFLE"))
                    {
                        i= 1;
                        shuffind = 1;
                    }
                    else
                    {
                        if(!strcmp(izbor,"EXIT"))
                        {
                            gotoxy(110,64);
                            return 0;
                        }
                        else
                        {

                            board(1,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);
                            gotoxy(49,6);

                            if(player == 1) printf("%s enter a number: ", player1Name);
                            else printf("%s enter a number: ", player2Name);


                            scanf("%d", &choice);

                            if (choice == 1 && square[1] == '1')
                            {
                                if(choiceCheck(mark,izbor,a[0],a[3]))
                                {
                                    square[1] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 2 && square[2] == '2')
                            {
                                if(choiceCheck(mark,izbor,a[0],a[4]))
                                {
                                    square[2] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 3 && square[3] == '3')
                            {
                                if(choiceCheck(mark,izbor,a[0],a[5]))
                                {
                                    square[3] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 4 && square[4] == '4')
                            {
                                if(choiceCheck(mark,izbor,a[1],a[3]))
                                {
                                    square[4] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 5 && square[5] == '5')
                            {
                                if(choiceCheck(mark,izbor,a[1],a[4]))
                                {
                                    square[5] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 6 && square[6] == '6')
                            {
                                if(choiceCheck(mark,izbor,a[1],a[5]))
                                {
                                    square[6] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 7 && square[7] == '7')
                            {
                                if(choiceCheck(mark,izbor,a[2],a[3]))
                                {
                                        square[7] = mark;
                                        tableChange(choice,player);
                                }
                            }
                            else if (choice == 8 && square[8] == '8')
                            {
                                if(choiceCheck(mark,izbor,a[2],a[4]))
                                {
                                    square[8] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else if (choice == 9 && square[9] == '9')
                            {
                                if(choiceCheck(mark,izbor,a[2],a[5]))
                                {
                                    square[9] = mark;
                                    tableChange(choice,player);
                                }
                            }
                            else
                            {
                                board(0,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);
                                gotoxy(115,13);
                                printf("INVALID MOVE");
                                gotoxy(62,6);
                                printf("PRESS ANY BUTTON ");
                                player--;
                                getch();

                            }

                            i = checkwin(square);
                            player++;
                        }
                    }
                }

            }while (i ==  - 1);

            if(!shuffind)
            {
                board(-1,izbor, listaTimova[a[3]], listaTimova[a[4]], listaTimova[a[5]], listaTimova[a[0]], listaTimova[a[1]], listaTimova[a[2]]);

                if (i == 1)
                {
                    gotoxy(110,13);
                    if(player-1 == 1)
                    {
                        printf("RESULT: %s WIN ", player1Name);

                    }
                    else
                    {
                        printf("RESULT: %s WIN ", player2Name);

                    }
                }
                else
                {
                    gotoxy(111,13);
                    printf("\aRESULT: GAME DRAW");

                }


                gotoxy(53,6);
                printf("Enter \"GAME\" or \"EXIT\":  ");
                scanf("%s", &indikator);
            }



            strcpy(tempPlayer,player1Name);
            strcpy(player1Name,player2Name);
            strcpy(player2Name,tempPlayer);
        }
        while((!strcmp(indikator,"GAME")) || shuffind);

        return 0;
    }
    void classicTicTacToe (char player1Name[30], char player2Name[30])
    {
        char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        char showingSquares[][20] = {"                   ","                   ","                   ","         1         ","                   ","                   ","                   ","                   ","                   ","                   ","         2         ","                   ","                   ","                   ","                   ","                   ","                   ","         3         ","                   ","                   ","                   ","                   ","                   ","                   ","         4         ","                   ","                   ","                   ","                   ","                   ","                   ","         5         ","                   ","                   ","                   ","                   ","                   ","                   ","         6         ","                   ","                   ","                   ","                   ","                   ","                   ","         7         ","                   ","                   ","                   ","                   ","                   ","                   ","         8         ","                   ","                   ","                   ","                   ","                   ","                   ","         9         ","                   ","                   ","                   "};
        int scoreAddPlayer1=0;
        int scoreAddPlayer2=0;
        int tempScore;

        int checkwin()
        {
            if (square[1] == square[2] && square[2] == square[3])
                return 1;

            else if (square[4] == square[5] && square[5] == square[6])
                return 1;

            else if (square[7] == square[8] && square[8] == square[9])
                return 1;

            else if (square[1] == square[4] && square[4] == square[7])
                return 1;

            else if (square[2] == square[5] && square[5] == square[8])
                return 1;

            else if (square[3] == square[6] && square[6] == square[9])
                return 1;

            else if (square[1] == square[5] && square[5] == square[9])
                return 1;

            else if (square[3] == square[5] && square[5] == square[7])
                return 1;

            else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
                != '7' && square[8] != '8' && square[9] != '9')

                return 0;
            else
                return  - 1;
        }

        void board()
        {
            system("cls");

            printf("\n\n\n");
            printf("\n\n\n\n");
            printf("                                                                                                    ______________________________________\n");
            printf("                                                                                                    |                                    |\n");
            printf("                                                                                                    |                                    |\n");
            printf("                                                                                                    |____________________________________|\n");
            printf("\n\n\n\n\n\n");
            printf("                                                                                         _____________________________________________________________\n");
            printf("                                                                                         |                   |                   |                   |\n");
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[0],showingSquares[7],showingSquares[14]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[1],showingSquares[8],showingSquares[15]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[2],showingSquares[9],showingSquares[16]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[3],showingSquares[10],showingSquares[17]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[4],showingSquares[11],showingSquares[18]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[5],showingSquares[12],showingSquares[19]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[6],showingSquares[13],showingSquares[20]);
            printf("                                                                                         |___________________|___________________|___________________|\n");
            printf("                                                                                         |                   |                   |                   |\n");
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[21],showingSquares[28],showingSquares[35]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[22],showingSquares[29],showingSquares[36]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[23],showingSquares[30],showingSquares[37]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[24],showingSquares[31],showingSquares[38]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[25],showingSquares[32],showingSquares[39]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[26],showingSquares[33],showingSquares[40]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[27],showingSquares[34],showingSquares[41]);
            printf("                                                                                         |___________________|___________________|___________________|\n");
            printf("                                                                                         |                   |                   |                   |\n");
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[42],showingSquares[49],showingSquares[56]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[43],showingSquares[50],showingSquares[57]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[44],showingSquares[51],showingSquares[58]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[45],showingSquares[52],showingSquares[59]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[46],showingSquares[53],showingSquares[60]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[47],showingSquares[54],showingSquares[61]);
            printf("                                                                                         |%s|%s|%s|\n",showingSquares[48],showingSquares[55],showingSquares[62]);
            printf("                                                                                         |___________________|___________________|___________________|\n");
            printf("\n\n\n\n\n\n\n");
            printf("                                              __________________________________________                                                               __________________________________________\n");
            printf("                                              |                                        |                                                               |                                         |\n");
            printf("                                              |                EXIT: 0                 |                                                               |               NEW GAME: 10              |\n");
            printf("                                              |________________________________________|                                                               |_________________________________________|\n");

        }

        void tableChange(int choice, int player)
        {
            choice--;
            if(player == 1)
            {
                strcpy(showingSquares[7*choice],  "     __     __     ");
                strcpy(showingSquares[7*choice+1],"     \\ \\   / /     ");
                strcpy(showingSquares[7*choice+2],"      \\ \\_/ /      ");
                strcpy(showingSquares[7*choice+3],"       | _ |       ");
                strcpy(showingSquares[7*choice+4],"      / / \\ \\      ");
                strcpy(showingSquares[7*choice+5],"     /_/   \\_\\     ");


            }
            else
            {
                strcpy(showingSquares[7*choice],  "       =   =       ");
                strcpy(showingSquares[7*choice+1],"     =       =     ");
                strcpy(showingSquares[7*choice+2],"    =         =    ");
                strcpy(showingSquares[7*choice+3],"    =         =    ");
                strcpy(showingSquares[7*choice+4],"    =         =    ");
                strcpy(showingSquares[7*choice+5],"     =       =     ");
                strcpy(showingSquares[7*choice+6],"       =   =       ");
            }
        }

        void tableReset()
        {
            for(int i=0;i<63;i++)
            {
                strcpy(showingSquares[i],  "                   ");
            }
            strcpy(showingSquares[3],   "         1         ");
            strcpy(showingSquares[10],  "         2         ");
            strcpy(showingSquares[17],  "         3         ");
            strcpy(showingSquares[24],  "         4         ");
            strcpy(showingSquares[31],  "         5         ");
            strcpy(showingSquares[38],  "         6         ");
            strcpy(showingSquares[45],  "         7         ");
            strcpy(showingSquares[52],  "         8         ");
            strcpy(showingSquares[59],  "         9         ");
            square[1] = '1';
            square[2] = '2';
            square[3] = '3';
            square[4] = '4';
            square[5] = '5';
            square[6] = '6';
            square[7] = '7';
            square[8] = '8';
            square[9] = '9';
        }

        int ind;
        char tempPlayer[30];
        int player = 1, i, choice;
        char mark;
        int shuffind;
        do
        {
            shuffind = 0;
            player = 1;
            ind = 1;

            tableReset();

            do
            {
                board();
                player = (player % 2) ? 1 : 2;
                gotoxy(105,9);
                if(player == 1) printf("%s enter a number: ", player1Name);
                else printf("%s enter a number: ", player2Name);

                scanf("%d", &choice);

                if(choice == 0)
                {
                    return 0;
                }
                else
                {
                    if(choice == 10)
                    {
                        shuffind = 1;
                        i=1;
                    }
                    else
                    {
                        mark = (player == 1) ? 'X' : 'O';

                        if (choice == 1 && square[1] == '1')
                        {
                            square[1] = mark;
                            tableChange(choice,player);
                        }
                        else if (choice == 2 && square[2] == '2')
                        {
                            square[2] = mark;
                            tableChange(choice,player);
                        }

                        else if (choice == 3 && square[3] == '3')
                        {
                            square[3] = mark;
                            tableChange(choice,player);
                        }

                        else if (choice == 4 && square[4] == '4')
                        {
                            square[4] = mark;
                            tableChange(choice,player);
                        }

                        else if (choice == 5 && square[5] == '5')
                        {
                            square[5] = mark;
                            tableChange(choice,player);
                        }

                        else if (choice == 6 && square[6] == '6')
                        {
                            square[6] = mark;
                            tableChange(choice,player);
                        }

                        else if (choice == 7 && square[7] == '7')
                        {
                            square[7] = mark;
                            tableChange(choice,player);
                        }

                        else if (choice == 8 && square[8] == '8')
                        {
                            square[8] = mark;
                            tableChange(choice,player);
                        }

                        else if (choice == 9 && square[9] == '9')
                        {
                            square[9] = mark;
                            tableChange(choice,player);
                        }

                        else
                        {
                            board();
                            gotoxy(114,15);
                            printf("INVALID MOVE");
                            gotoxy(105,9);
                            printf("      PRESS ANY BUTTON  ");
                            player--;
                            getch();
                        }

                        i = checkwin();
                        player++;

                    }
                }

            }
            while (i ==  - 1);

            if(!shuffind)
            {
                if (i == 1)
                {
                    board();
                    gotoxy(110,15);

                    if(player-1 == 1)
                    {
                        printf("RESULT: %s WIN ", player1Name);
                    }
                    else
                    {
                        printf("RESULT: %s WIN ", player2Name);
                    }

                    gotoxy(105,9);
                    printf("      PRESS 0 OR 10: ");
                    scanf("%d", &ind);
                }
                else
                {
                    board();
                    gotoxy(112,15);
                    printf("\aRESULT: GAME DRAW");
                    gotoxy(105,9);
                    printf("       PRESS 0 OR 10: ");
                    scanf("%d", &ind);
                }
            }
            else
            {
                ind  = 1;
            }

            strcpy(tempPlayer,player1Name);
            strcpy(player1Name,player2Name);
            strcpy(player2Name,tempPlayer);
        }
        while(ind != 0);

        return 0;
    }

    char player1Name[100] = "jao", player2Name[100];

    int gameChoice;

    nameGet();

    gotoxy(69,36);
    scanf("%s", &player1Name);

    if(!strcmp(player1Name,"EXIT")) return 0;

    gotoxy(174,36);
    scanf("%s", &player2Name);

    if(!strcmp(player2Name,"EXIT")) return 0;



    do
    {
        mainScreen();
        gotoxy(130,60);

        scanf("%d", &gameChoice);
        if(gameChoice == 1) footyTicTacToe(player1Name,player2Name);
        else if(gameChoice == 2) classicTicTacToe(player1Name,player2Name);
        else if(gameChoice == 3) basketballTicTacToe(player1Name,player2Name);
    }
    while(gameChoice != 0);

    return 0;
}
void screenSetting()
{
    void setScreenResolution(){
        DEVMODE devMode;
        ZeroMemory(&devMode, sizeof(devMode));
        devMode.dmSize = sizeof(devMode);
        devMode.dmPelsWidth = 1920;
        devMode.dmPelsHeight = 1080;
        devMode.dmFields = DM_PELSWIDTH | DM_PELSHEIGHT;
    }
    void setConsoleFullscreen(){
        HWND console = GetConsoleWindow();
        SetWindowLong(console, GWL_STYLE, GetWindowLong(console, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX);
        ShowWindow(console, SW_MAXIMIZE);
    }
    void removeSidebar(){
        HWND console = GetConsoleWindow();
        ShowScrollBar(console, SB_BOTH, FALSE);
    }
    void removeTop(){
        HWND console = GetConsoleWindow();
        SetWindowLong(console, GWL_STYLE, GetWindowLong(console, GWL_STYLE) & ~WS_CAPTION);
    }
    void color(){
        system("COLOR 0B");
    }

    color();
    removeTop();
    setScreenResolution();
    setConsoleFullscreen();
    removeSidebar();
}
int main()
{
    screenSetting();
    TicTacToe();

    return 0;
}
