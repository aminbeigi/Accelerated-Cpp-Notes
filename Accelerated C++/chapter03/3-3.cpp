#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_set>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;
using std::streamsize;
using std::numeric_limits;
using std::unordered_set;

int main() {
    cout << "This program will count how many distict words there " 
            "are in some a list of strings." 
        << endl
        << "Followed by an end-of-file to exit..." 
        << endl;
    cout << "Enter a word: ";

    vector<string> data;
    typedef vector<string>::size_type vec_sz;
    vec_sz size = data.size();

    string x;
    while (size == 0) {
        while (cin >> x) {
            data.push_back(x);
        }

        size = data.size();
        if (size > 0) {
            break;
        }
        
        cout << "Atleast 1 word is required. " << endl;
        data.clear(); 
        //get rid of cin failure state
        cin.clear(); 
        // discard "bad" character(s) 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');        
    }

    unordered_set<string> set;
    for (int i = 0; i < size; ++i) {
        set.insert(data[i]);
    }

    cout << "Your sentence had " << set.size() << " distinct words." << endl;
    return 0;
}