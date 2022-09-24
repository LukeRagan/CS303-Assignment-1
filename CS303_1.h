#pragma once
#include <iostream>

using namespace std;


// Declaring the void function to delete whatever index the user wants to delete.
void Delete(int arr[], int size, int pos) {
    if (pos >= size + 1)
    {
        cout << "Deletion not possible";
    }
    else
    {
        for (int i = pos - 1; i < size - 1; i++)
            arr[i] = arr[i + 1];
    }
}