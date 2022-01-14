#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> litUnFichier (const string & chemin)
{
    vector<string> toutesLesLignes;
    ifstream ifs (chemin);
    if (!ifs) return toutesLesLignes;
    for (string uneLigne;getline(ifs, uneLigne);)
        toutesLesLignes.push_back(uneLigne);
    return toutesLesLignes;
}

template <typename T>
void afficheVecteur (const vector<T> & V)
{
    for (const T & val : V)
        cout << val << endl;
    cout << endl;
}

int main()
{
    cout << "Hello World!" << endl;
    vector<string> dicoFR (litUnFichier("../tp1_prendu/liste_francais.txt"));
    afficheVecteur(dicoFR);
    return 0;
}
