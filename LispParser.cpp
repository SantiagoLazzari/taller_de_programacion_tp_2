/*
 * lispParser.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: santi
 */

#include "LispParser.h"

using namespace std;

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <stack>

LispParser::LispParser() {

}

LispParser::~LispParser() {

}

std::string insertSpacesBetweenBrackets(std::string& aString) {
    for (unsigned position = 0 ; position < aString.length() ; position ++) {
        if (aString[position] == ')' || aString[position] == '(') {
          aString.insert(position + 1, " ");
          aString.insert(position, " ");
        }
    ++ position;
  }

  return aString;
}

void LispParser::parseLispCode(std::string&lispCode) {
    std::string newLispCode = insertSpacesBetweenBrackets(lispCode);

    cout<<newLispCode<<endl;

    std::istringstream buf(lispCode);
    std::istream_iterator<std::string> beg(buf), end;

    std::vector<std::string> tokens(beg, end); // done!


    std::stack<std::string> expressionsStack;

    for (unsigned int i = 0 ; i < tokens.size() ; i++) {
        std::string parsingString = tokens[i];
        std::string expression;
        std::string parameter;

        if (parsingString.substr(0, 1).compare("(") == 0) {
            expression = parsingString.substr(1, parsingString.length());
            cout << "expression push " << expression << endl;
            expressionsStack.push(expression);
        }

        if (parsingString.substr(parsingString.length() - 1, parsingString.length()).compare(")") == 0) {

        }
  }

  for (unsigned i = 0 ; i < expressionsStack.size() ; i++) {
  	std::string stringgg = expressionsStack.top();
  	expressionsStack.pop();
  	cout << "pop expression " << stringgg << endl;
  }
}

void LispParser::hola() {
	cout << "hola" << endl; // prints !!!Hello World!!!
}
