
// Staircase detail

// This is a staircase of size :

//    #
//   ##
//  ###
// ####
// Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

// Write a program that prints a staircase of size .

// Function Description

// Complete the staircase function in the editor below.

// staircase has the following parameter(s):

// int n: an integer
// Print

// Print a staircase as described above.

// Input Format

// A single integer, , denoting the size of the staircase.

// Constraints

//  .

// Output Format

// Print a staircase of size  using # symbols and spaces.

// Note: The last line must have  spaces in it.

// Sample Input

// 6 
// Sample Output

//      #
//     ##
//    ###
//   ####
//  #####
// ######
// Explanation

// The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .

// Language
// C++20
// More
// 37383940414243444546474849505152535455565758596061
// #include <bits/stdc++.h>

// using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);

// /*
//  * Complete the 'staircase' function below.
//  *
// …
// Line: 61 Col: 1

// Test against custom input
// BlogScoringEnvironmentFAQAbout UsSupportCareersTerms Of ServicePrivacy Policy
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    for(int i = 1; i<=n;i++){
        for(int k = 0; k<n-i; k++){
            cout<<" ";
        }
        for(int j= 0; j<i; j++){
            cout<<"#";
            
        }
        cout<<"\n";
    }

}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
