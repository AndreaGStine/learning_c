#include "raindrops.h"
#include <string>

namespace raindrops {

// TODO: add your solution here
    std::string convert(int num) {
        std::string return_string = "";
        if (num % 3 == 0) 
            return_string = return_string + "Pling";
        if (num % 5 == 0) 
            return_string = return_string + "Plang";
        if (num % 7 == 0) 
            return_string = return_string + "Plong";
        
        if ((num % 3 != 0) and (num % 5 != 0) and (num % 7 != 0))
            return_string = std::to_string(num);
        
        return return_string;
    }

}  // namespace raindrops
