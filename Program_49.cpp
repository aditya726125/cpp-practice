#include <iostream>
    using namespace std;
    class Data49 {
        int secureData = 245;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data49 d;
        cout << d.getData(123) << "\n";
        return 0;
    }