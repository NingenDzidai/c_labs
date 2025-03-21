#include <string>;

void inputCoordinatesFromKeyboard(double &x, double &y);

void inputCoordinatesFromFile(std::string*, double*, double*);

bool checkHitCircle(double x, double y);

bool checkHitRectangle(double x, double y);

void printResult(bool result);

void writeResult(std::string filename, bool result);

void printfile(std::string filename);

void list_files();