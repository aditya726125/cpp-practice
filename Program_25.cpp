#include <iostream>
    using namespace std;
    class Data25 {
        int secureData = 125;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data25 d;
        cout << d.getData(123) << "\n";
        return 0;
    }