//
// Created by Yasin Karaca on 26.12.2022.
//

#include "DarkRed.h"
#include "../base/Result.h"

namespace Game {
    DarkRed::DarkRed() {
        this->type = "DarkRed";
    }

    void DarkRed::compare(Base *base) {
        if (base->getType() == "DarkRed") {
            this->result = Result::DRAW;
        } else if (base->getType() == "Green") {
            this->result = Result::LOSE;
        } else this->result = Result::WIN;

    }


} // Game