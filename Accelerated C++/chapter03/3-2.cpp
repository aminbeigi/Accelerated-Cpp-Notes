#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;
using std::streamsize;
using std::numeric_limits;

int main() {
    cout << "This program will compute and return the upper " 
            "quartile and lower quartile from a list of integers." 
         << endl;
    cout << "Enter a number: ";

    vector<int> data;
    typedef vector<int>::size_type vec_sz;  
    vec_sz size = data.size();  
    int x;

    while (size < 4) {
        while (cin >> x) {
            data.push_back(x);
        }

        size = data.size();
        if (size >= 4) {
            break;
        }

        cout << "Atleast 4 numbers required. " << endl;
        data.clear(); 
        //get rid of cin failure state
        cin.clear(); 
        // discard "bad" character(s) 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    sort(data.begin(), data.end());

    // compute median
    vec_sz mid = size/2;
    int median;
    double lower_quartile, upper_quartile;

    // sum up values in the lower quartile
    for (int i = 0; i <= mid-1; ++i) {
        lower_quartile += data[i];
    } 

    // if vector size is odd skip middle number by making k = 1
    int k; 
    if (size % 2 == 0) {
        k = 0;
    } else {
        k = 1;
    }

    // sum up values in the upper quartile
    for (int i = mid + k; i < size; ++i) {
        upper_quartile += data[i];
    }      

    cout << "Lower quartile: " << lower_quartile/mid << endl << "Upper quartile: " << upper_quartile/mid << endl;    
    return 0;
}