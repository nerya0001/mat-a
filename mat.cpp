#include <iostream>
#include <string>
#include <cctype>
#include "mat.hpp"
using namespace std;


namespace ariel {
    
    string mat(int a, int b, char c, char d) {
        if (a % 2 == 0 || b % 2 == 0 || a <= 0 || b <= 0) {
            throw invalid_argument("bad input (a/b)");
        }
        
        if (!isprint(c) || !isprint(d) || isspace(c) || isspace(d)) {
            throw invalid_argument("bad input (c/d)");
        }

        char m[b][a];


        for (int i = 0, j = a - 1, f = b - 1; i < b; i++, j--, f--) {
            for (int k = i; k <= j; k++) {
                if (i % 2 == 0) {
                    m[i][k] = c;
                    m[f][k] = c;
                } else {
                    m[i][k] = d;
                    m[f][k] = d;
                }
            }
            for (int s = i; s <= f; s++) {
                if (i % 2 == 0) {
                    m[s][i] = c;
                    m[s][j] = c;
                } else {
                    m[s][i] = d;
                    m[s][j] = d;
                }
            }
        }

        string ans;

        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j ++) {
                ans += m[i][j];
            }
            ans += '\n';
        }

        return ans;


    }
}