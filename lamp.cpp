#include <iostream>
using namespace std;

class Lamp
{
    public:
    string onLamp;
    string offLamp;
};

int main()

{
    string on;
    string off;
    int colour;

    Lamp turn;

    turn.onLamp = on;
    turn.offLamp = off;

    cout<< "Please choose 'on' to turn on or 'off' to turn off the lamp." <<endl;

    cin >> on;

    if (on == "on") {

        cout<< "Lamp is on!"<<endl;

        cout<< "Now you can choose the light colour:"<<endl;
        cout<< "1 - red, 2 - green, 3 - white, 4 - blue"<<endl;

        cin >> colour;

        switch (colour) {
        case 1:
            cout<< "red";
            break;
        case 2:
            cout<< "green";
            break;
        case 3:
            cout<< "white";
            break;
        case 4:
            cout<< "blue";
            break; }
    }

    else {

        cout<< "Lamp is off!"<<endl;
    }

    return 0;
}
