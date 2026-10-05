#include <iostream>
using namespace std;

int main() {
        struct  student {
            string fname;
            int niu;
            char kelas;
        };
        student niko;
        niko.fname = "KING NIKO";
        niko.niu = 1111;
        niko.kelas = 'A';
        cout << niko.fname << endl;
        cout << niko.niu << endl;
        cout << niko.kelas << endl;
}


