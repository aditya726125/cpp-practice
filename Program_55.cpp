#include <iostream>
    using namespace std;
    class Data55 {
        int secureData = 275;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data55 d;
        cout << d.getData(123) << "\n";
        return 0;
    }