//
// Created by Yasin Karaca on 26.12.2022.
//

#include "Green.h"
#include "../base/Result.h"

namespace Game {
    Green::Green() {
        this->type = "Green";
    }

    void Green::compare(Base *base) {
        if (base->getType() == "Green") {
            this->result = Result::DRAW;
        } else if (base->getType() == "Red") {
            this->result = Result::LOSE;
        } else this->result = Result::WIN;

    }



} // Game