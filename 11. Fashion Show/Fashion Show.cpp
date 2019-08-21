#include <iostream>
#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main() {
    // Performance hack
    ios_base::sync_with_stdio(false);
    
    int testCases;
    cin >> testCases;
    
    while (testCases-- > 0) {
        int participants;
        int temp;
        
        cin >> participants;
        int male[participants];
        int female[participants];
        
        // Accepting the values as input!
        for (int i = 0; i < participants; i++)
            cin >> male[i];
        
        // Now, for the next set of values!
        for (int i = 0; i < participants; i++)
            cin >> female[i];
        
        // Now using the `sort` function from STL to sort both these arrays!
        sort(male, male+participants);
        sort(female, female+participants);
        
        // Creating another array to store the prodcts of the above two arrays!
        long maximizedRead[participants];
        
        for (int i = 0; i < participants; i++)
        	maximizedRead[i] = male[i] * female[i];
        
        long long answer = accumulate(maximizedRead, maximizedRead + participants, 0);
        
        cout << answer << endl;
    }
}