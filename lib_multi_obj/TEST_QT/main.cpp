#include <iostream>

using namespace std;


#include "../libEvolOptimizer/ICNotifier.h"
#include "../libEvolOptimizer/ICQualityFunction.h"
#include "simple_functions.h"
#include "added_functions.h"


#include <iostream>
#include <iomanip>
#include <iostream>


//ALGORITHMS
#include "Amga2.h"
#include "CNSGA2Optimizer.h"
#include <OmniOptOptimizer.h>
#include <emopso.h>






//Example Notifier
class ExampleNotifier : public ICNotifier {
  void onBeforeStart(const char* _name) {
    std::cout << _name << '\n';
  }

  void onAfterStop(const char* _name) {
    std::cout << _name << '\n';
  }

  void onError(const char* _error)
  {
    std::cout << _error << '\n';
  }

  void onGenerationDone(unsigned int _g) {
    std::cout << "Generation " <<_g << "done."<< '\n';
  }
};

int main()
{

    //QUALITY FUNCTIONS

    EnergyFunction energy_function;
    CostFunction cost_function;

//    BC1 bc1;
//    BC2 bc2;

    //CONSTRAINTS
    PressionsIncreasing pression_inscreasing;
    //G1 g1;

    //ALGORITHM
    Amga2 algorithm;
    //CNSGA2Optimizer algorithm;
    //OmniOptOptimizer algorithm;
    //EMOPSO algorithm;

    algorithm.setNotifier(new ExampleNotifier());

    //ALGORITHM CONFIGURATION
    algorithm.setGenerations(200);
    algorithm.setFloatSize(N);
    algorithm.setBinarySize(0);
    algorithm.setPopSize(200);
    algorithm.setSeed(0.5);
    algorithm.setArchiveSize(500);
    //SPECIAL CONF:

    //NSGA2:
    //algorithm.setDi();
    //algorithm.setDiM();
   // algorithm.setCross();
    //algorithm.setFloatPMut();
   // algorithm.setBinaryPMut();

    //Omni Optimizer


    //EMOPSO
    //algorithm.setCognitiveAcc(1.5);
   // algorithm.setSocialAcc(1.5);
   // algorithm.setInertia(0.4);
   // algorithm.setFlyTime(7);
   // algorithm.setMaxArchiveSize(250);
   // algorithm.setNumberOfClusters(4);
  //  algorithm.se




    for (int i = 0; i < algorithm.getFloatSize() ; i++) {
      algorithm.setFLLimit(p_in,i);
      algorithm.setFHLimit(p_out,i);
    }

    for (int i = 0; i < algorithm.getBinarySize(); i++) {
      algorithm.setBLLimit(0,i);
      algorithm.setBHLimit(5,i);
    }

    //Adding obj functions:
    algorithm.addObjectiveFnc(&energy_function);
    algorithm.addObjectiveFnc(&cost_function);
    //algorithm.addObjectiveFnc(&r);
    algorithm.addConstraintFnc(&pression_inscreasing);
    //
    //OPTIMIZATION RUN
    algorithm.run();


    //RESULTS:
    CMultiObjectiveSolutionSet * solutionSet
      = algorithm.getSolutionSet();


    for (CMultiObjectiveSolutionSet::Iterator solution
            = solutionSet->begin();
         solution != solutionSet->end();
         solution++) {

         for (int i=0; i < (*solution)->FBinaryVars.size(); i++) {
              std::cout <<  (*solution)->FBinaryVars[i] << '\t';
         }
         for (int i=0; i < (*solution)->FFloatVars.size(); i++) {
              std::cout <<  (*solution)->FFloatVars[i] << '\t';
         }
         for (int i=0; i < (*solution)->FObjFncVals.size(); i++) {
              std::cout <<  (*solution)->FObjFncVals[i] << '\t';
         }
//         for (int i=0; i < (*solution)->FConstraintVals.size(); i++) {
//             std::cout <<  (*solution)->FConstraintVals[i] << '\t';
//         }
         std::cout << '\n';

    }
    std::cin.get();
    return 0;
}


