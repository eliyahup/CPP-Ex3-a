

#pragma  once
#include <iostream>
#include <complex>
#include "solver.hpp"
using namespace std;
namespace solver{

    class RealVariable {
        double _a;
        double _b;
        double _c;
        bool _f = false;

    public:
        RealVariable(const double& a= 0.0, const double& b= 0.0, const double& c= 0.0, const bool& f=false)
        : _a(a), _b(b), _c(c),_f(f){

        }

        friend  const RealVariable operator*(double x , const RealVariable& r2);
        friend  const RealVariable operator*(double x , const RealVariable& r2);
        friend  const RealVariable operator*( const RealVariable& r1,double x);
        friend  const RealVariable operator-(const RealVariable& r1 ,double x);
        friend  const RealVariable operator-(const RealVariable& r1 );
        friend  const RealVariable operator-(const RealVariable& r1 ,const RealVariable& r2);
        friend  const RealVariable operator==(const RealVariable& r1 ,double x);
        friend  const RealVariable operator==(const RealVariable& r1 ,const RealVariable& r2);
        friend  const RealVariable operator^(const RealVariable& r1 ,double x);
        friend  const RealVariable operator+(const RealVariable& r1 ,const RealVariable& r2);
        friend  const RealVariable operator+(double x ,const RealVariable& r2);
        friend  const RealVariable operator+(const RealVariable& r1 ,double x);
        friend  const RealVariable operator/(const RealVariable& r1 ,double x);

       friend double solve( const RealVariable& x);

    };




    class ComplexVariable {
    private:
        double _a;
        double _b;
        double _c;
        double _i;
    public:
        ComplexVariable (const double& a= 0.0, const double& b= 0.0, const double& c= 0.0,
                         const double& i=0.0)
                : _a(a), _b(b), _c(c),_i(i) {
        }
        friend  const ComplexVariable operator*(double x , const ComplexVariable& r2);
        friend  const ComplexVariable operator*( const ComplexVariable& r1,double x);
        friend  const ComplexVariable operator-(const ComplexVariable& r1 ,double x);
        friend  const ComplexVariable operator-(const ComplexVariable& r1 ,const ComplexVariable& r2);
        friend  const ComplexVariable operator==(const ComplexVariable& r1 ,double x);
        friend  const ComplexVariable operator==(const ComplexVariable& r1 ,const ComplexVariable& r2);
        friend  const ComplexVariable operator^(const ComplexVariable& r1 ,double x);
        friend  const ComplexVariable operator+(const ComplexVariable& r1 ,const ComplexVariable& r2);
        friend  const ComplexVariable operator+( const ComplexVariable& r1 ,const complex<double>& r2);
        friend  const ComplexVariable operator+(double x ,const ComplexVariable& r2);
        friend  const ComplexVariable operator+(const ComplexVariable& r1 ,double x);
        friend  const ComplexVariable operator/(const ComplexVariable& r1 ,double x);

        friend  complex<double> solve(ComplexVariable y);
    };



    double solve(const RealVariable& x);
    complex<double> solve(ComplexVariable y);

};



