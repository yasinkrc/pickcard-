//
// Created by Yasin Karaca on 26.12.2022.
//

#ifndef PICKACARD_READWRITEFILE_H
#define PICKACARD_READWRITEFILE_H


#include <iostream>
#include "../base/Base.h"
#include <sstream>
#include <vector>

using namespace std;
namespace Game {

    class ReadWriteFile {
    private:
        string fileName;
        // declare a two dimensional list to store the data
    public:
        Base ***selectedCards = new Base **[2];
        ReadWriteFile(string fileName);
        void ReadFromFile();

        void WriteToFile();

        vector<std::string> split(string *str, char delimiter);
    };

} // Game

#endif //PICKACARD_READWRITEFILE_H
