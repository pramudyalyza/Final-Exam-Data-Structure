#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

//Alyza Rahima Pramudya - 2502032125

#define CLR_PURP "\e[0;35m" //To Define ANSI color of purple
#define CLR_WHT "\e[0;37m" //To Define ANSI color of white
int day, month, year;

struct node{
    long long nim;
    char name[50];
    int hours;
    int minutes;
    int seconds;
    struct node *left;
    struct node *right;
};

int gethours(){  //function to extract curr hour
    time_t t;
    time(&t);
    struct tm *local = localtime(&t);
    return local->tm_hour;  
}

int getminutes(){ //function to extract curr minutes
    time_t t;
    time(&t);
    struct tm *local = localtime(&t);
    return local->tm_min;   
}

int getseconds(){ //function to extract curr seconds
    time_t t;
    time(&t);
    struct tm *local = localtime(&t);
    return local->tm_sec;   
}

void delay(){  //function To delay the program
    for (int i = 0; i < 2e7; i++){
    }
}

void ascii_mainMenuAnimated(){  //function for Ascii main menu
    
printf("   _____ __            __           __     ___   __  __                 __                         _____            __        \n");    
delay();   
printf("  / ___// /___  ______/ /__  ____  / /_   /   | / /_/ /____  ____  ____/ /___ _____  ________     / ___/__  _______/ /____  ____ ___\n"); 
delay();
printf("  \\__ \\/ __/ / / / __  / _ \\/ __ \\/ __/  / /| |/ __/ __/ _ \\/ __ \\/ __  / __ `/ __ \\/ ___/ _ \\    \\__ \\/ / / / ___/ __/ _ \\/ __ `__ \\ \n");
delay();
printf(" ___/ / /_/ /_/ / /_/ /  __/ / / / /_   / ___ / /_/ /_/  __/ / / / /_/ / /_/ / / / / /__/  __/   ___/ / /_/ (__  ) /_/  __/ / / / / / \n");
delay();
printf("/____/\\__/\\__,_/\\__,_/\\___/_/ /_/\\__/  /_/  |_\\__/\\__/\\___/_/ /_/\\__,_/\\__,_/_/ /_/\\___/\\___/   /____/\\__, /____/\\__/\\___/_/ /_/ /_/ \n");
delay();
printf("                                                                                                     /____/                          \n");

}

void ascii_mainMenu(){  //function for Ascii main menu
    
printf("   _____ __            __           __     ___   __  __                 __                         _____            __        \n");       
printf("  / ___// /___  ______/ /__  ____  / /_   /   | / /_/ /____  ____  ____/ /___ _____  ________     / ___/__  _______/ /____  ____ ___\n"); 
printf("  \\__ \\/ __/ / / / __  / _ \\/ __ \\/ __/  / /| |/ __/ __/ _ \\/ __ \\/ __  / __ `/ __ \\/ ___/ _ \\    \\__ \\/ / / / ___/ __/ _ \\/ __ `__ \\ \n");
printf(" ___/ / /_/ /_/ / /_/ /  __/ / / / /_   / ___ / /_/ /_/  __/ / / / /_/ / /_/ / / / / /__/  __/   ___/ / /_/ (__  ) /_/  __/ / / / / /\n");
printf("/____/\\__/\\__,_/\\__,_/\\___/_/ /_/\\__/  /_/  |_\\__/\\__/\\___/_/ /_/\\__,_/\\__,_/_/ /_/\\___/\\___/   /____/\\__, /____/\\__/\\___/_/ /_/ /_/ \n");
printf("                                                                                                     /____/                          \n");

}

