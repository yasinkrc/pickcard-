//
// Created by Yasin Karaca on 26.12.2022.
//

#ifndef PICKACARD_BLUE_H
#define PICKACARD_BLUE_H

#include "../base/Base.h"

namespace Game {

    class Blue : public Base {
    public:
        Blue();

        void compare(Base *base) override;
    };

} // Game

#endif //PICKACARD_BLUE_H
