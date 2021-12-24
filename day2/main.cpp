//
//  main.cpp
//  day2
//
//  Created by Ashley Chen on 12/24/21.
//

#include <iostream>
using namespace std;

void partOne() {
    int distance = 0, depth = 0, val;
    string direction;
    while (cin >> direction >> val) {
        if (direction == "forward") {
            distance += val;
        }
        else if (direction == "down") {
            depth += val;
        }
        else {
            depth -= val;
        }
    }
    std::cout << distance*depth << endl;
}

void partTwo() {
    int distance = 0, depth = 0, aim = 0, val;
    string direction;
    while (cin >> direction >> val) {
        if (direction == "forward") {
            distance += val;
            depth += (aim*val);
        }
        else if (direction == "down") {
            aim += val;
        }
        else {
            aim -= val;
        }
    }
    std::cout << distance*depth << endl;
}

int main(int argc, const char * argv[]) {
    partOne();      //correct: 1690020
    partTwo();      //correct: 1408487760
    return 0;
}
