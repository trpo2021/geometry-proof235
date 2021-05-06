#include <cstring>
#include <iostream>
#include <regex>

using namespace std;

void proverka(string CIRCLE)
{	 
    if ((strstr(CIRCLE.c_str(), "circle "))
	|| (strstr(CIRCLE.c_str(),"circle("))){
	cmatch result;
	regex regular(
		"([\\w\\s]+)"
		"(\\()"
		"([\\s]*)"
		"([0-9]*[.]?[0-9]+)"
		"([\\s]*)"
		"([0-9]*[.]?[0-9]+)"
		"([\\s]*)"
		"(\\,)"
		"([\\s]*)"
		"([0-9]*[.]?[0-9]+)"
		"([\\s]*)"
		"(\\))");

        if (regex_match(CIRCLE.c_str(), result, regular)) {
            cout << "true" << endl;        
	} else
            cout << "error" << endl;
    } else
        cout << "error" << endl;
}

int main()
{
    cout << "Enter a shape (example: circle (2 2, 2.2) ): \n" ;
    string CIRCLE; 
    getline(cin, CIRCLE);
    proverka(CIRCLE);
    return 0;
}
