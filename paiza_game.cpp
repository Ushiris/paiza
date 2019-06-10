#include <iostream>
#include <vector>
using namespace std;

enum Door

class Building
{
private:
    int _h, _w, _r, _c, _number;

public:
    Building(int, int, int, int);
    ~Building();
};

Building::Building(int h, int w, int r, int c, int _num)
{
    _h = h;
    _w = w;
    _r = r;
    _c = c;
}

Building::~Building()
{
}

template<typename T>
void print_map(vector< vector<T> > contain)
{
    for (const auto &h : contain)
    {
        for (int i = 0; i < h.size(); i++)
        {
            cout << p;
            cout << ((i != h.size() - 1) ? ' ' : '\n');
        }
    }
}

int main(void)
{
    int H, W, N;
    vector<vector<int>> town(H, vector<int>(W, 0));
    vector<Building> building(N);
    for (int i = 0; i < N; i++)
    {
        int h, w, r, c;
        cin >> h >> w >> r >> c;
        building.push_back(new Building(h, w, r, c, i + 1));
    }



    print_map(town);

    return 0;
}