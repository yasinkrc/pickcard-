//
// Created by Yasin Karaca on 26.12.2022.
//

#include "ReadWriteFile.h"
#include <fstream>
#include <utility>
#include <sstream>
#include <vector>
#include "../card/DarkRed.h"
#include "../card/Green.h"
#include "../card/Blue.h"

namespace Game {
    ReadWriteFile::ReadWriteFile(string fileName) {
        this->fileName = fileName;
        for (int i = 0; i < 2; ++i) {
            this->selectedCards[i] = new Base*[10];
        }
    }

    void ReadWriteFile::ReadFromFile() {
        ifstream file;
        file.open("../files/" + this->fileName);
        if (file.is_open()) {
            string line;
            for (int i = 0; getline(file, line); i++) {
                vector<string> splitLine = split(&line, ',');
                for (int j = 0; j < splitLine.size(); ++j) {
                    Base *base;
                    if (splitLine[j] == "D") {
                         base = new DarkRed();
                        this->selectedCards[i][j] = base;
                    } else if (splitLine[j] == "R") {
                        base = new Red();
                        this->selectedCards[i][j] = base;
                    } else if (splitLine[j] == "G") {
                        base = new Green();
                        this->selectedCards[i][j] = base;
                    } else if (splitLine[j] == "B") {
                        base = new Blue();
                        this->selectedCards[i][j] = base;
                    }
                }
            }
        }
        file.close();
    }

    void ReadWriteFile::WriteToFile() {
        ofstream file;
        file.open(this->fileName);
        if (file.is_open()) {
            file << "Hello World" << endl;
        }
        file.close();
    }

    // satır içerisindeki virgülleri ayırır ve bir vektör döndürür (vector<string>)
    vector<std::string> ReadWriteFile::split(string *str, char delimiter) {
        vector<std::string> res;
        string temp;
        for (int i = 0; i < str->length(); i++) {
            if (str->at(i) == delimiter) {
                res.push_back(temp);
                temp = "";
            } else {
                temp += str->at(i);
            }
        }
        res.push_back(temp);
        return res;
    }


} // Game