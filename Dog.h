#include "Animal.h"

namespace Animals {
    class Dog : public HomeAnimal {
    public:
        Dog(const std::string& name);
        void Sound() const override;
        void Type() const override;
    };
}
