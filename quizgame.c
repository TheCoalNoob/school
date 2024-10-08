#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//FUNCTIONS OLALA
void title();
void end();
void player();
char novice();
char standard();
char expert();
char instruct();

//MAIN FUNCTION
int main()
{
int choice, retry,diff,sett;
char name[20],anykey;
    printf("\n\n\n\n\n\t\t\t\t\t\t\t\t=======================");
    printf("\n\t\t\t\t\t\t\t\tENTER YOUR IN-GAME NAME");
    printf("\n\t\t\t\t\t\t\t\t=======================");
    printf("\n\t\t\t\t\t\t\t\t ♥ ");
    fgets(name, 20, stdin);
do 
{
    menu:
    system("clear");
    printf("\t\t\t\t\t\t\t\t||==========================||");
    printf("\n\t\t\t\t\t\t\t\t  Welcome Back, %s", name);
    printf("\n\t\t\t\t\t\t\t\t||==========================||");
    title();
    printf("\n\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\t\t\t\t\t\t\t\t      || 1. PLAY       ||");
    printf("\n\t\t\t\t\t\t\t\t      || 2. CREDITS    ||");
    printf("\n\t\t\t\t\t\t\t\t      || 3. OPTIONS    ||");
    printf("\n\t\t\t\t\t\t\t\t      || 4. HELP       ||");
    printf("\n\t\t\t\t\t\t\t\t      || 5. OTHER GAME ||");
    printf("\n\t\t\t\t\t\t\t\t      || 6. EXIT       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%d", &choice);
    
switch(choice) 
{
case 1:
{
    difficult:
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t    CHOOSE YOUR DIFFICULTY ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\t\t\t\t\t\t\t\t      || 1. NOVICE     ||");
    printf("\n\t\t\t\t\t\t\t\t      || 2. STANDARD   ||");
    printf("\n\t\t\t\t\t\t\t\t      || 3. EXPERT     ||");
    printf("\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\t\t\t\t\t\t\t\t      || 4. MENU       ||");
    printf("\n\t\t\t\t\t\t\t\t      || 5. EXIT       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%d", &diff);
    switch(diff)
    {
    case 1:
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t    YOU'VE CHOSEN NOVICE (>‿◠)");
    instruct();
    novice();
    break;
    case 2:
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t    YOU'VE CHOSEN STANDARD ( ˘︹˘ )");
    instruct();
    standard();
    break;
    case 3:
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t    YOU'VE CHOSEN EXPERT (ง︡'-'︠)ง");
    instruct();
    expert();
    break;
    case 4:
    goto menu;
    break;
    default:
    goto difficult;
    break;
}
break;
}
case 2:
{
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t\t     CREDITS ≧◡≦");
    printf("\n\n\t\t\t\t\t\t\t  PROGRAMMER:       JUGO, SER ADRIANE VINCENT B.");
    printf("\n\t\t\t\t\t\t\t  INSTRUCTOR:       NATIVIDAD, C.");
    printf("\n\t\t\t\t\t\t\t  INPIRATIONS:      NATIVIDAD, C.");
    printf("\n\t\t\t\t\t\t\t                    BARINGUIAN, F.");
    printf("\n\t\t\t\t\t\t\t                    CAGAS, F.");
    printf("\n\t\t\t\t\t\t\t  ASSISTANT:        JUGO, S.");
    printf("\n\t\t\t\t\t\t\t  DESIGNER:         JUGO, S.");
    printf("\n\t\t\t\t\t\t\t  TEXT ARTS:        FSYMBOLS");
    printf("\n\t\t\t\t\t\t\t  OTHER QUESTION/S: QUIZIZZ");
    printf("\n\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\t\t\t\t\t\t ||       THIS GAME WAS LAST MODIFIED ON APRIL 4, 2023.     ||");
    printf("\n\t\t\t\t\t\t ||=========================================================||");
    break;
}
case 3:
{
    options:
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t  ||=======================||");
    printf("\n\t\t\t\t\t\t\t\t\t    OPTIONS ");
    printf("\n\t\t\t\t\t\t\t\t  ||=======================||");
    printf("\n\t\t\t\t\t\t\t\t\t    (ˆ▿ˆc) ");
    printf("\n\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\t\t\t\t\t\t\t\t      || 1. CHANGE NAME ||");
    printf("\n\t\t\t\t\t\t\t\t      || 2. ANSWER KEYS ||");
    printf("\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\t\t\t\t\t\t\t\t      || 3. MENU       ||");
    printf("\n\t\t\t\t\t\t\t\t      || 4. EXIT       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\n\t\t\t\t\t\t\t\t\t    ♥ ");
    scanf("%d", &sett);
    switch(sett)
        {
        case 1:
        system("clear");
        player();
        title();
        printf("\n\n\t\t\t\t\t\t\t\t     ||================||");
        printf("\n\t\t\t\t\t\t\t\t     ||  CHANGE NAME   ||");
        printf("\n\t\t\t\t\t\t\t\t     ||================||");
        printf("\n\n\t\t\t\t\t\t\t\t ♥ ");
        scanf("%s", name);
        break;
        case 2:
        system("clear");
        player();
        title();
        printf("\n\n\t\t\t\t\t\t ||=========================================================||");
        printf("\n\t\t\t\t\t\t ||                        ANSWER KEYS                      ||");
        printf("\n\t\t\t\t\t\t ||=========================================================||");
        printf("\n\t\t\t\t\t\t ||       NOVICE      ||     STANDARD     ||     EXPERT     ||");
        printf("\n\t\t\t\t\t\t ||=========================================================||");
        printf("\n\t\t\t\t\t\t ||1. C               ||1. D              ||1. B            ||");
        printf("\n\t\t\t\t\t\t ||2. C               ||2. C              ||2. B            ||");
        printf("\n\t\t\t\t\t\t ||3. A               ||3. B              ||3. A            ||");
        printf("\n\t\t\t\t\t\t ||4. D               ||4. A              ||4. A            ||");
        printf("\n\t\t\t\t\t\t ||5. C               ||5. D              ||5. A            ||");
        printf("\n\t\t\t\t\t\t ||6. A               ||6. C              ||6. D            ||");
        printf("\n\t\t\t\t\t\t ||7. B               ||7. A              ||7. B            ||");
        printf("\n\t\t\t\t\t\t ||8. B               ||8. C              ||8. B            ||");
        printf("\n\t\t\t\t\t\t ||9. D               ||9. B              ||9. C            ||");
        printf("\n\t\t\t\t\t\t ||10.A               ||10.B              ||10.D            ||");
        printf("\n\t\t\t\t\t\t ||=========================================================||");
        break;
        case 3:
        goto menu;
        case 4:
        goto quit;
        break;
        default:
        goto options;
        break;
        }
    break;
}
case 4:
{
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t      ==================================");
    printf("\n\t\t\t\t\t\t\t      = ||  ||  ||||||  ||     ||||||  =");
    printf("\n\t\t\t\t\t\t\t      = ||  ||  ||      ||     ||   || =");
    printf("\n\t\t\t\t\t\t\t      = ||||||  ||||||  ||     ||||||  =");
    printf("\n\t\t\t\t\t\t\t      = ||  ||  ||      ||     ||      =");
    printf("\n\t\t\t\t\t\t\t      = ||  ||  ||||||  |||||  ||      =");
    printf("\n\t\t\t\t\t\t\t      ==================================");
    printf("\n\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\t\t\t\t\t\t ||                        INSTRUCTIONS                     ||");
    printf("\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\t\t\t\t\t\t || NAME:                                                   ||");
    printf("\n\t\t\t\t\t\t || - WHEN INPUTTING YOUR NAME, AVOID USING YOUR REAL NAME. ||");
    printf("\n\t\t\t\t\t\t ||  BUT INSTEAD, USE YOUR GAME NAME.                       ||");
    printf("\n\t\t\t\t\t\t || ANSWERING:                                              ||");
    printf("\n\t\t\t\t\t\t || - WHEN ANSWERING, TYPE IN ONE LETTER ONLY FOR IT MAY    ||");
    printf("\n\t\t\t\t\t\t ||  CAUSE BUFFER OVERFLOW WHICH THE PROGRAM WILL ONLY ACCE-||");
    printf("\n\t\t\t\t\t\t ||  ONE LETTER.                                            ||");
    printf("\n\t\t\t\t\t\t || PRESSING ANY KEY:                                       ||");
    printf("\n\t\t\t\t\t\t || - SAME AS ANSWERING, USE ONE LETTER ONLY.               ||");
    printf("\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\t\t\t\t\t\t || REMEMBER:                                               ||");
    printf("\n\t\t\t\t\t\t || - THIS GAME IS STILL IN DEVELOPMENT AND YOU MIGHT ENCOU-||");
    printf("\n\t\t\t\t\t\t ||  NTER BUGS WHILE PLAYING IT, SO PLEASE DO ENJOY.        ||");
    printf("\n\t\t\t\t\t\t ||=========================================================||");

    break;
}
case 5:
{
    int i,o;
    char name1[30];
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\t\t\t\t\t\t            YOU DID YOUR BEST, HAPPY APRIL FOOLS!");
    printf("\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t   What's your name? ");
    scanf("%s", name1);
    printf("\n\t\t\t\t\t\t\t\t   Give me any number: ");
    scanf("%d", &o);
    for(i=1;i<=o;i++){
        printf("\n\t\t\t\t\t\t\t\t %d. HAPPY BIRTHDAY %s\n", i,name1);
    }
    break;
}
case 6:
{
    goto quit;
    break;
}
default:
{
    goto menu;
    break;
}
}
    printf("\n\n\t\t\t\t\t\t\t    ==========================================");
    printf("\n\t\t\t\t\t\t\t  PRESS[1] TO GO BACK TO MENU, PRESS[2] TO EXIT" );
    printf("\n\t\t\t\t\t\t\t  ♥ ");
    scanf("%d", &retry);
    
}while(retry==1);
quit:
system("clear");
title();
end();
}

