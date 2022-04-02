#include<iostream>
#include<vector>
using namespace std;

class Data {

private:
        // Collection of vectors integer
        vector<int>arr;

public:
        // default constructor
        Data() 
        {

        }

        // ------ Adds a number to the data set.
        void add(int number) 
        {
                arr.push_back(number);
        }

        // ------- Prints out the entire data set on a single line, separated by space.
        void print() 
        {
                for (int i = 0; i < arr.size(); i++)
                        cout << arr[i] << " ";
                cout << "\n";
        }

        // ------ Sorts the data set in ascending order.
        // ------ bubble sort is used to sort the vector.
        void sort() 
        {
                int n = arr.size();
                for (int i = 0; i < n - 1; i++) 
                {
                        for (int j = 0; j < n - i - 1; j++) 
                        {
                                if (arr[j] > arr[j + 1])
                                        swap(arr[j], arr[j + 1]);
                        }
                }
        }
};