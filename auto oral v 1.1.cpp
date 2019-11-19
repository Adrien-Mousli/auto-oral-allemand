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

string reponse;

do {

        cout << "************************************************************" << endl;
        cout << "************************************************************" << endl;
        cout << "************************************************************" << endl;
        cout << "**********     Willkommen bei auto oral  v1.1     **********" << endl;
        cout << "**********     ------------------------------     **********" << endl;
        cout << "**********     Bienvenu(e) sur auto oral v1.1     **********" << endl;
        cout << "************************************************************" << endl;
        cout << "************************************************************" << endl;
        cout << "************************************************************" << endl;

        cout << "veuillez choisir la langue 1 pour francais et 2 pour allemand" << endl;
        cout << "Bitte wählen Sie Sprache 1 für Französisch und 2 für Deutsch" << endl;

        cin >> reponse;

            if (reponse == "1") {

                cout << "tu as choisi le francais pour les question mais fait"
                        "attention les réponses doivent être écrite en allemand" << endl;

                cout << "comment t'appelle tu ?" << endl;
                cin.getline (quest1,256);

                cout << "quelle âge as-tu ?" << endl;
                cin.getline (quest2,256);

                cout << "combien as-tu de frère(s)/soeur(s)? (ne pas répondre par oui ou non)" << endl;
                cin.getline (quest3,256);

                cout << "où habite tu ?" << endl;
                cin.getline (quest4,256);


                cout << "hallo,ich heiẞe " << quest1 << " ich habe " << quest2 << " Jahre alt, und ich habe " << quest3 << ".\nIch wohne in " << quest4 << endl; // rappel: mettre des espaces a chaque bout de texte

                } else if (reponse == "2") {

                    cout << "tu as choisi le francais pour les question mais fait"
                            "attention les réponses doivent être écrite en allemand" << endl;

                    cout << "Wie ist dein Name ?" << endl;
                    cin.getline (quest1,256);

                    cout << "wie alt bist du ?" << endl;
                    cin.getline (quest2,256);

                    cout << "Wie viel hast du Bruder / Schwester? (Antworten Sie nicht mit Ja oder Nein)" << endl;
                    cin.getline (quest3,256);

                    cout << "wo wohnst du ?" << endl;
                    cin.getline (quest4,256);


                    cout << "hallo,ich heiẞe " << quest1 << " ich habe " << quest2 << " Jahre alt, und ich habe " << quest3 << ".\nIch wohne in " << quest4 << endl; // rappel: mettre des espaces a chaque bout de texte

            } else {
                cout << "désolé il n'y a pas encore d'autre langues pour les questions" << endl;
            } while (reponse != "2");

    }
return 0;
}
