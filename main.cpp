#include <iostream> // basic functions like cout

using namespace std; // namespace standard

void PointersToInt() // Point to Integer function
{
    int number;
    cout << "Enter Integer: "; // Ask for User Input
    cin >> number;
    int *numberpointer = &number;
    cout << "Value of the number before: " << *numberpointer << "\n"; // Output old integer
    *numberpointer = 7;                                               // Changing the value
    cout << "Value of the number after: " << *numberpointer << "\n";  // Output new integer
}
void PointersToChar() // Point to Char function
{
    const char *text = "Test";
    const char *charpointer = text;
    cout << "String backwards: "; // Output
    while (*charpointer != '\0')  // Reversing char
    {
        charpointer++;
    }
    while (charpointer != text)
    {
        charpointer--;
        cout << *charpointer; // Output reversed Char
    }
    cout << "\n";
}
void DynamicArray() // Array function
{
    int n; // Variable size integer

    cout << "Please enter the amount of elements that should be in the array: "; // Ask for User Input
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
    cout << "Choose a task (1-9 / type h for help): "; // Ask for User Input
    cin >> uchoice;

    if (uchoice == 'h') // help function
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
        PointersToInt(); // goto func.
    }
    else if (uchoice == '2') // Call func. PointersToChar
    {
        PointersToChar(); // goto func.
    }
    else if (uchoice == '3') // Call func. DynamicArray
    {
        DynamicArray(); // goto func.
    }
}