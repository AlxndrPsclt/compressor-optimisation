//---------------------------------------------------------------------------

#ifndef simple_functionsH
#define simple_functionsH
//---------------------------------------------------------------------------
#include "libEvolOptimizer/ICQualityFunction.h"

class CRosenbrock : public ICQualityFunction {
    public:

	CRosenbrock(){};


	virtual ~CRosenbrock() {};

	double calculate(double* _pf, unsigned int _nf) {
		double res=0;
		for (int i = 0; i < _nf; i++) {
			res+= (1-_pf[i])*(1-_pf[i]) + 100*(_pf[i+1]-_pf[i]*_pf[i])*(_pf[i+1]-_pf[i]*_pf[i]);
		}
		//res-=_pf[2]*(_pf[0]+_pf[1]-3);

		return res;
	}


    /** Description of selected algorithm
	@return brief description of chosen optimization algorithm
     */
	virtual const char *getDescription() {
	  return "RosenBrock Function";
	}
};

class F1 : public ICQualityFunction  {
public:
  double calculate(double* _pf, unsigned int _nf) {
	return _pf[0] * _pf[0];
  }
};

class F2 : public ICQualityFunction  {
  double calculate(double* _pf, unsigned int _nf) {
	return (_pf[0] - 2.0) * (_pf[0] - 2.0);
  }
};

class G1 : public ICQualityFunction {
    double calculate(double* _pf, unsigned int _nf) {
	  return - (((_pf[0] - 1) * (_pf[0] -1)) - 0.04);
    }
};

class T1 : public ICQualityFunction  {
public:
  double calculate(double* _pf, unsigned int _nf) {
    return _pf[0] * _pf[0];
  }
};

class BC1 : public ICQualityFunction  {
public:
  double calculate(double* _pf, unsigned int _nf) {
	double result=0;
	for (int i = 0; i < _nf-1; i++) {
		if (_pf[i]>=_pf[i+1]) {
			result+=_pf[i]-_pf[i+1]+1;
		}
	}
	return result;
  }

};

class BC2 : public ICQualityFunction  {
public:
  double calculate(double* _pf, unsigned int _nf) {
	double result=0;
	for (int i = 0; i < _nf-1; i++) {
		if (_pf[i]<=_pf[i+1]) {
			result+=_pf[i+1] - _pf[i]+1;
		}
	}
	return result;
  }

};

#endif
