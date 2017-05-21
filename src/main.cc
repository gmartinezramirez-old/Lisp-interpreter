#include <cstdio>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>
#include <sstream>

struct Token {
    enum class Type {
	NONE,
	LIST_START,
	LIST_END,
	ATOM_STRING,
	ATOM_NUMERIC,
	ATOM_SYMBOL,
	QUOTE,
     } type;
    std::string content;
 };

int main(int argc, char **argv) {
    std::string prompt = "\x1b[1;36m" "Lisp-Interpreter" "\x1b[0m" "> ";
    return 0;
}
