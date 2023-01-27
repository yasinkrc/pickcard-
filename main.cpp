
#include "./base/Base.h"
#include "utilities/ReadWriteFile.h"
#include "utilities/Play.h"

using namespace std;
using namespace Game;

int main() {
    ReadWriteFile *readWriteFile = new ReadWriteFile("card.txt");
    readWriteFile->ReadFromFile();
    Play *pl = new Play();
    pl->play(readWriteFile->selectedCards);

    return 0;
}