//FUNCTIONS YAAAAA
char novice()
{
    retrynovice:
    char novice;
    int score1=0, move;
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 1 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t  ||===========================================================================||");
    printf("\n\t\t\t\t\t     1. When making flowchart, always start with an oval symbol which indicates ");
    printf("\n\t\t\t\t\t  ||===========================================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t====================================");
    printf("\n\t\t\t\t\t\t\t\tA. Process           C. Start/End");
    printf("\n\t\t\t\t\t\t\t\tB. Decision          D. Input/Output");
    printf("\n\t\t\t\t\t\t\t\t====================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='C'|| novice=='c')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 2 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t   ||==========================================================================||");
    printf("\n\t\t\t\t\t     2. It is a flowchart symbol that is used to connect one symbol to another. ");
    printf("\n\t\t\t\t\t   ||==========================================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t=====================================");
    printf("\n\t\t\t\t\t\t\t\tA. Process               C. Arrow ");
    printf("\n\t\t\t\t\t\t\t\tB. Input/Output          D. Decision");
    printf("\n\t\t\t\t\t\t\t\t======================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='C'|| novice=='c')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 3 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t     ||=================================================||");
    printf("\n\t\t\t\t\t\t        3. What does the format specifier %%d indicates? ");
    printf("\n\t\t\t\t\t\t     ||=================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  =============================");
    printf("\n\t\t\t\t\t\t\t\t  A. int            C. char ");
    printf("\n\t\t\t\t\t\t\t\t  B. float          D. double");
    printf("\n\t\t\t\t\t\t\t\t  =============================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='A'|| novice=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 4 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||========================================================||");
    printf("\n\t\t\t\t\t\t    4. It is a C function that is used to scan or to input. ");
    printf("\n\t\t\t\t\t\t ||========================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ============================");
    printf("\n\t\t\t\t\t\t\t\t  A. void             C. main");
    printf("\n\t\t\t\t\t\t\t\t  B. printf           D. scanf");
    printf("\n\t\t\t\t\t\t\t\t  ============================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='D'|| novice=='d')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 5 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t     ||===============================================||");
    printf("\n\t\t\t\t\t\t        5. It is a C function that is used for output. ");
    printf("\n\t\t\t\t\t\t     ||===============================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ============================");
    printf("\n\t\t\t\t\t\t\t\t  A. scanf           C. printf");
    printf("\n\t\t\t\t\t\t\t\t  B. main            D. void");
    printf("\n\t\t\t\t\t\t\t\t  ============================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='C'|| novice=='c')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 6 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\t\t\t\t\t\t    6. What's the purpose of the rectangle symbol in flowcharting? ");
    printf("\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ====================================");
    printf("\n\t\t\t\t\t\t\t\t  A. Process           C. Input/Output");
    printf("\n\t\t\t\t\t\t\t\t  B. Decision          D. Start/End ");
    printf("\n\t\t\t\t\t\t\t\t  ====================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='A'|| novice=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 7 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\t\t\t\t\t\t    7. What format specifier is used when declaring whole numbers? ");
    printf("\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ========================");
    printf("\n\t\t\t\t\t\t\t\t  A. %%lf           C. %%c");
    printf("\n\t\t\t\t\t\t\t\t  B. %%d            D. %%s");
    printf("\n\t\t\t\t\t\t\t\t  ========================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='B'|| novice=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 8 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||============================================================||");
    printf("\n\t\t\t\t\t\t    8. What does the oval symbol indicates in flowcharting? ");
    printf("\n\t\t\t\t\t\t ||============================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ====================================");
    printf("\n\t\t\t\t\t\t\t\t  A. Input/Output        C. Decision ");
    printf("\n\t\t\t\t\t\t\t\t  B. Start/End             D. Process");
    printf("\n\t\t\t\t\t\t\t\t  ====================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='B'|| novice=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 9 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t  ||=====================================================||");
    printf("\n\t\t\t\t\t\t    9. These are examples of Relational Operators except: ");
    printf("\n\t\t\t\t\t\t  ||=====================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t       ======================");
    printf("\n\t\t\t\t\t\t\t\t       A. <=           C. != ");
    printf("\n\t\t\t\t\t\t\t\t       B. ==           D. ||");
    printf("\n\t\t\t\t\t\t\t\t       ======================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='D'|| novice=='d')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 10 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\t\t\t\t\t\t    10. What data type is used when declaring whole numbers. ");
    printf("\n\t\t\t\t\t\t ||=========================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ============================");
    printf("\n\t\t\t\t\t\t\t\t  A. INT             C. DOUBLE");
    printf("\n\t\t\t\t\t\t\t\t  B. FLOAT           D. CHAR");
    printf("\n\t\t\t\t\t\t\t\t  ============================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &novice);
    if(novice=='A'|| novice=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t      ||=================================================||");
    printf("\n\t\t\t\t\t\t\t\t   YOU'RE NOVICE SCORE IS %d / 10", score1);
    printf("\n\t\t\t\t\t\t      ||=================================================||");
    if (score1 >= 7)
    {
    printf("\n\n\t\t\t\t\t\t||===============================================================||");
    printf("\n\t\t\t\t\t\t  YOU PASSED, GREAT JOB!! NOW WHAT DO YOU WANT TO DO NEXT GENIUS?");
    printf("\n\t\t\t\t\t\t||===============================================================||");
    } else {
    printf("\n\n\t\t\t\t\t||=============================================================================||");
    printf("\n\t\t\t\t\t  MY APOLOGIES.. BUT YOU DIDNT PASSED, WOULD YOU LIKE  TO RETRY OR MOVE FORWARD?");
    printf("\n\t\t\t\t\t||=============================================================================||");    
    }
    printf("\n\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\t\t\t\t\t\t\t\t      || 1. MOVE        ||");
    printf("\n\t\t\t\t\t\t\t\t      || 2. RETRY       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\t\t\t\t\t\t\t\t      || 3. MENU        ||");
    printf("\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%d", &move);
    switch(move)
    {
        case 1:
        {
            standard();
            break;
        }
        case 2:
        {
            goto retrynovice;
            break;
        }
    }
}

char standard()
{
    retrystandard:
    char standard;
    int score1=0, move;
    score1>=0;
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 1 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t    ||===============================================||");
    printf("\n\t\t\t\t\t\t      1. The first thing you type in when coding in C ");
    printf("\n\t\t\t\t\t\t    ||===============================================||");
    printf("\n\n\t\t\t\t\t\t\t    ============================================");
    printf("\n\t\t\t\t\t\t\t    A. return 0;            C. { ");
    printf("\n\t\t\t\t\t\t\t    B. int main()           D. #include<stdio.h>");
    printf("\n\t\t\t\t\t\t\t    ============================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='D'|| standard=='d')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 2 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t   ||====================================||");
    printf("\n\t\t\t\t\t\t\t     2. What are the 3 types of loop in C ");
    printf("\n\t\t\t\t\t\t\t   ||====================================||");
    printf("\n\n\t\t\t\t\t\t\t  ===============================================");
    printf("\n\t\t\t\t\t\t\t  A. do,do-while,next       C. for,while,do-while");
    printf("\n\t\t\t\t\t\t\t  B. for,while,do           D. do,for-while,while");
    printf("\n\t\t\t\t\t\t\t  ===============================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='C'|| standard=='c')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 3 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t      ||==============================||");
    printf("\n\t\t\t\t\t\t\t        3. What does the \\n indicates ");
    printf("\n\t\t\t\t\t\t\t      ||==============================||");
    printf("\n\n\t\t\t\t\t\t\t       ================================");
    printf("\n\t\t\t\t\t\t\t       A. nextTab           C. newDown");
    printf("\n\t\t\t\t\t\t\t       B. newLine           D. nextLife");
    printf("\n\t\t\t\t\t\t\t       ================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='B'|| standard=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 4 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t ||========================================||");
    printf("\n\t\t\t\t\t\t\t    4. Array indexes always starts at ____? ");
    printf("\n\t\t\t\t\t\t\t ||========================================||");
    printf("\n\n\t\t\t\t\t\t\t          ============================");
    printf("\n\t\t\t\t\t\t\t          A. 0                 C. main");
    printf("\n\t\t\t\t\t\t\t          B. initialization    D. 1");
    printf("\n\t\t\t\t\t\t\t          ============================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='A'|| standard=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 5 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t   ||====================================||");
    printf("\n\t\t\t\t\t\t\t      5. What does the == operator means? ");
    printf("\n\t\t\t\t\t\t\t   ||====================================||");
    printf("\n\n\t\t\t\t\t\t\t    =====================================");
    printf("\n\t\t\t\t\t\t\t    A. double equal       C. greater than");
    printf("\n\t\t\t\t\t\t\t    B. not equal          D. equal to ");
    printf("\n\t\t\t\t\t\t\t    =====================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='D'|| standard=='d')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 6 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||======================================================||");
    printf("\n\t\t\t\t\t\t    6. These are different types of C Header Files EXCEPT ");
    printf("\n\t\t\t\t\t\t ||======================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t====================================");
    printf("\n\t\t\t\t\t\t\t\tA. <stdio.h>           C. <shrek.h>");
    printf("\n\t\t\t\t\t\t\t\tB. <stdlib.h>          D. <string.h> ");
    printf("\n\t\t\t\t\t\t\t\t====================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='C'|| standard=='c')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 7 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\t\t\t\t\t\t    7. What format specifier is used when declaring REAL numbers? ");
    printf("\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ========================");
    printf("\n\t\t\t\t\t\t\t\t  A. %%f            C. %%c");
    printf("\n\t\t\t\t\t\t\t\t  B. %%d            D. %%s");
    printf("\n\t\t\t\t\t\t\t\t  ========================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='A'|| standard=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 8 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t       ||=============================||");
    printf("\n\t\t\t\t\t\t\t          8. What does ++i indicates? ");
    printf("\n\t\t\t\t\t\t\t       ||=============================||");
    printf("\n\n\t\t\t\t\t\t\t      =====================================");
    printf("\n\t\t\t\t\t\t\t      A. pre-decrement    C. pre-increment");
    printf("\n\t\t\t\t\t\t\t      B. post-decrement   D. post-decrement ");
    printf("\n\t\t\t\t\t\t\t      =====================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='C'|| standard=='c')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 9 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t||==========================================||");
    printf("\n\t\t\t\t\t\t\t  9. What does the IPO stands for in coding? ");
    printf("\n\t\t\t\t\t\t\t||==========================================||");
    printf("\n\n\t\t\t\t\t\t  =====================================================================");
    printf("\n\t\t\t\t\t\t  A. Initial Public Offering      C. Illustrative Purposes Only");
    printf("\n\t\t\t\t\t\t  B. Input-Process-Output          D. International Police Organization");
    printf("\n\t\t\t\t\t\t  =====================================================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='B'|| standard=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 10 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t       ||=============================||");
    printf("\n\t\t\t\t\t\t\t         10. What does i-- indicates? ");
    printf("\n\t\t\t\t\t\t\t       ||=============================||");
    printf("\n\n\t\t\t\t\t\t\t      =====================================");
    printf("\n\t\t\t\t\t\t\t      A. pre-decrement    C. pre-increment");
    printf("\n\t\t\t\t\t\t\t      B. post-decrement   D. post-increment ");
    printf("\n\t\t\t\t\t\t\t      =====================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &standard);
    if(standard=='B'|| standard=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t      ||=================================================||");
    printf("\n\t\t\t\t\t\t\t        YOU'RE STANDARD SCORE IS %d / 10", score1);
    printf("\n\t\t\t\t\t\t      ||=================================================||");
    if (score1 >= 7)
    {
    printf("\n\n\t\t\t\t\t     ||==========================================================================||");
    printf("\n\t\t\t\t\t       WOW, YOU'VE PASSED!! DIDN'T EXPECT THAT.. WOULD YOU LIKE TO MOVE OR RETRY?");
    printf("\n\t\t\t\t\t     ||==========================================================================||");
    } else {
    printf("\n\n\t\t\t\t\t||====================================================================================||");
    printf("\n\t\t\t\t\t  OH... SORRY.. IT SEEMS LIKE YOU DIDN'T PASSED.. WOULD YOU LIKE TO TRY ONE MORE TIME?");
    printf("\n\t\t\t\t\t||====================================================================================||");    
    }
    printf("\n\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\t\t\t\t\t\t\t\t      || 1. MOVE        ||");
    printf("\n\t\t\t\t\t\t\t\t      || 2. RETRY       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\t\t\t\t\t\t\t\t      || 3. MENU       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%d", &move);
    switch(move)
    {
        case 1:
        {
            expert();
            break;
        }
        case 2:
        {
            goto retrystandard;
            break;
        }
    }
}

char expert()
{
    retryexpert:
    char expert,opinion[100];
    int score1=0, move;
    score1>=0;
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t||=============================||");
    printf("\n\t\t\t\t\t\t\t\t       QUESTION 1 OUT OF 10");
    printf("\n\t\t\t\t\t\t\t\t||=============================||");
    printf("\n\n\t\t\t   ||=======================================================================================================||");
    printf("\n\t\t\t    1. A coder wants to input his phone number to the program, what format specifier would best fit for it?");
    printf("\n\t\t\t  ||=======================================================================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t       ======================");
    printf("\n\t\t\t\t\t\t\t\t       A. int         C. %%f ");
    printf("\n\t\t\t\t\t\t\t\t       B. %%d         D. float");
    printf("\n\t\t\t\t\t\t\t\t       ======================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='B'|| expert=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 2 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t\t||==============================||");
    printf("\n\t\t\t\t\t\t\t\t  2. Who is Father of C Language");
    printf("\n\t\t\t\t\t\t\t\t||==============================||");
    printf("\n\n\t\t\t\t\t\t\t\t========================================");
    printf("\n\t\t\t\t\t\t\t\tA. Bjarne Stroustrup C. James A. Gosling");
    printf("\n\t\t\t\t\t\t\t\tB. Dennis Ritchie    D. Dr. E.F. Codd");
    printf("\n\t\t\t\t\t\t\t\t========================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='B'|| expert=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 3 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\t\t\t\t\t\t    3. In flowcharting, what symbol is used when doing decisions? ");
    printf("\n\t\t\t\t\t\t ||===============================================================||");
    printf("\n\n\t\t\t\t\t\t\t       ===================================");
    printf("\n\t\t\t\t\t\t\t       A. Diamond         C. Parallelogram");
    printf("\n\t\t\t\t\t\t\t       B. Rectangle          D. Oval ");
    printf("\n\t\t\t\t\t\t\t       ===================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='A'|| expert=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 4 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t      ||===================================||");
    printf("\n\t\t\t\t\t\t\t       4. These are valid variables EXCEPT ");
    printf("\n\t\t\t\t\t\t\t     ||===================================||");
    printf("\n\n\t\t\t\t\t\t\t     ==========================================");
    printf("\n\t\t\t\t\t\t\t     A. 12mapagmahal         C. BerryValid");
    printf("\n\t\t\t\t\t\t\t     B. jimvincent           D. Super_calicious");
    printf("\n\t\t\t\t\t\t\t     ==========================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='A'|| expert=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t||=============================||");
    printf("\n\t\t\t\t\t\t\t\t       QUESTION 5 OUT OF 10");
    printf("\n\t\t\t\t\t\t\t\t||=============================||");
    printf("\n\n\t\t\t\t\t||===============================================================================||");
    printf("\n\t\t\t\t\t  5. What happens if your array only has size of 10 but you've output a size of 11");
    printf("\n\t\t\t\t\t||================================================================================||");
    printf("\n\n\t\t\t\t\t\t\t     ==========================================");
    printf("\n\t\t\t\t\t\t\t     A. Buffer Overflow      C. Nothing happens");
    printf("\n\t\t\t\t\t\t\t     B. Error                   D. Warning sign");
    printf("\n\t\t\t\t\t\t\t     ==========================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='A'|| expert=='a')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 6 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||===================================================||");
    printf("\n\t\t\t\t\t\t    6. These are the types of Logical Operators EXCEPT");
    printf("\n\t\t\t\t\t\t ||===================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  =====================");
    printf("\n\t\t\t\t\t\t\t\t  A. &&           C. !");
    printf("\n\t\t\t\t\t\t\t\t  B. ||            D. ~");
    printf("\n\t\t\t\t\t\t\t\t  =====================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='D'|| expert=='d')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 7 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t      ||===================================||");
    printf("\n\t\t\t\t\t\t\t       7. What is the output of this program ");
    printf("\n\n\t\t\t\t\t\t\t       #include <stdio.h> ");
    printf("\n\t\t\t\t\t\t\t        int main() ");
    printf("\n\t\t\t\t\t\t\t        { ");
    printf("\n\t\t\t\t\t\t\t        printf(\"Hello World\"); ");
    printf("\n\t\t\t\t\t\t\t        }");
    printf("\n\t\t\t\t\t\t\t      ||===================================||");
    printf("\n\n\t\t\t\t\t\t\t     ==========================================");
    printf("\n\t\t\t\t\t\t\t     A. hello world         C. helloworld");
    printf("\n\t\t\t\t\t\t\t     B. Hello World           D. HelloWorld");
    printf("\n\t\t\t\t\t\t\t     ==========================================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='B'|| expert=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 8 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||=======================================================||");
    printf("\n\t\t\t\t\t\t    Which of the following is NOT a correct variable type? ");
    printf("\n\t\t\t\t\t\t ||=======================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t============================");
    printf("\n\t\t\t\t\t\t\t\tA. float            C. int");
    printf("\n\t\t\t\t\t\t\t\tB. triple            D. char");
    printf("\n\t\t\t\t\t\t\t\t============================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='B'|| expert=='b')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 9 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t ||==================================================================||");
    printf("\n\t\t\t\t\t\t    9. Can goto function jump from main function to another function? ");
    printf("\n\t\t\t\t\t\t ||==================================================================||");
    printf("\n\n\t\t\t\t\t\t\t\t  ==========================");
    printf("\n\t\t\t\t\t\t\t\t  A. YES            C. NO");
    printf("\n\t\t\t\t\t\t\t\t  B. MAYBE            D. IDK");
    printf("\n\t\t\t\t\t\t\t\t  ==========================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='C'|| expert=='c')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\t\t\t\t\t\t\t\t     QUESTION 10 OUT OF 10 ");
    printf("\n\t\t\t\t\t\t\t\t ||=========================||");
    printf("\n\n\t\t\t\t\t\t\t      ||===================================||");
    printf("\n\t\t\t\t\t\t\t       10. What is the output of this program ");
    printf("\n\n\t\t\t\t\t\t\t       #include <stdio.h> ");
    printf("\n\t\t\t\t\t\t\t        int main() ");
    printf("\n\t\t\t\t\t\t\t        { ");
    printf("\n\t\t\t\t\t\t\t        //printf(\"Hello World\"); ");
    printf("\n\t\t\t\t\t\t\t        int a=12; ");
    printf("\n\t\t\t\t\t\t\t        printf(\"%%d\", a); ");
    printf("\n\t\t\t\t\t\t\t        }");
    printf("\n\t\t\t\t\t\t\t      ||===================================||");
    printf("\n\n\t\t\t\t\t\t\t\t\t=========================");
    printf("\n\t\t\t\t\t\t\t\t\tA. %%d              C. a");
    printf("\n\t\t\t\t\t\t\t\t\tB. Hello World      D. 12");
    printf("\n\t\t\t\t\t\t\t\t\t=========================");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%s", &expert);
    if(expert=='D'|| expert=='d')
    {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS CORRECT ( ͡─ ᴗ ͡─)");
    score1++;
    } else {
    printf("\n\n\t\t\t\t\t\t\t\t   THAT IS INCORRECT ( ͡╥ ᴗ ͡╥)");
    }
    printf("\n ");
    sleep(3);
    system("clear");
    player();
    title();
    printf("\n\n\t\t\t\t\t\t      ||=================================================||");
    printf("\n\t\t\t\t\t\t\t\t  YOUR EXPERT SCORE IS %d / 10", score1);
    printf("\n\t\t\t\t\t\t      ||=================================================||");
    if (score1 >= 7)
    {
    printf("\n\n\t\t\t\t\t    ||==============================================================================||");
    printf("\n\t\t\t\t\t      YOU'VE BEATEN THE GAME... THANK YOU FOR PLAYING, I'M SUPER DUPER PROUD OF YOU!");
    printf("\n\t\t\t\t\t    ||==============================================================================||");
    } else {
    printf("\n\n\t\t\t\t\t\t||===============================================================||");
    printf("\n\t\t\t\t\t\t  EXPERT MIGHT BE HARD, BUT WITH PRACTICE? I KNOW YOU CAN DO IT!!");
    printf("\n\t\t\t\t\t\t||===============================================================||");    
    }
    printf("\n\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\t\t\t\t\t\t\t\t      || 1. RETRY       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||================||");
    printf("\n\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\t\t\t\t\t\t\t\t      || 2. EXIT       ||");
    printf("\n\t\t\t\t\t\t\t\t      ||===============||");
    printf("\n\n\t\t\t\t\t\t\t\t\t♥ ");
    scanf("%d", &move);
    switch(move)
    {
        case 1:
        {
        goto retryexpert;
        break;
        }
    }
}
void title()
{
    printf("\n\n\t\t\t\t\t   ==========================================================================");
    printf("\n\t\t\t\t\t   = |||||| ||  ||||||   ||||  ||  || ||||||  ||||   || |||||| ||||||       =");
    printf("\n\t\t\t\t\t   = ||  ||  | || || || ||  || ||| ||   ||   ||  ||   |     || ||  || ||||| =");
    printf("\n\t\t\t\t\t   = ||        || || || |||||| || |||   ||   ||||||        ||  ||  || ||    =");
    printf("\n\t\t\t\t\t   = ||  ||    || || || ||  || ||  ||   ||   ||  ||       ||   ||  ||   ||| =");
    printf("\n\t\t\t\t\t   = ||||||    || || || ||  || ||  || |||||| ||  ||       ||   |||||| ||||| =");
    printf("\n\t\t\t\t\t   ==========================================================================");
}
void end()
{
    printf("\n\n\t\t\t===================================================================================================================");
    printf("\n\t\t\t= |||||| ||  ||   ||   ||   || ||  ||   ||  || |||||| ||  ||      |||   ||||   ||      ||   ||  || |||||| ||   || =");
    printf("\n\t\t\t=   ||   ||  || ||  || |||| || || ||    ||  || ||  || ||  ||    || ||   ||  || ||    ||  || ||  ||   ||   |||| || =");
    printf("\n\t\t\t=   ||   |||||| |||||| || |||| ||||      ||||  ||  || ||  ||   ||  ||   ||||   ||    ||||||  ||||    ||   || |||| =");
    printf("\n\t\t\t=   ||   ||  || ||  || ||  ||| || ||      ||   ||  || ||  ||   ||||||   ||     ||    ||  ||   ||     ||   ||  ||| =");
    printf("\n\t\t\t=   ||   ||  || ||  || ||   || ||  ||     ||   |||||| ||||||       ||   ||     ||||| ||  ||   ||   |||||| ||   || =");
    printf("\n\t\t\t===================================================================================================================");
}
void player()
{
    printf("\t\t\t\t\t\t\t\t||==========================||");
    printf("\n\t\t\t\t\t\t\t\t          NOW PLAYING       ");
    printf("\n\t\t\t\t\t\t\t\t||==========================||");
}

char instruct()
{
    char anykey;
    printf("\n\n\t\t\t\t\t\t  REMEMBER, THIS GAME IS ONLY INTENDED FOR A MIDTERM PROJECT,");
    printf("\n\t\t\t\t ANYTHING THAT YOU MIGHT ENCOUNTER THAT'S PLAGIARIZED ARE ONLY INTENDED FOR EDUCATIONAL PURPOSES.");
    printf("\n\t\t\t\t   DON'T SHARE THIS TO THE PUBLIC, ELSE THE MAIN CREATOR OF THIS GAME WILL BE HELD ACCOUNTABLE");
    printf("\n\n\t\t\t\t\t\t\t\t     © ALL RIGHTS RESERVED ");
    printf("\n\n\t\t\t\t\t\t\t\t  PRESS ANY KEY TO CONTINUE: ");
    scanf("%s", &anykey);
    system("clear");
}

