#include <iostream>
using namespace std;
class Cubiod{
private:
    int x, y, z;
public:
    Cubiod(int L, int W, int H) {
        x = L;
        y = W;
        z = H;
    }
    int volume() {
        return x * y * z;
    }
};
int main(){


    return 0;
}