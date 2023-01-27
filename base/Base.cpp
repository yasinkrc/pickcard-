//
// Created by Yasin Karaca on 26.12.2022.
//

#include "Base.h"

namespace Game {
    void Base::compare(Base *base) {

    }
    string Base::getType() {
        return this->type;
    }

    int Base::getResult() const {
        return this->result;
    }

    Base::Base()  = default;

} // Game