void ascii_exitAnimated(){ //function for Ascii Exit
    
    printf("  ________                __      __  __               __   __\n");
    delay();
    printf(" /_  __/ /_  ____ _____  / /__    \\ \\/ /___  __  __   / /  / /\n");
    delay();
    printf("  / / / __ \\/ __ `/ __ \\/ //_/     \\  / __ \\/ / / /  / /  / / \n");
    delay();
    printf(" / / / / / / /_/ / / / / ,<        / / /_/ / /_/ /  /_/  /_/  \n");
    delay();
    printf("/_/ /_/ /_/\\__,_/_/ /_/_/|_|      /_/\\____/\\__,_/  (_)  (_)   \n");
                                                              
}

void ascii_inputAnimated(){  //function for Ascii input menu
    
printf("    ____                  __     ___   __  __                 __                    \n");
delay();
printf("   /  _/___  ____  __  __/ /_   /   | / /_/ /____  ____  ____/ /___ _____  ________ \n");
delay();
printf("   / // __ \\/ __ \\/ / / / __/  / /| |/ __/ __/ _ \\/ __ \\/ __  / __ `/ __ \\/ ___/ _ \\ \n");
delay();
printf(" _/ // / / / /_/ / /_/ / /_   / ___ / /_/ /_/  __/ / / / /_/ / /_/ / / / / /__/  __/\n");
delay();
printf("/___/_/ /_/ .___/\\__,_/\\__/  /_/  |_\\__/\\__/\\___/_/ /_/\\__,_/\\__,_/_/ /_/\\___/\\___/ \n");
delay();
printf("         /_/                                                                        ");

}

void ascii_todayAnimated(){  //function for Ascii view menu
    
printf("  ______          __           _          ___   __  __                 __   \n");
delay();                 
printf(" /_  __/___  ____/ /___ ___  _( )_____   /   | / /_/ /____  ____  ____/ /___ _____  ________ \n");
delay();
printf("  / / / __ \\/ __  / __ `/ / / /// ___/  / /| |/ __/ __/ _ \\/ __ \\/ __  / __ `/ __ \\/ ___/ _ \\ \n");
delay();
printf(" / / / /_/ / /_/ / /_/ / /_/ / (__  )  / ___ / /_/ /_/  __/ / / / /_/ / /_/ / / / / /__/  __/\n");
delay();
printf("/_/  \\____/\\__,_/\\__,_/\\__, / /____/  /_/  |_\\__/\\__/\\___/_/ /_/\\__,_/\\__,_/_/ /_/\\___/\\___/ \n");
delay();
printf("                      /____/                                                                 ");

}

void ascii_searchAnimated(){  //function for Ascii search menu
    
printf("   _____                      __       _____ __            __           __ \n");
delay();
printf("  / ___/___  ____ ___________/ /_     / ___// /___  ______/ /__  ____  / /_ \n");
delay();
printf("  \\__ \\/ _ \\/ __ `/ ___/ ___/ __ \\    \\__ \\/ __/ / / / __  / _ \\/ __ \\/ __/ \n");
delay();
printf(" ___/ /  __/ /_/ / /  / /__/ / / /   ___/ / /_/ /_/ / /_/ /  __/ / / / /_  \n");
delay();
printf("/____/\\___/\\__,_/_/   \\___/_/ /_/   /____/\\__/\\__,_/\\__,_/\\___/_/ /_/\\__/  \n");
                                                                           

}

struct node *newnode(long long inim, char iname[], int ihours, int iminutes, int iseconds){  //function for make a new node
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->nim = inim;
    strcpy(temp->name, iname);
    temp->hours = ihours;
    temp->minutes = iminutes;
    temp->seconds = iseconds;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node *inputattendance(struct node *node, long long inim, char iname[], int ihours, int iminutes, int iseconds){ //function for input student
    if(node == NULL){
        return newnode(inim, iname, ihours, iminutes, iseconds);
    }

    if(inim < node->nim){
        node->left = inputattendance(node->left, inim, iname, ihours, iminutes, iseconds);
    }else if(inim > node->nim){
        node->right = inputattendance(node->right, inim, iname, ihours, iminutes, iseconds);
    }

    return node;
}

void viewattendance(struct node *root){  //function for showing attendance
    if(root != NULL){
        viewattendance(root->left);
        printf("\n\n\t\t ID      : %lld\n", root->nim);
        printf("\t\t Name    : %s\n", root->name);
        printf("\t\t Time    : %02d:%02d:%02d\n\n", root->hours, root->minutes, root->seconds);
    }

}

struct node *searchstudent(struct node *node, long long inim){  //function for search student

