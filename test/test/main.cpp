//
// Bubble Sort:
// Uses a bubble sort to arrange an
// array of integers in descending order.
//
// Matthew Tso
// CIS 22B: Lab 8.3, Exercise 1 and 2
//

#include<iostream>
using namespace std;

// Function prototypes
void bubbleSortAscending(int array[], int elems);
void bubbleSortDescending(int array[], int elems);
void displayArray(int[], int);

/// Constant size of the array.
const int SIZE = 8;

int main()
{
    int values[SIZE] = { 23, 0, 45, -3, -78, 1, -1, 9 };
    
    cout << "The values before the bubble sort is performed are:" << endl;
    displayArray(values, SIZE);
    
    bubbleSortDescending(values, SIZE);
    
    cout << "The values after the bubble sort is performed are:" << endl;
    displayArray(values, SIZE);
    
    return 0;
}

/**
 * Prints the array to stream.
 * @param array[]: The array to be printed.
 * @param elems: The array size.
 */
void displayArray(int array[], int elems)    // function heading
{                                            // Displays array
    for (int count = 0; count < elems; count += 1)
    {
        cout << array[count] << "  ";
    }
    cout << endl;
}

/**
 * Sorts the values of an array in descending order.
 * @param array[]: The integer array to sort.
 * @param elems: The integer size of the array.
 */
void bubbleSortDescending(int array[], int elems)
{
    /// Boolean that checks if a swap was made during each round of the bubble sort.
    bool didSwap;
    /// Temporary variable used to swap values.
    int temp;
    /// The index of the array where the largest values are swapped to in order.
    int bottom = elems - 1;
    
    cout << endl << "Sorting..." << endl;
    
    do
    {
        displayArray(array, elems);
        
        // Set didSwap to false at the beginning of each round.
        didSwap = false;
        // Step through the array until the index where elements are already sorted.
        for (int i = 0; i < bottom; i += 1)
        {
            if (array[i] < array[i + 1])
            {
                // If the value at the counter index is
                // smaller than the following value, swap them.
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                // Set the didSwap boolean to true because a swap was made.
                didSwap = true;
            }
        }
        // Decrement the bottom index to fix the ordered elements in place.
        bottom -= 1;
    }
    // Continue while no swap was made.
    while( didSwap );
    
    displayArray(array, elems);
    cout << endl;
}

/**
 * Sorts the values of an array in ascending order.
 * @param array[]: The integer array to sort.
 * @param elems: The integer size of the array.
 */
void bubbleSortAscending(int array[], int elems)
{
    bool didSwap;
    int temp;
    int bottom = elems - 1;
    
    do
    {
        didSwap = false;
        for (int i = 0; i < bottom; i += 1)
        {
            if (array[i] > array[i + 1])
            {
                // If the value at the counter index is
                // larger than the following value, swap them.
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                didSwap = true;
            }
        }
        bottom -= 1;
    }
    while( didSwap );
}
