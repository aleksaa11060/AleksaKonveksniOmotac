#include <iostream>;

#include "mnogougao.h"

using namespace std;

int main()

{

	float x, y;	cout << "Unesi tacke (primer : \"X Y Z\", za prekid unosa unesi bilo koje slovo)" << endl;

	vector<tacka> tacke;

	while (cin >> x >> y) tacke.push_back(tacka(x, y, 0));

	mnogougao m1(tacke);

 cout << "Konveksni Omotac :\n";

 for (auto tacka : m1.tacke())

 {

   cout << tacka.x << " " << tacka.y << "\n";

 }

}