    if(node != NULL){
        if(node->nim > inim){
            return searchstudent(node->left, inim);
        }else if(node->nim < inim){
            return searchstudent(node->left, inim);
        }else if( node->nim == inim){
            printf("\n\n\t\t ID      : %lld\n", node->nim);
            printf("\t\t Name    : %s\n", node->name);
            printf("\t\t Time    : %02d:%02d:%02d\n\n", node->hours, node->minutes, node->seconds);
            return node;
        }
    }else{
        printf("\n\n\t\t Student with ID: %lld is not present today\n", inim);
    }
    return node;
}

int main(){  //main menu
    struct node *root = NULL;
    long long inim;
    char iname[50];
    int ihours, iminutes, iseconds;
    int menu;

    time_t t;
    time(&t);

    struct tm *local = localtime(&t);
    day = local->tm_mday;           
    month = local->tm_mon + 1;   
    year = local->tm_year + 1900;

    while(1){
        system("CLS");
        ascii_mainMenuAnimated();
        printf("\n\t\t\t\t\t\t %s> Input Attendance<%s\n", CLR_PURP, CLR_WHT);
        printf("\t\t\t\t\t\t Show Today's Attendance\n");
        printf("\t\t\t\t\t\t Search Student\n");
        printf("\t\t\t\t\t\t Exit\n");

        char input;
        char mainmenu[4][70] = {"Input Attendance", "Show Today's Attendance", "Search Student", "Exit"};

        int inputchoice = 0;

        for(int i = 0;; i++){
            input = _getche();
            system("CLS");
            ascii_mainMenu();
            printf("\n\n");

            if (input == 's'){
                inputchoice++;
            }else if(input == 'w'){
                inputchoice--;
            }

            if(inputchoice < 0){
                inputchoice = 0;
            }else if(inputchoice > 3){
                inputchoice = 6;
            }

            if(input == '\x0D' && inputchoice == 0){
                system("CLS");
                ihours = gethours();
                iminutes = getminutes();
                iseconds = getseconds();
                ascii_inputAnimated();
                printf("\n\n\t\t ID      : "); scanf("%lld", &inim); getchar();
                printf("\t\t Name    : "); scanf("%[^\n]", iname); getchar();
                root = inputattendance(root, inim, iname, ihours, iminutes, iseconds);
                system("CLS");
                ascii_mainMenu();
                printf("\n\n");
            }else if(input == '\x0D' && inputchoice == 1){
                system("CLS");
                ascii_todayAnimated();
                printf("\n\n\n\t\t Date: %02d/%02d/%d", day, month, year);     
                viewattendance(root);
                getch();
                system("CLS");
                ascii_mainMenu();
                printf("\n\n");
            }else if(input == '\x0D' && inputchoice == 2){
                system("CLS");
                ascii_searchAnimated();
                printf("\n\n\t\t Enter Student's ID: "); scanf("%lld", &inim); getchar();
                searchstudent(root, inim);
                getch();
                system("CLS");
                ascii_mainMenu();
                printf("\n\n");
            }else if(input == '\x0D' && inputchoice == 3){
                system("CLS");
                ascii_exitAnimated();
                exit(1);
            }

            for(int i = 0; i<4; i++){
                if(i != inputchoice){
                    printf("\t\t\t\t\t\t %s\n", mainmenu[i]);
                }else{
                    printf("\t\t\t\t\t\t %s> %s <%s\n", CLR_PURP, mainmenu[inputchoice], CLR_WHT);
                }
            }
        }

    }

    return 0;
}