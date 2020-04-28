
#include "doctest.h"
#include "solver.hpp"
#define EPS 0.0001

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;



TEST_CASE("Linear equation RealVariable") {
    RealVariable x;
    

          //format |a-b|<EPS

    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);

}



TEST_CASE("square equation") {
    
     RealVariable x;

    CHECK( abs(solve(2*(x^2) == 8 ) - 2 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    CHECK( abs( solve(2*x-4 == 10)-7 ) < EPS);
    CHECK( abs(solve(2*x == 4) - 2) < EPS);
    CHECK( abs(solve(7*x-4/2 == 47) - 7 ) < EPS);
    CHECK( abs(solve(2*x+2*x == 4) - 1 ) < EPS);
    CHECK( abs(solve(-x-3 == -2*x) - 3 ) < EPS);
    CHECK( abs(solve(-x-3 == -6*x) - 0.6) < EPS);
    CHECK( abs(solve(2*x+12 == -8) - (-10) ) < EPS);
    CHECK( abs(solve(x*2 + 4==12) - 4 ) < EPS);
    
}





