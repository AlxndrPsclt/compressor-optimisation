//---------------------------------------------------------------------------

#ifndef added_functionsH
#define added_functionsH
//---------------------------------------------------------------------------
#include "../libEvolOptimizer/ICQualityFunction.h"
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>


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
            vector<double> vect_pf(_pf, _pf + _nf);
            sort(vect_pf.begin(), vect_pf.end());

            energy+= pow(vect_pf[0]/p_in, (K-1/K));
            for (int i = 0; i < _nf-1; ++i)
            {
                energy+= pow(vect_pf[i+1]/vect_pf[i], (K-1/K));
            }
            energy+= pow(p_out/vect_pf[_nf-1], (K-1/K));
            energy*= Cp*T;

            return energy;
        }
};

class CostFunction : public ICQualityFunction  {
    public:
        double calculate(double* _pf, unsigned int _nf) {
            double cost;
            vector<double> vect_pf(_pf, _pf + _nf);
            sort(vect_pf.begin(), vect_pf.end());
            //std::sort(_pf, _pf + _nf);
            cost+=cost_coeff1 * vect_pf[0]/p_in+ cost_coeff2 * vect_pf[0];                   //Cisnienie p_in jest stale, a nie zmienne
            for (int i = 0; i < _nf-1; ++i)
            {
                cost+=cost_coeff1 * vect_pf[i+1]/vect_pf[i]+ cost_coeff2 * vect_pf[i+1];
            }
            cost+=cost_coeff1 * p_out/vect_pf[_nf-1]+ cost_coeff2 * p_out;               //Cisnienie p_out jest stale, a nie zmienne
            return cost;
    }
};

class PressionsIncreasing : public ICQualityFunction {
    double calculate(double* _pf, unsigned int _nf) {
        //Funkcja daje liczbe ujemna gdy cisnienia nie sa rosnace
        double are_consecutive = 0.0;
//        for (int i = 0; i < _nf-1; ++i)
//        {
//            if(_pf[i+1]<_pf[i])
//            {
//                are_consecutive-=1.0;
//            }
            return are_consecutive;
//        }
    }
};

#endif
