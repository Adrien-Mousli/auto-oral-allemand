#include <iostream>
#include <string>
using namespace std;

int main()
{

char quest1[256];
char quest2[256];
char quest3[256];
char quest4[256];
char quest5[256];
char quest6[256];
char quest7[256];


cout << "************************************************************" << endl;
cout << "************************************************************" << endl;
cout << "************************************************************" << endl;
cout << "**********     Willkommen bei auto oral  v1.0     **********" << endl;
cout << "**********     ------------------------------     **********" << endl;
cout << "**********     Bienvenu(e) sur auto oral v1.0     **********" << endl;
cout << "************************************************************" << endl;
cout << "************************************************************" << endl;
cout << "************************************************************" << endl;


cout << "Die Antworten müssen in deutscher Sprache verfasst werden" << endl;
cout << "Les réponses doivent être écrites en allemand" << endl;

cout << "Wie ist dein Name ?" << endl;
cout << "Comment t'appelles tu ?" << endl;
cin.getline (quest1,256);

cout << "wie alt bist du" << endl;
cout << "quelle âge as-tu ?" << endl;
cin.getline (quest2,256);

cout << "Wie viel hast du von Bruder und Schwester ? (Antworten Sie nicht mit Ja oder Nein)" << endl;
cout << "combien as-tu de frère(s)/soeur(s)? (ne pas répondre par oui ou non)" << endl;
cin.getline (quest3,256);

cout << "wo wohnst du ?" << endl;
cout << "où habite tu ?" << endl;
cin.getline (quest4,256);

cout << "hallo meine name ist " << quest1 << " ich habe " << quest2 << " Jahre alt, und ich habe " << quest3 << ".\nIch wohne in " << quest4 << endl; // rappel: mettre des espaces a chaque bout de texte

return 0;
}
