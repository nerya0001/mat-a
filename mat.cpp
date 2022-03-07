#include <iostream>
#include <string>
#include "mat.hpp"
using namespace std;


namespace ariel {
    
    string mat(int a, int b, char c, char d) {
        if (a % 2 == 0 || b % 2 == 0 || a <= 0 || b <= 0) {
            throw invalid_argument("bad input (a/b)");
        }
        if (c == '\n' || c == '\t' || c == ' ' || c == '\r' || d == '\n' || d == '\t' || d == ' ' || d == '\r') {
            throw invalid_argument("bad input (c/d)");
        }

        char m[b][a];


        for (int i = 0; i < b; i++) {
            
        }

        return "###---###";


    }
}