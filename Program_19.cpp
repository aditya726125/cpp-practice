#include <iostream>
    using namespace std;
    class Data19 {
        int secureData = 95;
    public:
        int getData(int auth) {
            if(auth == 123) return secureData;
            return -1;
        }
    };
    int main() {
        Data19 d;
        cout << d.getData(123) << "\n";
        return 0;
    }