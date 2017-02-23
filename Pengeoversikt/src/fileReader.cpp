/*
 * fileReader.cpp
 *
 *  Created on: 7. feb. 2017
 *      Author: fschjerven
 */

#include "fileReader.hpp"
#include <stdio.h>
#include <iostream>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include<string>


using namespace std;

void fileHandler(string filename){
/*chdir()*/

	ifstream fileContent;
	fileContent.open(filename);

	char * dir = getcwd(NULL, 0);
	    cout << "Current dir: " << dir << endl;

	if (fileContent.fail()){
		cout << "Åpning av fil feilet" << endl;
		exit(1);
	}

	string linje;

	while (getline(fileContent, linje)) {
		cout << linje << endl;
    }
}


