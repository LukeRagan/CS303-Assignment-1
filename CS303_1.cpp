#include "CS303_1.h"
#include <iostream>
#include <fstream>
#include <algorithm> 



int main()
{
    const int ARRAY_SIZE = 100; 
    int num[ARRAY_SIZE];   
    int count = 0;       
    int toFind;
    int newValue;
    int i;

    // prompts the user to enter the integer they want to find in the array.
    std::cout << "Please enter the integer you want to find: ";
    std::cin >> toFind;

    ifstream inputFile;       

    // opens the text file.    
    inputFile.open("Text.txt");

    // Read the numbers from the file into the array.
    while (count < ARRAY_SIZE && inputFile >> num[count]) {
        count++;
    }

    // Close the file.
    inputFile.close();

    // Finds the whatever number the user inputed into the array and then using std::distance finds the location of the number in the array.
    int* found = std::find(std::begin(num), std::end(num), toFind);
    if (found != std::end(num))
    {
        int spaceInArray = std::distance(num, found);
        std::cout << "The integer " << toFind << " is in index location " << spaceInArray << "\n";
    }
    else
    {
        std::cout << "The integer is not in the array.\n";
    }
    // Asks the user to input whatever location in the array they want to delete.
    std::cout << "What index do you want to delete: ";
    int valueZero;
    std::cin >> valueZero;
    // implementation of the void function in the .h file to delete the index that the user chose.
    Delete(num, ARRAY_SIZE, valueZero);
    if (valueZero > ARRAY_SIZE) {
        std::cout << " ";
    }
    else {
        for (i = 0; i < 99; i++) {
            std::cout << num[i] << " ";
        }
    }
    
    return 0;
}