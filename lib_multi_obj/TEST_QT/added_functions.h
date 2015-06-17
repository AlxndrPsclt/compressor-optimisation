//---------------------------------------------------------------------------

#ifndef added_functionsH
#define added_functionsH
//---------------------------------------------------------------------------
#include "../libEvolOptimizer/ICQualityFunction.h"
#include <math.h>
#include <stdlib.h>
#include <algorithm>


const double Cp = 36.96;  //Ciepło wlasciwe
const double Cv = 28.46;
const double T = 290;    //Temperatura
const double K=Cp/Cv;

const double cost_coeff1 = 0.4;
const double cost_coeff2 = 0.6;

const double p_in = 1.6;
const double p_out = 8.6;

const int N = 7;


class EnergyFunction : public ICQualityFunction  {
    public:
        double calculate(double* _pf, unsigned int _nf) {
            double energy;
            for (int i = 0; i < _nf-1; ++i)
            {
                energy+= pow(_pf[i+1]/_pf[i], (K-1/K));
            }
            energy*= Cp*T;

            return energy;
        }
};

class CostFunction : public ICQualityFunction  {
    public:
        double calculate(double* _pf, unsigned int _nf) {
            double cost;
            cost+=cost_coeff1 * _pf[0]/p_in+ cost_coeff2 * _pf[0];
            for (int i = 0; i < _nf-1; ++i)
            {
                cost+=cost_coeff1 * _pf[i+1]/_pf[i]+ cost_coeff2 * _pf[i+1];
            }
            return cost;
    }
};

class PressionsIncreasing : public ICQualityFunction {
    double calculate(double* _pf, unsigned int _nf) {
        double are_consecutive = 0.01;
        for (int i = 0; i < _nf-1; ++i)
        {
            if(_pf[i+1]<_pf[i])
            {
                are_consecutive-=1.0;
            }
            return  are_consecutive;
        }
    }
};

#endif
