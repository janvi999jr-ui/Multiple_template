// Template with multiple parameters allows us to create a class or function that can work with multiple data types. In this code, we define a template class named Pair that can hold two different types of data specified by the template parameters T1 and T2. The class has member variables to store the first and second elements of the pair, along with getter functions to retrieve their values. In the main function, we create instances of the Pair class with different data types and display their values.
// This code demonstrates the usage of multiple template parameters in C++. It defines a template class named Pair that can work with two different data types specified by the template parameters T1 and T2. The class has member variables to store the first and second elements of the pair, along with getter functions to retrieve their values. In the main function, we create instances of the Pair class with different data types and display their values.

#include <iostream>
using namespace std;

template <class T1, class T2> // Define a template class named Pair that can work with two different data types specified by the template parameters T1 and T2. This allows us to create pairs of different types, such as int and float, or even user-defined types.
class Pair
{
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {} // Initializer list is used to initialize the member variables first and second with the values passed as parameters to the constructor.
    T1 getFirst() { return first; }           // Getter function to retrieve the value of the first element of the pair. It returns the value of the member variable first, which is of type T1.
    T2 getSecond() { return second; }         // Getter function to retrieve the value of the second element of the pair. It returns the value of the member variable second, which is of type T2.
};

int main()
{
    Pair<int, float> p1(10, 3.14);                                                // Create a pair of an integer and a float using the Pair template class
    cout << "First: " << p1.getFirst() << ", Second: " << p1.getSecond() << endl; // Display the values of the first and second elements of the pair

    Pair<string, int> p2("Hello", 42);                                            // Create a pair of a string and an integer using the Pair template class
    cout << "First: " << p2.getFirst() << ", Second: " << p2.getSecond() << endl; // Display the values of the first and second elements of the pair

    return 0;
}