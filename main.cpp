#include <iostream>
#include"Player.h"
#include<algorithm>

using namespace std;

//EXEMPLE
//



int main()
{
    /*
    string input;
    while (input != "exit")
    {
        cout << "Input Command: ";
        cin >> input;
        cout << input << endl;
    }*/

    Player* player = new Player();

    for_each(
             player->GettrackList()->begin(),
             player->GettrackList()->end(),
             [](string trackName)  //FUNCTION LAMBDA  -->   peut remplacer par function normale
             {
                 cout << trackName << endl;
             }
             );



    return 0;
}
