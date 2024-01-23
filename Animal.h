#include <iostream>

namespace Animals {
    class HomeAnimal {
    public:
        HomeAnimal(const std::string& name);
        virtual ~HomeAnimal() = default;

        virtual void Sound() const = 0;
        void Show() const;
        virtual void Type() const = 0;

    protected:
        std::string name;
    };
}
