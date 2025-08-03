#include <iostream>
using namespace std;

bool implies(bool a, bool b) {
    return (!a) || b;  // material implication
}

int main() {
    cout << "M J S | M->J J->S | AllPremises | M->S | Valid?\n";
    cout << "-----------------------------------------------\n";

    for (int mi = 0; mi < 2; ++mi) {
        for (int ji = 0; ji < 2; ++ji) {
            for (int si = 0; si < 2; ++si) {
                bool M = mi, J = ji, S = si;
                bool p1 = implies(M, J);
                bool p2 = implies(J, S);
                bool all = p1 && p2;
                bool conclusion = implies(M, S);
                bool valid = !all || conclusion;

                cout << (M ? 'T' : 'F') << " "
                     << (J ? 'T' : 'F') << " "
                     << (S ? 'T' : 'F') << " |   "
                     << (p1 ? 'T' : 'F') << "    "
                     << (p2 ? 'T' : 'F') << "    |     "
                     << (all ? 'T' : 'F') << "      |   "
                     << (conclusion ? 'T' : 'F') << "   |   "
                     << (valid ? 'T' : 'F') << "\n";
            }
        }
    }
    return 0;
}
