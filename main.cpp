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
void DynamicArray()
{
    int n;

    cout << "Please enter the amount of elements that should be in the array: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Please enter the " << i + 1 << ", element: ";
        cin >> arr[i];
    }
    cout << "The entered elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << " ";
    }
    delete[] arr;
}
int main()
{
    char uchoice;
    cout << "Choose a task (1-9 / type h for help): ";
    cin >> uchoice;

    if (uchoice == 'h')
    {
        cout << "---------- \n";
        cout << "Task 1: Pointers to Integers: A function that declares a pointer to an integer and uses that pointer to change the value of the number. \n";
        cout << "---------- \n";
        cout << "Task 1: Pointers to Char: A function that declares a pointer to an char and uses that pointer to change the value of the char. ex.: reverses the text. \n";
        cout << "---------- \n";
        cout << "Task 1: Dynamic Array: A function that creates a pointer and uses that pointer to create an dynamic array. \n";
        cout << "---------- \n";
        cout << "More features coming soon. \n";
        cout << "---------- \n";
    }
    else if (uchoice == '1') // Call func. PointersToInt
    {
        PointersToInt();
    }
    else if (uchoice == '2')
    {
        PointersToChar(); // Call func. PointersToChar
    }
    else if (uchoice == '3')
    {
        DynamicArray();
    }
}