#include <iostream>
#include <vector>
using namespace std;

int main() {
    int NUM_ELEMENTS = 6, i, newJersey, newRating, removeJersey, newRatingOldPlayer, oldJerseyNumber, aboveRating;
    char menuOption;
    vector <int> jerseyNumber (NUM_ELEMENTS);
    vector <int> ratingNumber (NUM_ELEMENTS);

    for (i = 1; i < NUM_ELEMENTS; ++i){
        cout << "Enter player " << i << "'s" << " jersey number:" << endl;
        cin >> jerseyNumber.at(i);
        cout << "Enter player " << i << "'s" << " rating:" << endl;
        cin >> ratingNumber.at(i);
        cout << "\n\n";
    }

    cout << "ROSTER" << endl;
    for (i = 1; i < NUM_ELEMENTS ; ++i){
        cout << "Player " << i << " -- Jersey number: " << jerseyNumber.at(i) << ", Rating: " << ratingNumber.at(i) << endl;
    }
    cout << "\n\n";

    cout << "MENU" << endl;
    cout << "a - Add player" << endl;
    cout << "d - Remove player" << endl;
    cout << "u - Update player rating" << endl;
    cout << "r - Output players above a rating" << endl;
    cout << "o - Output roster" << endl;
    cout << "q - Quit" << endl;
    cout << endl;

    while(menuOption != 'q'){
        cout << "Choose an option:" << endl;
        cin >> menuOption;
        switch(menuOption){ //output roster
            case 'o':
                cout << "ROSTER" << endl;
                for (i = 1; i < jerseyNumber.size() ; ++i){
                        cout << "Player " << i << " -- Jersey number: " << jerseyNumber.at(i) << ", Rating: " << ratingNumber.at(i) << endl;
                }
                cout << "\n\n";
                break;

            case 'a': //add player
                cout << "Enter a new player's jersey number:" << endl;
                cin >> newJersey;
                jerseyNumber.push_back(newJersey);
                cout << "Enter the player's rating:" << endl;
                cin >> newRating;
                ratingNumber.push_back(newRating);
                cout << endl;
                break;

            case 'd': //remove player given jersey number
                cout << "Enter a jersey number:" << endl;
                cin >> removeJersey;
                for (i = 0; i < jerseyNumber.size(); ++i){
                    if (removeJersey == jerseyNumber.at(i)){ //if matches, then delete
                         jerseyNumber.erase(jerseyNumber.begin() + i);
                         ratingNumber.erase(ratingNumber.begin() + i);
                         break;
                    }
                }
                break;

            case 'u': //update old player rating
                cout << "Enter a jersey number:" << endl;
                cin >> oldJerseyNumber;

                for (i = 0; i < jerseyNumber.size(); ++i){
                    if (oldJerseyNumber == jerseyNumber.at(i)){ //checking that the jersey number is same
                        cout << "Enter a new rating for player:" << endl;
                        cin >> newRatingOldPlayer;
                        ratingNumber.at(i) = newRatingOldPlayer; //replace with the new rating
                        break;

                    }
                }
                break;
            case 'r': //above rating
                cout << "Enter a rating:" << endl;
                cin >> aboveRating;
                cout << "\n\n";
                cout << "ABOVE " << aboveRating << endl;

                for (i= 0; i < jerseyNumber.size(); ++i){
                        if (ratingNumber.at(i) > aboveRating){
                          cout << "Player " << i << " -- Jersey number: " << jerseyNumber.at(i) << ", Rating: " << ratingNumber.at(i) << endl;
                        }

                }
                break;





            case 'q': //quit
                return 0;
                break;








        }
    }





   return 0;
}
