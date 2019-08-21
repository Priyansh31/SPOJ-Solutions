#include <iostream>
#include <string>

using namespace std;

int main()  {
    // Performance hack!
    ios_base::sync_with_stdio(false);

    int columns;
    cin >> columns;

    // Starting the infinite loop from here!
    while (columns != 0)    {
        string textIn;
        cin >> textIn;

        const int stringLen = textIn.length();
        int rows = stringLen/columns;

        // Forming the 2d array!
        char code[rows][columns];

        int counter = 0;
        for (int i = 0; i < rows; i++)  {
            // The encryption pattern keeps alternating between rows, i.e. the date shall be
            //  filled from left to right from the string in the first rows, while from right to
            //  left in the second row and so on! Thus, we use two inner loops to satisfy the
            //  given condition!

            for (int j = 0; (i % 2 == 0) && (j < columns); j++)
                code[i][j] = textIn[counter++];

            for (int j = columns-1; (i % 2 != 0) && (j >= 0); j--)
                code[i][j] = textIn[counter++];
        }

        // Finally printing the output of the required solution!
        for (int j = 0; j < columns; j++)   {
            for (int i = 0; i < rows; i++)  {
                // The rows will keep alternating with the columns as constant using this loop!
                cout << code[i][j];
            }
        }

        cout << endl;

        // The final terminator which will decide if this loop should continue or not!
        cin >> columns;
    }
}
