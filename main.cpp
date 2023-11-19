#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <conio.h> 

using namespace std;

//A function that returns a random number between 1 and 100
int random_num(){
    //This resets the random number so that we won't get the same number over and over again
    srand(time(NULL));
    //Math Cool
    return 1+ (rand() % 100);
}

}

int main(int argc, const char * argv[]) {
    //Intro to the game with 3 sec delays
    cout<<"\nHello and welcome to the Number Guessing Game Thingy I made all by myself!\n";
    usleep(3000000);
    cout<<"\nToday you will guess a number between 1 and 100.\n";
    usleep(3000000);
    cout<<"\nTry to get the lowest amount of attempts to guess the number.\n";
    usleep(3000000);
    cout<<"\nAlready then, LETS GET STARTED SHALL WE!\n";
    usleep(2000000);
    
    //Computer picking a random number
    cout << "\nLoading ";
    for (int i = 0; i < 3; i++){
        getch(); 
        cout << ". "
    }
    
    cout << "\n\nThe computer has got one!";

    clrscr(); 
    return 0;
}
