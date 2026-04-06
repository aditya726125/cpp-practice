#include <iostream>
    using namespace std;
    class Data31 {
        int secureData = 155;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data31 d;
        cout << d.getData(123) << "\n";
        return 0;
    }