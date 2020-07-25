#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;

int main() {
    typedef vector<double>::size_type vec_sz;
 
    const vec_sz homework_vec = 5;
 
    string name;
    vector<string> name_vec;
 
    double homework;
    double total;
    double mean;
    vector<double> mean_vec;
 
    cout << "Enter student name: ";
    while (cin >> name) {
        name_vec.push_back(name);
        cout << "Enter " << homework_vec << " homework_vec scores below..." << endl;
 
        total = 0;
        mean = 0;  
 
        for (vec_sz i = 0; i != homework_vec ; ++i) {
            cin >> homework;
            total += homework;
        }
 
        mean = total / homework_vec;
        mean_vec.push_back(mean);
 
        cout << "Enter another student name "
                "(or enter F6 key to exit): ";
    }
 
    vec_sz students_size = name_vec.size();
    cout << endl;
    cout << "Number of students entered: " << students_size << endl;
 
    streamsize prec = cout.precision();
    for (vec_sz i = 0; i != students_size ; ++i)
    {
        cout << endl;
        cout << "Student: " << name_vec[i] << endl;
        cout << "Mean Score: " << setprecision(5)
            << mean_vec[i] << setprecision(prec) << endl;
    }
 
    return 0;
 
}