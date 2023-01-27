//
// Created by Yasin Karaca on 26.12.2022.
//

#include "Blue.h"
#include "../base/Result.h"

namespace Game {
    Blue::Blue() {
        this->type = "Blue";
    }
    void Blue::compare(Base *base) {
        if (base->getType() == "Blue") {
            this->result = Result::DRAW;
        } else if (base->getType() == "Red") {
            this->result = Result::WIN;
        } else this->result = Result::LOSE;

    }


} // Game