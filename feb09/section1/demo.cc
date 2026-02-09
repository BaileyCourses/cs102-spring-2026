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
    _face = cs102::random(_sides) + 1;
}

size_t Die::face() const {
    return _face;
}

int main() {
    const size_t sides = 6;

    size_t rolls[sides];

    Die d(sides);

    for (size_t i = 0; i < sides; i++) {
	rolls[i] = 0;
    }

    size_t trials = 1000000;
    for (size_t i = 0; i < trials; i++) {
	d.roll();
	rolls[d.face() - 1]++;
    }

    for (size_t i = 0; i < sides; i++) {
	cout << i + 1 << ": " << rolls[i] * 100 / trials << "%" << endl;
    }

    return 0;
}
