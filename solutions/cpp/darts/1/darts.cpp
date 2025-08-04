#include "darts.h"
#include <cmath>

namespace darts {

// TODO: add your solution here
    int score(double x, double y) {
        double distance = std::pow((std::pow(x,2) + std::pow(y,2)),0.5);
        int score = 10;
        if (distance > 10)
            score = 0;
        else if (distance > 5)
            score = 1;
        else if (distance > 1)
            score = 5;
        return score;
    }
}  // namespace darts