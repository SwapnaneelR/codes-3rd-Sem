
#include <iostream>
#include <vector>

using namespace std;

class Table {
private:
    vector<vector<int> > data;
    int rows;
    int cols;
public:
    Table(int r, int c) : rows(r), cols(c) {
        data.resize(rows, vector<int>(cols, 0));
    }
    vector<int>& operator[](int index) {
        return data[index];
    }
    Table& operator=(const Table& other) {
        if (this != &other) {
            rows = other.rows;
            cols = other.cols;
            data = other.data;
        }
        return *this;
    }
    friend istream& operator>>(istream& is, Table& table) {
        for (int i = 0; i < table.rows; ++i) {
            for (int j = 0; j < table.cols; ++j) {
                is >> table.data[i][j];
            }
        }
        return is;
    }
    friend ostream& operator<<(ostream& os, const Table& table) {
        for (int i = 0; i < table.rows; ++i) {
            for (int j = 0; j < table.cols; ++j) {
                os << table.data[i][j] << " ";
            }
            os <<"\n" ;
        }
        return os;
    }
};

int main() {
    Table t(4, 5), t1(4, 5);
    cin >> t;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << "\n" << t1;
    return 0;
}

