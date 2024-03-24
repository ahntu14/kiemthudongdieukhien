#include <iostream>

using namespace std;

float Score(int number ) {
return number;
}

string status(int Score) {
    string str;
if (Score < 0) {
    str = "Error";
}
else if (Score < 4) {
    str = "Kem";
}
else if (Score >= 4 && Score <8) {
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

int main() {
float number;
cout<< "Nhap vao diem so: ";
cin >> number;
float sc = Score(number);
string result = status(sc);
cout << result;
return 0;
}
