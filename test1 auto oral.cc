#include <iostream>
#include <string>
using namespace std;

int main()
{

string questa[1];
string questb[2];
string questc[3];
string questd[4];
string queste[5];
string questf[6];
string questg[7];


                                            // <----------- laisse un vide au cas besoin de nouv variable

cout << "il faudra écrire les réponses en allemand" << endl;

cout << "comment t'appelles tu ?" << endl;
getline(cin, questa[1]);

cout << "quel âge as-tu ?" << endl;
getline(cin, questb[2]);

cout << "où habites tu ?" << endl;
getline(cin, questc[3]);

cout << "hallo meine name ist " << questa[1] << " ich habe " << questb[2] << " Jahre alt, und ich habe " << questc[3] << ".\nIch wohne in " << questd[4] << endl; // rappel: mettre des espaces a chaque bout de texte

return 0;
}
