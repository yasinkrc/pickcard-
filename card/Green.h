//
// Created by Yasin Karaca on 26.12.2022.
//

#ifndef PICKACARD_GREEN_H
#define PICKACARD_GREEN_H


#include "../base/Base.h"

namespace Game {

    class Green : public Base {
    public:
        Green();

        void compare(Base *base) override;

    };

} // Game

#endif //PICKACARD_GREEN_H
