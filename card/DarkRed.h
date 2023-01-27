//
// Created by Yasin Karaca on 26.12.2022.
//

#ifndef PICKACARD_DARKRED_H
#define PICKACARD_DARKRED_H

#include "Red.h"

namespace Game {

    class DarkRed : public Red {
    public:
        DarkRed();

        void compare(Base *base) override;

    };

} // Game

#endif //PICKACARD_DARKRED_H
