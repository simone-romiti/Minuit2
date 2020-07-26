// paraboloid2D

#include <iostream>

#include "Minuit2/FCNBase.h"
#include "Minuit2/FunctionMinimum.h"
#include "Minuit2/MnHesse.h"
#include "Minuit2/MnMigrad.h"
#include "Minuit2/MnPrint.h"
#include "Minuit2/MnUserParameters.h"

using namespace ROOT::Minuit2;

class Quad4F : public FCNBase {

public:
  Quad4F() {}

  ~Quad4F() {}

  double operator()(const std::vector<double> &par) const {

    double x = par[0];
    double y = par[1];

    return x * x + y * y;
  }

  double Up() const { return 1.; }

private:
};

int main() {

  Quad4F fcn;

  {
    // test constructor
    MnUserParameters upar;
    upar.Add("x", 3., 0.01);
    upar.Add("y", 3., 0.01);

    MnMigrad migrad(fcn, upar);
    std::cout << "migrad created"
              << "\n";
    FunctionMinimum min = migrad();
    std::cout << "minimum: " << min << std::endl;
  }

  return 0;
}
