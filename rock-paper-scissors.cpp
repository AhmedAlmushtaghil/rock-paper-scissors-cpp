#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int state = 0, loop = 1, random;
    const char options[3] = {'r', 'p', 's'};
    char player, again;

    cout << "Welcome to ROCK PAPER SCISSORS Game!!!" << endl;

    while (loop)
    {
        switch (state)
        {
        case 0:
        {
            cout << "What do you choose? (r / p / s)" << endl;
            cin >> player;
            random = rand() % 3;
            state = 1;
            break;
        }

        case 1:
        {
            if (player != 'r' && player != 'p' && player != 's')
            {
                cout << "Invalid input!" << endl;
                state = 0;
            }
            else
            {
                state = 2;
            }
            break;
        }

        case 2:
        {
            cout << "Player: " << player << endl;
            cout << "CPU: " << options[random] << endl;
            state = 3;
            break;
        }

        case 3:
        {
            int diff = abs(int(player) - int(options[random]));
            if (diff == 0)
            {
                cout << "It's a TIE!" << endl;
            }
            else if (player == 'r' && diff == 1)
            {
                cout << "You WIN!" << endl;
            }
            else if (player == 'p' && diff == 2)
            {
                cout << "You WIN!" << endl;
            }
            else if (player == 's' && diff == 3)
            {
                cout << "You WIN!" << endl;
            }
            else
            {
                cout << "You LOSE!" << endl;
            }
            cout << "Your game has ended!" << endl;
            state = 4;
            break;
        }

        case 4:
        {
            cout << "Do you want to play again? (y / n)" << endl;
            cin >> again;
            if (again != 'y' && again != 'n')
            {
                cout << "Invalid input!" << endl;
                state = 4;
            }
            else if (again == 'y')
            {
                state = 0;
            }
            else
            {
                loop = 0;
            }
        }
        }
    }

    return 0;
}