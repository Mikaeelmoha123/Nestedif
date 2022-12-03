#include <iostream>

using namespace std;

int main()
{
    string Name, Interests, soccer, art;
    cout << "Enter full name: ";
    getline(cin, Name);
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (age >= 4 && age <= 10)
    {

        cout << Name + " is Admitted to school \n";
        cout << "Enter your interest ";
        cin >> Interests;
        if (Interests == "soccer")
        {
            cout << "Assign to the soccerplay group" + Name;
        }
        else if (Interests == "art")
        {
            cout << "Assign to the art play group" + Name;
        }
    }
    else if (age < 4 && age > 10)
    {
        cout << "Age input is invalid";
    }
}