#include "raindrops.h"

namespace raindrops {

    std::string convert(int num) {
        std::string return_string = "";
        if (num % 3 == 0) {return_string += "Pling";}
        if (num % 5 == 0) {return_string += "Plang";}
        if (num % 7 == 0) {return_string += "Plong";}
        
        if (return_string == "") {return_string = std::to_string(num);}
        return return_string;
    }

}  // namespace raindrops
