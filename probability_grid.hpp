#ifndef PROBABILITY_GRID
#define PROBABILITY_GRID
using namespace std;

const int MAX_GRID_WIDTH = 10;

class ProbabilityGrid {
    private:
        int width;
        int height;
    public:
        double probability_array[MAX_GRID_WIDTH * MAX_GRID_WIDTH];
        ProbabilityGrid(int width, int height);
        ProbabilityGrid(int width, int height, int num_obstacles);

        void print(std::ostream& os) const;
        double at(int x, int y) const;
};

#endif