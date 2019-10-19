#include <iostream>
using namespace std;

int main()
{
string quest1={};
string quest2={};
string quest3={};
string quest4={};

                                            // <----------- laisse un vide au cas besoin de nouv variable
cout << "il faudrat écrire les réponses en allemand" << endl;

cout << "comment t'appelle tu ?" << endl;
cin >> quest1;

cout << "quelle âge a tu ?" << endl;
cin >> quest2;

cout << "as-tu des frère(s)/soeur(s) (ne pas répondre par oui ou non)" << endl;
cin >> quest3;

cout << "ou habite tu ?" << endl;
cin >> quest4;


cout << "hallo meine name ist " << quest1 << " ich habe " << quest2 << " Jahre alt " << quest3 << " Ich wohne in " << quest4 << endl; // rappel: mettre des espaces a chaque bout de texte

return 0;
}
