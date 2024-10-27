#ifndef GROCERY_TRACKER_H
#define GROCERY_TRACKER_H

#include <string>
#include <map>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequency;

    void loadDataFromFile(const std::string& filename);
    void saveDataToFile(const std::string& filename);
    int getValidChoice();

public:
    GroceryTracker(const std::string& inputFilename);

    int getItemFrequency(const std::string& item);
    void printAllFrequencies();
    void printHistogram();
    void runMenu();
};

#endif // GROCERY_TRACKER_H