#include <iostream>
    using namespace std;
    class Data79 {
        int secureData = 395;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data79 d;
        cout << d.getData(123) << "\n";
        return 0;
    }