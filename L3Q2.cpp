ds lab3Q2
#include <iostream>

bool implies(bool a, bool b) {
    return (!a) || b;  // a ? b is logically ¬a ? b
}

int main() {
    std::cout << "P Q | P->Q ¬Q | Valid?\n";
    std::cout << "----------------------\n";
    bool P, Q;
    for (int pi = 0; pi < 2; ++pi) {
        for (int qi = 0; qi < 2; ++qi) {
            P = pi;
            Q = qi;
            bool premise1 = implies(P, Q);
            bool premise2 = !Q;
            bool conclusion = !P;
            bool valid = !(premise1 && premise2) || conclusion;
            std::cout
                << (P?'T':'F') << " "
                << (Q?'T':'F') << "   "
                << (premise1?'T':'F') << "    "
                << (premise2?'T':'F') << "   "
                << (valid?'T':'F')
                << "\n";
        }
    }
    return 0;
}
