#include <iostream>
using namespace std;
int choose, other_dollor;
bool valid_choice, case_choice;

void under_100_dollor(int dollor)
{
    do
    {
        cout << "Enter your choice (1-3): " << endl;
        cin >> choose;

        valid_choice = (choose >= 1 && choose <= 3);

        if (!valid_choice)
        {
            cout << "Invalid choice. Please enter a valid choice (1-3). again Choose your choice to an buy electrical items:" << endl;
        }

    } while (!valid_choice);
    switch (choose)
    {
    case 1:
        do
        {
            cout << "Give money to buy any kind of fan: " << endl;
            cin >> other_dollor;

            case_choice = (other_dollor > 20 && other_dollor < 100 && other_dollor > 100 && other_dollor < 120);

            if (!other_dollor)
            {
                cout << "Invalid choice. Please enter a valid choice (1-2). again Choose your choice to an buy any kind of fan :" << endl;
            }

        } while (!other_dollor);

        if (other_dollor > 20 && other_dollor < 100)
        {
            cout << "ceiling fan will appear" << endl;
        }
        else if (other_dollor > 100 && other_dollor < 120)
        {
            cout << "table fan will appear" << endl;
        }
        else
        {
            cout << " invalid option selected " << endl;
        }
        break;
    case 2:
        do
        {
            cout << "Give money to buy any kind of bulb: " << endl;
            cin >> other_dollor;
            
            case_choice = (other_dollor > 100 && other_dollor < 120 && other_dollor > 50 && other_dollor < 70);

            if (!other_dollor)
            {
                cout << "Invalid choice. Please enter a valid choice (1-2). again Choose your choice to an buy any kind of bulb :" << endl;
            }

        } while (!other_dollor);
        if (other_dollor > 100 && other_dollor < 120)
        {
            cout << "Colourful led bulb will appear" << endl;
        }
        else if (other_dollor > 50 && other_dollor < 70)
        {
            cout << "simple led bulb will appear" << endl;
        }
        else
        {
            cout << "invalid option selected" << endl;
        }

        break;
    case 3:
    do
    {
        cout << "Give money to buy any kind of laptop: " << endl;
        cin >> other_dollor;
        
        case_choice = (other_dollor == 25 && other_dollor == 15);

        if (!other_dollor)
        {
            cout << "Invalid choice. Please enter a valid choice (1-2). again Choose your choice to an buy any kind of laptop :" << endl;
        }

    } while (!other_dollor);
        if (other_dollor == 25)
        {
            cout << "acer laptop will appear" << endl;
        }
        else if (other_dollor == 15)
        {
            cout << "artix 30 laptop will appear" << endl;
        }
        else
        {
            cout << "no laptop" << endl;
        }

        break;
    default:
        cout << " invalid statements please try again " << endl;
    }
}
void above_100_dollor(int dollor)
{
    cout << "give money to see the bird" << endl;
    cin >> choose;
    switch (choose)
    {
    case 4:
        cout << " peacock will appear" << endl;
        break;
    case 5:
        cout << " parrot will appear" << endl;
        break;
    case 6:
        cout << " hen will appear" << endl;

        break;
    default:
        cout << "you choosed invalid statements please try again " << endl;
    }
}
int main()
{
    int dollor;
    cout << "enter dollor to buy electric things and see birds :" << endl;
    cin >> dollor;

    if (dollor < 100)
    {
        under_100_dollor(dollor);
    }
    else
    {
        above_100_dollor(dollor);
    }

    return 0;
}