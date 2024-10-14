#include <iostream>
#include <vector>

using namespace std;

// Function to sort objects by their color
void dutchFlagSort(vector<int>& arr) {
    int low = 0, mid = 0;
    int high = arr.size() - 1;
    
    while (mid <= high) {
        if (arr[mid] == 0) {  // red (0)
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {  // white (1)
            mid++;
        } else {  // blue (2)
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

// Function to print the sorted colors
void printSortedColors(const vector<int>& arr) {
    for (int color : arr) {
        if (color == 0) {
            cout << "red ";
        } else if (color == 1) {
            cout << "white ";
        } else if (color == 2) {
            cout << "blue ";
        }
    }
    cout << endl;
}

int main() {
    // Input color array: 0 - red, 1 - white, 2 - blue
    // Declare a vector
    vector<int> colors;
    
    // Add elements using push_back
    colors.push_back(2);
    colors.push_back(0);
    colors.push_back(2);
    colors.push_back(0);
    colors.push_back(0);
    colors.push_back(1);
    colors.push_back(0);
    colors.push_back(2);
    colors.push_back(1);
    
    // Sort the colors using Dutch National Flag algorithm
    dutchFlagSort(colors);
    
    // Output the sorted colors
    cout << "Sorted colors: ";
    printSortedColors(colors);

    return 0;
}





