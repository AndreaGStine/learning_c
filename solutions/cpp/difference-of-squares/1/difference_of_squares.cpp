#include "difference_of_squares.h"

namespace difference_of_squares {
    // sum from 1 to n: n(n+1)/2
    // sum from 1^2 to n^2: n(n+1)(2n+1)/6

    int square_of_sum(int n) {
        return std::pow((n*(n+1))/2,2);
    }
    int sum_of_squares(int n) {
        return (n*(n+1)*(2*n+1))/6;
    }
    int difference(int n) {
        return (square_of_sum(n) - sum_of_squares(n));
    }
    

}  // namespace difference_of_squares
