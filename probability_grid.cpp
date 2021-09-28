#include <iostream>
#include "probability_grid.hpp"
#include <cmath>
#include <fstream>

using namespace std;

double ProbabilityGrid::at(int x, int y) const {
    return *(probability_array + (y * width + x));
}

void ProbabilityGrid::print(ostream& os) const {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            os << at(x, y) << " ";
        }
        os << endl;
    }
}

ProbabilityGrid::ProbabilityGrid(int width, int height)
    : width(width), height(height) {
    assert (height*width <= 100);
    cout << "Created grid of size " << width << "x" << height << endl;
    for (int i = 0; i < height*width; i++) {
        double randomValue = (double)rand() / (double)RAND_MAX;
        probability_array[i] = pow(randomValue, 2.0);
    }
}

ProbabilityGrid::ProbabilityGrid(int width, int height, int num_obstacles) 
    : width(width), height(height) {
    cout << "Created grid of size " << width << "x" << height << endl;
}

int main (int argc, char *argv[]) {
    cout << "Hello" << endl;
    for (int i = 0; i < 10l; i++) {
        double randomValue = (double)rand() / (double)RAND_MAX;
        cout << randomValue << endl;
    }
    ProbabilityGrid grid(5, 5);
    ofstream out ("grid1.txt");
    grid.print(out);
    out.close();
}