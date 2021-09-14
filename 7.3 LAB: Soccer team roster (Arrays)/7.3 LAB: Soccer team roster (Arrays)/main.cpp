//
//  main.cpp
//  7.3 LAB: Soccer team roster (Arrays)
//
/*
 This program will store roster and rating information for a soccer team. Coaches rate players during tryouts to ensure a balanced team. Use a struct named Player to store the jersey number and rating for a single player. Use an array of struct to store the data for the entire team. Use a global named constant to store the size of the array (and use it in your program).

 (1) Prompt the user to input five pairs of numbers: A player's jersey number (0 - 99) and the player's rating (1 - 9). Then output the data (i.e., output the roster).

 Ex:
 Enter player 1's jersey number:
 84
 Enter player 1's rating:
 7

 Enter player 2's jersey number:
 23
 Enter player 2's rating:
 4

 Enter player 3's jersey number:
 4
 Enter player 3's rating:
 5

 Enter player 4's jersey number:
 30
 Enter player 4's rating:
 2

 Enter player 5's jersey number:
 66
 Enter player 5's rating:
 9

 ROSTER
 Player 1 -- Jersey number: 84, Rating: 7
 Player 2 -- Jersey number: 23, Rating: 4
 ...
 Your program must define and use the following function:

 void outputRoster (Player t[]) to display the complete roster to the screen.

 (2) Implement a menu of options for a user to modify the roster. Each option is represented by a single character. The program initially outputs the menu, and outputs the menu after a user chooses an option. The program ends when the user chooses the option to Quit.

 Ex:

 MENU
 u - Update player rating
 r - Output players above a rating
 o - Output roster
 q - Quit

 Choose an option:
 (3) Implement the "Output roster" menu option (call the function)

 Ex:

 ROSTER
 Player 1 -- Jersey number: 84, Rating: 7
 Player 2 -- Jersey number: 23, Rating: 4
 ...
 (4) Implement the "Update player rating" menu option. Prompt the user for a player's jersey number. Prompt again for a new rating for the player, and then change that player's rating.

 Ex:

 Enter a jersey number:
 23
 Enter a new rating for player:
 6
 Your program must define and use the following function:

 void updateRating (Player t[], int playerJersy, int playerRating) to change the player's rating.

 (8) Implement the "Output players above a rating" menu option. Prompt the user for a rating. Print the jersey number and rating for all players with ratings above the entered value.

 Ex:

 Enter a rating:
 5

 ABOVE 5
 Player 1 -- Jersey number: 84, Rating: 7
 ...
 Your program must define and use the following function:

 void aboveRating (Player t[], int playerRating) to output the players above the given rating.
 */

#include <iostream>
using namespace std;

struct Player
{
    int jerseyNumber, ratingSingle;
};


void outputRoster (Player t[]){
    cout << "ROSTER" << endl;
    for(int i = 1; i <= 5; i++){
        cout << "Player " << i << " -- Jersey number: " << t[i].jerseyNumber << ", Rating: " << t[i].ratingSingle << endl;
    }
}

void updateRating(Player t[], int playerJersy, int playerRating){
    cout << "Enter a jersey number:"<< endl;
    cin >> playerJersy;
    cout << "Enter a new rating for player:" << endl;
    cin >> playerRating;
    for(int i = 1; i <= 5; i++){
    if(playerJersy == t[i].jerseyNumber){
        t[i].ratingSingle = playerRating;
        cout << "Updated!";
        
    }
  }
}
 
void aboveRating(Player t[], int playerRating){
    cout << "Enter a rating:"<< endl;
    cin >> playerRating;
    cout << endl << "ABOVE " << playerRating <<endl;
    for(int i = 1; i <= 5; i++){
        if(playerRating < t[i].ratingSingle){
            cout << "player " << i << "--" << "Jersey number: "<< t[i].jerseyNumber <<", "<< "Rating: "<<t[i].ratingSingle;
        }
    }
}



int main(){
    Player players[11];
    char choice;
    int playerJersey, playerRating;
    
    // enter 5 jersey# and ratings
    for(int i = 0; i < 5; i++){
        cout << "Enter player " << i+1 <<"'s jersey number:" << endl;
        cin >> players[i+1].jerseyNumber;
        cout << "Enter player " << i+1 << "'s rating:" << endl;
        cin >> players[i+1].ratingSingle;
        cout << endl;
        }
    //call outputRoaster to display complete roster
    outputRoster(players);

    do
    {
        cout << endl << "MENU"<< endl
        << "u - Update player rating\n"
        << "r - Output players above a rating\n"
        << "o - Output roster\n"
        << "q - Quit\n"<< endl;
        cout << "Choose an option:"<< endl;
        cin >> choice;

        switch (choice)
        {
            case 'u':
                updateRating(players, playerJersey, playerRating);
                break;
                
            case 'r':
                cout<<"case r";
                aboveRating(players, playerRating);
                break;
                
            case 'o':
                outputRoster(players);
                break;
                
            case 'q':
                exit(0);
                cout << endl;
   
            default:
               cout << "Choose an option:"<<endl;
               cin >> choice;
        }

    }while (cin>>choice);
        
    return 0;

    }
