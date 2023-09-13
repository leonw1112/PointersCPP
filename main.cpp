#include <iostream>

using namespace std;

void PointersToInt()
{
    int number;
    cout << "Zahl eingeben: ";
    cin >> number;
    int *numberpointer = &number;
    cout << "Value of the number before: " << *numberpointer << "\n";
    *numberpointer = 7;
    cout << "Value of the number after: " << *numberpointer << "\n";
}
void PointersToChar()
{
    const char *text = "Test";
    const char *charpointer = text;
    cout << "String backwards: ";
    while (*charpointer != '\0')
    {
        charpointer++;
    }
    while (charpointer != text)
    {
        charpointer--;
        cout << *charpointer;
    }
    cout << "\n";
}
int main()
{
    char uchoice;
    cout << "Choose a task (1-9 / type h for help): ";
    cin >> uchoice;

    if (uchoice == 'h')
    {
        cout << "Task 1: Pointers to Integers: Write a program that declares a pointer to an integer and uses that pointer to change the value of the number. \n";
    }
    else if (uchoice == '1') // Call func. PointersToInt
    {
        PointersToInt();
    }
    else if (uchoice == '2')
    {
        PointersToChar(); // Call func. PointersToChar
    }
}