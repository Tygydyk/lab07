#include <string>
#include <fstream>
#include <iostream>

void print(const std::string& text, std::ostream& out = std::cout); //function print
void print(const std::string& text, std::ofstream& out); //function print 2(overload)
