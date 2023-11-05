// Solivan Hiep
// HiepSolivan@csu.fullerton.edu
// @HiepSolivan
// Partners: @Kaleb16

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // DONE: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  // DONE: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  for (const auto& elements : arguments) {
    if (elements == "./average") {
      continue;
    }
    double number{std::stod(elements)};
    sum += number;
  }

  /*
  --- ATTEMPT AT USING A FOR LOOP AS OPPOSED TO FOR ELSE [IGNORE] ---
  for (int iteration{0}; iteration < arguments.size(); iteration++) {
    if(iteration == 0) {
      continue;
    }
    sum += std::stod(arguments[iteration]);
  }
  std::cout << sum << '\n'; THIS COMMENT IS USED TO CHECK IF PROPER SUM
   */

  // DONE: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average{sum / (static_cast<double>(arguments.size()) - 1.0)};

  // DONE: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average << '\n';

  return 0;
}