/*
 * LispParser.h
 *
 *  Created on: Apr 2, 2016
 *      Author: santi
 */

#ifndef LISPPARSER_H_
#define LISPPARSER_H_

#include <string>

class LispParser {
private:
	insertSpacesBetweenBrackets(std::string&aString);

public:
	LispParser();
	virtual ~LispParser();
	void parseLispCode(std::string &lispCode);
	void hola();
};

#endif /* LISPPARSER_H_ */
