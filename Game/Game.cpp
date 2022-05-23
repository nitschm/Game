#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool noDestination = true;
    int menuChoice;
    int costOfBread = 5;
    int carryLoad = 5;
    int maxBreadcost = carryLoad * costOfBread;
    int amountOfBread;
    int breadPurchased;
    int costOfPurchase;
    int location1;
    char torch;
    char water;
    char warmClothing;
    string username;


    cout << "Welcome to my game.\n";

    cout << "\n";

    /*
    This section is the intro where the user will input their desired username. Afterwards they will view the
    menu and make a decision as to what they want to do next
    */
    cout << "Please enter your name: ";
    getline(cin, username);
    cout << "\n";
    cout << "Greetings " << username << "\n\n";
    cout << "Please select one of the options by typing the corresponding number.\n\n";
    cout << "      MENU\n";
    cout << "1. Play game\n";
    cout << "2. Instructions\n";

    //This variable receives the input from the user on what they want to do from the menu
    cin >> menuChoice;

    //This section determines the output depending on what the user put in for menuChoice
    switch (menuChoice)
    {
    case 1:
        cout << "\n";
        cout << "Enjoy the game!\n";
        break;

    case 2:
        cout << "\n";
        cout << "When making decisions, the program will indicate what you must type to make a decision in parentheses.\n";
        cout << "Type the number or letter associated with the decision to indicate what your decision is.\n";
        cout << "The game will now begin!\n";
        break;

    default:
        cout << "\n";
        cout << "You did not choose one of the options. The game will now begin.\n";
    }

    cout << "\n";

    //This section indicates how much bread costs, how many loaves you can carry and will ask how many the user would like to buy.

    cout << "You are getting food for your adventure and figuring out the cost.\n";
    cout << "The cost of bread is $" << costOfBread << ".\n";
    cout << "You can carry " << carryLoad << " loaves of bread.\n";
    cout << "How much bread would you like to buy? (1-5)\n";

    //This is the input for how much bread the user wants.
    cin >> amountOfBread;

    //This section determines which response will trigger depending on the user's input in amountOfBread
    if (amountOfBread >= 1 && amountOfBread <= 5)
    {
        breadPurchased = amountOfBread;
        costOfPurchase = costOfBread * amountOfBread;
        cout << "\n";
        cout << "You bought " << breadPurchased << " loaves for $" << costOfPurchase << ". You are ready to begin your quest!\n";
    }
    else if (amountOfBread > 5)
    {
        cout << "\n";
        cout << "You bought too much bread to carry! You return the excess bread and hold onto 5 loaves.\n";
    }
    else
    {
        cout << "\n";
        cout << "You bought no bread. Looks like someone thinks they're tough.\n";
    }

    cout << "\n";

    /*
    This section is where you decide to start your adventure. If you do not choose one of the options, it will result in the flag
    taking over and saying you got drunk at the tavern. Otherwise, after going through the if statements, it will acknowledge that
    you are headed to wherever you decided to go.
    */

    cout << "Where would you like to start your journey? In the Lost Woods(1), the Scorched Desert(2), or the Glacial Mountains(3)?\n";
    cin >> location1;

    cout << "\n";

    /*
    This section shows what happens after the user decides where to go. It also makes sure the user has what they need for where they're
    going.
    */
    if (location1 == 1)
    {
        cout << "Did you bring a torch?(y/n)\n";
        cin >> torch;

        cout << "\n";

        torch == 'y' ? cout << "You are ready to set off for the Lost Woods!\n" :
            cout << "You need to get a torch first. Now that you have a torch, you are prepared.\n";
    }
    else if (location1 == 2)
    {
        cout << "Did you bring enough water (y/n)?\n";
        cin >> water;

        water == 'y' ? cout << "You are ready to set off for the Scorched Desert!\n" :
            cout << "You need to get some water first.\nNow that you got some water, you are prepared.\n";
    }
    else if (location1 == 3)
    {
        cout << "Did you bring warm clothing (y/n)?\n";
        cin >> warmClothing;

        warmClothing == 'y' ? cout << "You are ready to set off for the Glacial Mountains!\n" :
            cout << "You need to get warm clothes first.\nNow that you got some warm clothes, you are prepared.\n";
    }
    else
        noDestination = false;

    /*
    The if statement ends here. After this is the aforementioned flag that will result if the user does not input a number
    that corresponds with one of the locations.
    */

    if (noDestination)
    {
        cout << "\n";
        cout << "You leave the city and begin your journey.\n";
    }
    else
        cout << "You have not chosen where to go. You decide to get drunk at the tavern instead.\n";

    getchar();
}