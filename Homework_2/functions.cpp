#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
#include <cstdlib> 
#include <windows.h>
#include <vector>
#include <functional> 


using namespace std;

vector<int> map(vector<int> numbers, function<int(int)> func) {
    vector<int> result;
    for (const int& num : numbers) {
        result.push_back(func(num));
    }
    return result;
}

main() {

}


