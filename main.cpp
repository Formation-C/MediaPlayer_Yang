#include <iostream>
#include"Player.h"
#include<algorithm>

using namespace std;

//EXEMPLE
//



int main()
{
    Player* player = new Player();

    string input;
    while (input != "exit")
    {
        cout << "Input Command: ";
        cin >> input;


        try:
        {

            if (input == "play")
            {
                player->Getstate()->onPlay();
            }
            else if (input == "stop")
            {
                player->Getstate()->onPlay();
            }else if (input == "exit")
            {
                cout << "Unknow Command" << endl;
            }

        }
        catch(const char* errorMsg)  //CATCH ERROR WHEN THERE IS PROBLEM
        {
            cout << "ERROR: " << errorMsg << endl;
        };


/*
        switch (input)
        {
        case "play":
            player->Getstate()->onPlay();
            break;

        case "stop":
            player->Getstate()->onPlay();
            break;

        default:
            cout << "Unknow Command" << endl;
            break;

*/




    }



/*
    for_each(
             player->GettrackList()->begin(),
             player->GettrackList()->end(),
             [](string trackName)  //FUNCTION LAMBDA  -->   peut remplacer par function normale
             {
                 cout << trackName << endl;
             }
             );


*/
    return 0;
}
