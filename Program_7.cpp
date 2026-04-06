#include <iostream>
    using namespace std;
    class Data7 {
        int secureData = 35;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data7 d;
        cout << d.getData(123) << "\n";
        return 0;
    }