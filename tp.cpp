//============================================================================
// Name        : Lisp_interpreter.cpp
// Author      : Santiago Lazzari
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

#include "LispParser.h"

int main() {
	LispParser parser;

	std::string code = "(+ 1 2 3 (+ 2 3 (+ 2 4)))";

	parser.parseLispCode(code);

	return 0;
}
