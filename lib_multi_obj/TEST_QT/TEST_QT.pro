TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    ../libEvolOptimizer/mtrand.cpp \
    ../libEvolOptimizer/messages.cpp \
    ../libEvolOptimizer/ICSingleObjOptimizer.cpp \
    ../libEvolOptimizer/ICQualityFunction.cpp \
    ../libEvolOptimizer/ICMultiObjectiveOptimizer.cpp \
    ../libEvolOptimizer/ICEvolOptimizer.cpp \
    ../emopso/emopso.cpp \
    ../emopso/efile.cpp \
    ../emopso/Particle.cpp \
    ../nsga2/NSGA2.cpp \
    ../nsga2/CNSGA2Optimizer.cpp \
    ../amga2/RandomNumberGenerator.cpp \
    ../amga2/Individual.cpp \
    ../amga2/Amga2.cpp \
    ../omniopt/OmniOptOptimizer.cpp \
    ../omniopt/priv_omniopt/utility.cpp \
    ../omniopt/priv_omniopt/tourselect.cpp \
    ../omniopt/priv_omniopt/sort.cpp \
    ../omniopt/priv_omniopt/report.cpp \
    ../omniopt/priv_omniopt/rank.cpp \
    ../omniopt/priv_omniopt/rand.cpp \
    ../omniopt/priv_omniopt/pdefinit.cpp \
    ../omniopt/priv_omniopt/pdef.cpp \
    ../omniopt/priv_omniopt/output.cpp \
    ../omniopt/priv_omniopt/mutation.cpp \
    ../omniopt/priv_omniopt/merge.cpp \
    ../omniopt/priv_omniopt/list.cpp \
    ../omniopt/priv_omniopt/input.cpp \
    ../omniopt/priv_omniopt/initialize.cpp \
    ../omniopt/priv_omniopt/global.cpp \
    ../omniopt/priv_omniopt/fillnds.cpp \
    ../omniopt/priv_omniopt/eval.cpp \
    ../omniopt/priv_omniopt/dominance.cpp \
    ../omniopt/priv_omniopt/display.cpp \
    ../omniopt/priv_omniopt/decode.cpp \
    ../omniopt/priv_omniopt/crowddist.cpp \
    ../omniopt/priv_omniopt/crossover.cpp \
    ../omniopt/priv_omniopt/allocate.cpp \
    simple_functions.cpp

HEADERS += \
    ../libEvolOptimizer/mtrand.h \
    ../libEvolOptimizer/messages.h \
    ../libEvolOptimizer/ICSingleObjOptimizer.h \
    ../libEvolOptimizer/ICQualityFunction.h \
    ../libEvolOptimizer/ICParticle.h \
    ../libEvolOptimizer/ICNotifier.h \
    ../libEvolOptimizer/ICMultiObjectiveOptimizer.h \
    ../libEvolOptimizer/ICEvolOptimizer.h \
    ../libEvolOptimizer/CParticleRegular.h \
    ../emopso/emopso.h \
    ../emopso/efile.h \
    ../emopso/Particle.h \
    ../nsga2/NSGA2.h \
    ../nsga2/CNSGA2Optimizer.h \
    ../amga2/RandomNumberGenerator.h \
    ../amga2/Individual.h \
    ../amga2/Amga2.h \
    ../emopso/Particle.h \
    ../emopso/emopso.h \
    ../emopso/efile.h \
    ../omniopt/OmniOptOptimizer.h \
    ../omniopt/priv_omniopt/rand.h \
    ../omniopt/priv_omniopt/pdef.h \
    ../omniopt/priv_omniopt/input.c~ \
    ../omniopt/priv_omniopt/global.h \
    simple_functions.h

INCLUDEPATH += ../libEvolOptimizer \
                ../emopso \
                ../amga2 \
                ../omniopt \
                ../nsga2
