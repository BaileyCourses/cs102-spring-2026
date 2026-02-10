#include <iostream>
#include <cs102>

using namespace std;

class Die {
public:
    Die(size_t sides = 6);
    void roll();
    size_t face() const;
private:
    size_t _face;
    size_t _sides;
};

Die::Die(size_t sides) {
    _sides = sides;
    roll();
}

void Die::roll() {
    _face = cs102::random(_sides);
}

size_t Die::face() const {
    return _face + 1;
}

int main() {
    const size_t sides = 20;

    Die d(sides);

    d.roll();

    cout << "The die is showing " << d.face() << endl;

    return 0;
}
