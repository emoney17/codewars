// decodeMorse('.... . -.--   .--- ..- -.. .')
// //should return "HEY JUDE"

#include <iostream>

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

std::string decodeMorse(std::string morseCode) {
    std::string decoded;
	std::string token;
	int size = morseCode.length();
	for (int i = 0; i <= size; i++) {
		if (morseCode[i] == '.') {
			token += morseCode[i];
		}
		else if (morseCode[i] == '-') {
			token += morseCode[i];
		}
		else if (morseCode[i] == ' ' || i == size) { // last char was being skipped
			for (int j = 0; j < 55; j++) {
				if (token == morse[j]) {
					decoded += ascii[j];
				}
			}
			if (i != 0
				&& i+1 < size
				&& i+2 < size
				&& morseCode[i+3] != ' '
				&& morseCode[i-1] != ' '
				&& morseCode[i+2] == ' '
				&& morseCode[i+1] == ' ') { // literally get nothing but a row of 3 spaces
				decoded += ' ';
			}
			token.clear();
		}
	}
	std::cout << decoded << '\n';
    return decoded;
}
