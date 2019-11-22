#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "Parser.h"
#include "Scanner.h"
#include "Relation.h"
#include "Scheme.h"
#include "Tuple.h"
#include "Interpreter.h"

using namespace std;

int main(int argc, char * argv[]) {

	ifstream input;
	input.open("in54.txt"); //change to argv[1]
	Scanner myScanner("in54.txt"); //change it to argv[1]
	myScanner.tokenize();
	Parser myParser(myScanner.getTokens());
	myParser.parse();
	Interpreter myInt(myParser.getDatalog());
	cout << myInt.toString();

	return 0;
}