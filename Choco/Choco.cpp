#include <iostream>
using namespace std;

int main()
{
    int NilaiMatematika, NilaiFisika, Rerata;
    string status;

    cout << "Masukkan nilai Matematika ";
    cin >> NilaiMatematika;

    cout << "Masukkan nilai Fisika ";
    cin >> NilaiFisika;

    Rerata = (NilaiMatematika + NilaiFisika) / 2;

    if (Rerata > 60) {
        status = "Lulus";
    }
    else if (NilaiMatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Tidak Lulus";
    }

    cout << "Nilai Matematika " << NilaiMatematika << endl;
    cout << "Nilai Fisika " << NilaiFisika << endl;
    cout << "Rerata " << Rerata << endl;
    cout << "Anda Dinyatakan " << status << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
