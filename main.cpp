#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

using namespace std;

//A function that returns a random number between 1 and 100
int random_num(){
    //This resets the random number so that we won't get the same number over and over again
    srand(time(NULL));
    //Math Cool
    return 1+ (rand() % 100);
}

void yapping(){
    //Intro to the game with 3 sec delays and reseting the console 
    cout << "\n\n";
    system("clear"); 
    cout<<"\nHello and welcome to the Number Guessing Game Thingy I made all by myself!\n";
    usleep(3000000);
    system("clear"); 
    cout<<"\nToday you will guess a number between 1 and 100.\n";
    usleep(3000000);
    system("clear"); 
    cout<<"\nTry to get the lowest amount of attempts to guess the number.\n";
    usleep(3000000);
    system("clear");
    cout<<"\nAlready then, LETS GET STARTED SHALL WE!\n";
    usleep(3000000);
    system("clear"); 

    // Computer choosing number
    cout << "\nComputer choosing number\n";
    usleep(500000);
    system("clear"); 
    cout << "\nComputer choosing number .\n";
    usleep(500000);
    system("clear"); 
    cout << "\nComputer choosing number . .\n";
    usleep(500000);
    system("clear"); 
    cout << "\nComputer choosing number . . .\n";
    usleep(500000);
    system("clear"); 
    cout << "\nComputer has choosen a number!\n";
    usleep(2000000);
    system("clear"); 
}

void win(int secret_num, int attempts, int guesses[9999]){
    system("clear");
    cout << "\nYOU'VE GUESSED THE NUMBER!!!\n";
    usleep(2000000);
    cout << "\nThe secret number was " << secret_num << ".\n";
    usleep(2000000);
    cout << "\nIt took you " << attempts << " attempts to guess the number.\n";
    usleep(2000000);
    cout << "\nThe numbers you guessed were: \n";
    for (int i = 0; i < attempts; i++){
        usleep(500000);
        cout << guesses[i] << endl;
        continue;
    }
}

int difficulty(){
    system("clear");
    cout << "\nChoose a difficultly (Easy:0, Medium:1, Hard:2)\n":
}

int main() {
    //Prepare important variables
    int secret_num = random_num();
    int attempts;
    int guess;
    int guesses[9999];

    yapping();

    attempts++;
    cout << "\nGuess a number: ";
    cin >> guess;
    guesses[attempts-1] = guess;
    do{
        if (guess > secret_num-2 && guess < secret_num || guess < secret_num+2 && guess > secret_num){
            system("clear"); 
            attempts++;
            cout << "\nVERY WARM!\n";
            usleep(500000);
            cout << "\nGuess another number: ";
            cin >> guess;
            guesses[attempts-1] = guess;
            continue;
        } else if (guess > secret_num-4 && guess < secret_num || guess < secret_num+4 && guess > secret_num){
            system("clear"); 
            attempts++;
            cout << "\nWarm\n";
            usleep(500000);
            cout << "\nGuess another number: ";
            cin >> guess;
            guesses[attempts-1] = guess;
            continue;
        } else if (guess > secret_num-7 && guess < secret_num || guess < secret_num+7 && guess > secret_num){
            system("clear"); 
            attempts++;
            cout << "\nCold\n";
            usleep(500000);
            cout << "\nGuess another number: ";
            cin >> guess;
            guesses[attempts-1] = guess;
            continue;
        } else {
            system("clear"); 
            attempts++;   
            cout << "\nVery Cold\n";
            usleep(500000);
            cout << "\nGuess another number: ";
            cin >> guess;
            guesses[attempts-1] = guess;
            continue;
        }
    } while (guess != secret_num);
    
    win(secret_num, attempts, guesses);

    return 0;
}
