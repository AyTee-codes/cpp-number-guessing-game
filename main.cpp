#include<iostream>
#include<ctime>
using namespace std;

int main(){

    int guess;
    int tries;
    int num;
    char playAgain;
    srand(time(0));
    do{
        tries =0;
    
    num = rand() % 100 + 1;

    cout<<"============ NUMBER GUESSING GAME ============\n";

    do{
        cout<<"Enter a number between 1 - 100: ";
        cin>> guess;
        
        
        if (guess < 1 || guess > 100){
            cout<<"Invalid input! Enter between 1 and 100."<<endl;
            continue;
        }
        tries++;
        if (guess > num){
            cout<<"Too High! Try Again!"<<endl;
            
        }else if (guess<num){
            cout<<"Too low! Try Again!"<<endl;
            
        }else {
            cout<<"Correct! # No. of Tries "<< tries <<endl;
        }
    }while(guess !=num);

    cout<<"Do you want to play again? (Y/N): ";
    cin>> playAgain;
} while(playAgain =='Y'|| playAgain =='y');


    cout<<"=========== Thanks for Playing ===========";
    return 0;
}
