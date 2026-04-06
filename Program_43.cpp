#include <iostream>
    using namespace std;
    class Data43 {
        int secureData = 215;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data43 d;
        cout << d.getData(123) << "\n";
        return 0;
    }