//
// Created by Yasin Karaca on 26.12.2022.
//

#ifndef PICKACARD_RESULT_H
#define PICKACARD_RESULT_H

namespace Game {

    class Result {
    public:
        enum ResultType {
            WIN = 2,
            LOSE = 0,
            DRAW = 1
        };
    };

} // Game

#endif //PICKACARD_RESULT_H
