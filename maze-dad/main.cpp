#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <array>
#include <vector>
#include <random>
#include <fstream>
#include <iterator>

using namespace std; // What does this line do - it allowed me to use a string variable below

int main(int argc, char* argv[]) 
{
      if (argc != 5) {
        // Incorrect argements passed
        cout << "Incorrect number of Arguments Passed. Program requires 4 but we received : " << argc - 1  << endl;
      } else {

        // Declare variables to store two nums
        int seed = atoi(argv[1]);  // Not used yet
        int N = atoi(argv[2]);     // Number of Rows
        int M = atoi(argv[3]);     // Number of Columns
        string fname = argv[4];    // Filename to save output for grade.

        cout << "seed variable: " << seed << endl;
        cout << "N variable(# of rows): " << N << endl;
        cout << "M variable(# of columns): " << M << endl;
        cout << "fname variable(Filename): " << fname << endl;
   
        // Create vector of vectors N rows by M columns
        std::vector <std::vector<int> > mazenums (N, vector<int>(M));
        
       // Initialize to arbitrary values equal to N * M 
       int count = 1; 
       for (int row = 0; row < mazenums.size(); row++) { 
            for (int col = 0; col < mazenums[0].size(); col++) { 
                mazenums[row][col] = count; 
                count++; 
            } 
        }
     
        // Printing the matrix to StdOut
        for (int row = 0; row < mazenums.size(); row++) { 
            for (int col = 0; col < mazenums[0].size(); col++) { 
                cout.width(4); 
                cout << mazenums[row][col]; 
                }
                cout << endl; 
            }

        // NOT WORKING YET
        // Print the output of mazenums vector of vectors to File specificed by fname variable
        // std::ofstream output_file(fname);
        // std::ostream_iterator<double> output_iterator(output_file, "\n");
        // std::copy(std::begin(mazenums), std::end(mazenums), output_iterator);
    }
    
    



    // Return a 0 to indicate successful program exectuion
    return 0;
}