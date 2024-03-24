#include <iostream>
#include <cassert>

using namespace std;

float Score(int numberOfCorrect) {
    return numberOfCorrect;
}

string status(int Score) {
    string str;
    if (Score < 0) {
        str = "Error";
    }
    else if (Score < 4) {
        str = "Kem";
    }
    else if (Score >= 4 && Score < 8) {
        str = "Dat";
    }
    else if (Score >= 8 && Score <= 10) {
        str = "Gioi";
    }
    else {
        str = "Error";
    }
    return str;
}

void testCases() {
    assert(status(Score(0)) == "Kem");
    assert(status(Score(3)) == "Kem");
    assert(status(Score(4)) == "Dat");
    assert(status(Score(7)) == "Dat");
    assert(status(Score(8)) == "Gioi");
    assert(status(Score(10)) == "Gioi");

    assert(status(-1) == "Error");
    assert(status(11) == "Error");

  
    assert(status(Score(-5)) == "Error");

   
    assert(status(Score(3.5)) == "Kem");

    assert(status(Score(6)) == "Dat");

    cout << "Hoan tat kiem tra";
}

int main() {
    testCases();
    return 0;
}

