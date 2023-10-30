// Kaleb Robles
// kkrobles@csu.fullerton.edu
// @Kaleb16
// Partners: @HiepSolivan

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (argc != 4) {
    std::cerr << "Error: Please provide exactly 3 arguments" << std::endl;
    return 1;
  }

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "."
            << "\n";

  // XTODO: Validate that the number of arguments is correct.
  // XIf not, print an error message and return a non-zero value.

  // XTODO: Declare three std::string variables to hold the
  // Xprotein, bread, and condiment input.
  // XInitialize each variable with an element of the arguments vector
  // Xdeclared above.

  // XTODO: Use cout to print output following the pattern
  // XYour order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // Xon its own line.

  return 0;
}
