// paraboloid2D

#include <iostream>

#include "Minuit2/FCNBase.h"
#include "Minuit2/FunctionMinimum.h"
#include "Minuit2/MnHesse.h"
#include "Minuit2/MnMigrad.h"
#include "Minuit2/MnPrint.h"
// #include "Minuit2/MnUserParameterState.h"
#include "Minuit2/MnUserParameters.h"

using namespace ROOT::Minuit2;

class Quad4F : public FCNBase {

public:
  Quad4F() {}

  ~Quad4F() {}

  double operator()(const std::vector<double> &par) const {

    double x = par[0];
    double y = par[1];

    return pow(x - 19, 2) + pow(y, 2);
  }

  double Up() const { return 1.; }

private:
};

int main() {

  Quad4F fcn;

  // test constructor
  MnUserParameters upar;
  upar.Add("x", 3., 0.01);
  upar.Add("y", 3., 0.01);

  MnMigrad migrad(fcn, upar);
  std::cout << "migrad created"
            << "\n";
  FunctionMinimum min = migrad();
  std::cout << "minimum: " << min << std::endl;

  MnUserParameterState state = min.UserState();

  std::cout << "x BF " << state.Params()[0] << "\n";
  std::cout << "x BF " << state.Params()[1] << "\n";

  return 0;
}
