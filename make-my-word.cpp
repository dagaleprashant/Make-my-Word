#include <stdio.h>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int found = 0;

int wordmatch(char a[20][10], int rows, int cols, char solvedword[])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (strcmp (&a[i][j] , solvedword) == 0)
            found++;
        }
    }
    return found;
}


int main()
{
    int n;
    char userchoice, word1[10], userword[10],input, word2[10],word3[20],words[20][15]= {"PIZZA","JOKER","VAULT","SIMPLE","HIKER",
                                                                                        "TRAFFIC","BROTHER","TAURINE","FOLIATE","FORWARD",
                                                                                        "OBNOXIOUS","BUMFUZZLE","EQUIVOQUE","PIZZICATO","LABYRINTH"};
    char a,b,c;
    cout<<"Okay Let's Play"<<endl;
    cout<<"M"<<endl;
    sleep(1);
    cout<<"A"<<endl;
    sleep(1);
    cout<<"K"<<endl;
    sleep(1);
    cout<<"E"<<endl;
    sleep(1);
    cout<<"M"<<endl;
    sleep(1);
    cout<<"Y"<<endl;
    sleep(1);
    cout<<"W"<<endl;sleep(1);
    cout<<"O"<<endl;
    sleep(1);
    cout<<"R"<<endl;
    sleep(1);
    cout<<"D"<<endl;
    sleep(1);
    cout<<endl;
    cout<<"Rules"<<endl;
    do
    {
        cout<<"1.You are provided with one word"<<endl;
        cout<<"2.Unjumble the word and write the correct word"<<endl;
        cout<<"3.Enter the correct word in Capital letters"<<endl;
        cout<<"4. You have only one chance to answer"<<endl;
        cout<<"5.Select Level of difficulty"<<endl;
        cout<<"a. Easy"<<endl;
        cout<<"b. Medium"<<endl;
        cout<<"c. Difficult"<<endl;
        cin>>userchoice;
    
        if (userchoice == 'a' || userchoice == 'A')
        {
            char A[][10]={"APIZZ", "REKOJ", "TUAVL", "EMIPSL", "KERHI", "EOKJR" , "ZIPAP", "TALVU", "HKRIE", "SLEPIM"};
            int r = 0;
            srand(unsigned (time (0)));
            r = rand() % 11;
            strcpy(word1, A[r]);
            cout<<"Unjumble the word"<<endl;
            cout<<word1<<endl;
            cin>>userword;
            int n = wordmatch(words,20,10,userword);
            if (n == 1)
            {
                cout<<"YOU WIN, CONGRATULATIONS!!";
            }
            else
            {
                cout<<"SORRY, YOU LOSE";
            }
        }
        
        else if (userchoice == 'b' || userchoice == 'B')
        {
            char B[][10]={"RFICFAT", "OREBRTH", "AUTREIN", "LTEIAFO", "DRAWROF", "TFCARFI", "HTORERB", "AEIURNT", "ORAWFRD", "ATEOLIF"};
            int r1 = 0;
            srand(unsigned (time (0)));
            r1 = rand() % 11;
            strcpy(word2,B[r1]);
            cout<<word2<<endl;
            cout<<"Unjumble the word"<<endl;
            cin>>userword;
            int n = wordmatch(words,20,10,userword);
            if (n == 1)
            {
                cout<<"YOU WIN, CONGRATULATIONS!!";
            }
            else
            {
                cout<<"SORRY, YOU LOSE";
            }

        }
        
        else if (userchoice == 'c' || userchoice == 'C')
        {
            char C[][20]={"OOOIUXNBNS", "ONBOXUSIO", "BUUZZLEMF", "LEFZUZUMB",  "EEQQUUOIV", "EQUQUEIVO", "BYRNTIHAL", "RTHINABLY", "PIZZAIOTC", "ZZIIPACOT"};
            int r2 = 0;
            srand(unsigned(time (0)));
            r2 = rand() % 11;
            strcpy(word3,C[r2]);
            cout<<word3<<endl;
            cout<<"Unjumble the word"<<endl;
            cin>>userword;
            int n = wordmatch(words,20,10,userword);
            if (n == 1)
            {
                cout<<"YOU WIN, CONGRATULATIONS!!";
            }
            else
            {
                cout<<"SORRY, YOU LOSE";
            }

        }
        else
        {
            cout<<"Wrong choice\n";
        }
        cout<<"Want to play more"<<endl;
        cout<<"Press y to contiue or n to quit"<<endl;
        cin>>input;
    } while (input == 'y' || input == 'Y');
    return 0;
    
}

