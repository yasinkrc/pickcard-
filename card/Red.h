//
// Created by Yasin Karaca on 26.12.2022.
//

#ifndef PICKACARD_RED_H
#define PICKACARD_RED_H

#include <string>
#include "../base/Base.h"

namespace Game {

    class Red : public Base {
    public:
        Red();

        void compare(Base *base) override;

    };

} // Game

#endif //PICKACARD_RED_H
