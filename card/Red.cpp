//
// Created by Yasin Karaca on 26.12.2022.
//

#include "Red.h"
#include "../base/Result.h"

namespace Game {
    Red::Red() {
        this->type = "Red";
    }

    void Red::compare(Base *base) {
        if (base->getType() == "Red") {
            this->result = Result::DRAW;
        } else if (base->getType() == "Green") {
            this->result = Result::WIN;
        } else this->result = Result::LOSE;
    }

} // Game

