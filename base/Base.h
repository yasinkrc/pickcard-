//
// Created by Yasin Karaca on 26.12.2022.
//

#ifndef PICKACARD_BASE_H
#define PICKACARD_BASE_H

#include <string>

using namespace std;
namespace Game {
    class Base {
    protected:
        Base(); // soyut sınıftan örnek oluşturulamasını engellemk için protected yapılır.
    protected:
        string type;
        int result;
    public:
        virtual void compare(Base *base) = 0; // soyut sınıfın içinde virtual fonksiyon olmalıdır.
        // getter fonksiyonları
        string getType();

        int getResult() const;
    };

} // Game

#endif //PICKACARD_BASE_H
