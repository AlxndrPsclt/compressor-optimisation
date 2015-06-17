TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt


INCLUDEPATH += lib_multi_obj/amga2
INCLUDEPATH += lib_multi_obj/emopso
INCLUDEPATH += lib_multi_obj/libEvolOptimizer
INCLUDEPATH += lib_multi_obj/nsga2
INCLUDEPATH += lib_multi_obj/omniopt

SOURCES += \
    lib_multi_obj/amga2/Amga2.cpp \
    lib_multi_obj/amga2/Individual.cpp \
    lib_multi_obj/amga2/RandomNumberGenerator.cpp \
    lib_multi_obj/emopso/efile.cpp \
    lib_multi_obj/emopso/emopso.cpp \
    lib_multi_obj/emopso/Particle.cpp \
    lib_multi_obj/libEvolOptimizer/CParticleRegular.cpp \
    lib_multi_obj/libEvolOptimizer/ICEvolOptimizer.cpp \
    lib_multi_obj/libEvolOptimizer/ICMultiObjectiveOptimizer.cpp \
    lib_multi_obj/libEvolOptimizer/ICQualityFunction.cpp \
    lib_multi_obj/libEvolOptimizer/ICSingleObjOptimizer.cpp \
    lib_multi_obj/libEvolOptimizer/messages.cpp \
    lib_multi_obj/libEvolOptimizer/mtrand.cpp \
    lib_multi_obj/nsga2/CNSGA2Optimizer.cpp \
    lib_multi_obj/nsga2/NSGA2.cpp \
    lib_multi_obj/omniopt/priv_omniopt/allocate.cpp \
    lib_multi_obj/omniopt/priv_omniopt/crossover.cpp \
    lib_multi_obj/omniopt/priv_omniopt/crowddist.cpp \
    lib_multi_obj/omniopt/priv_omniopt/decode.cpp \
    lib_multi_obj/omniopt/priv_omniopt/display.cpp \
    lib_multi_obj/omniopt/priv_omniopt/dominance.cpp \
    lib_multi_obj/omniopt/priv_omniopt/eval.cpp \
    lib_multi_obj/omniopt/priv_omniopt/fillnds.cpp \
    lib_multi_obj/omniopt/priv_omniopt/global.cpp \
    lib_multi_obj/omniopt/priv_omniopt/initialize.cpp \
    lib_multi_obj/omniopt/priv_omniopt/input.cpp \
    lib_multi_obj/omniopt/priv_omniopt/list.cpp \
    lib_multi_obj/omniopt/priv_omniopt/merge.cpp \
    lib_multi_obj/omniopt/priv_omniopt/mutation.cpp \
    lib_multi_obj/omniopt/priv_omniopt/output.cpp \
    lib_multi_obj/omniopt/priv_omniopt/pdef.cpp \
    lib_multi_obj/omniopt/priv_omniopt/pdefinit.cpp \
    lib_multi_obj/omniopt/priv_omniopt/rand.cpp \
    lib_multi_obj/omniopt/priv_omniopt/rank.cpp \
    lib_multi_obj/omniopt/priv_omniopt/report.cpp \
    lib_multi_obj/omniopt/priv_omniopt/sampleprob1.cpp \
    lib_multi_obj/omniopt/priv_omniopt/sampleprob2.cpp \
    lib_multi_obj/omniopt/priv_omniopt/sampleprob3.cpp \
    lib_multi_obj/omniopt/priv_omniopt/sampleprob4.cpp \
    lib_multi_obj/omniopt/priv_omniopt/sampleprob5.cpp \
    lib_multi_obj/omniopt/priv_omniopt/sort.cpp \
    lib_multi_obj/omniopt/priv_omniopt/tourselect.cpp \
    lib_multi_obj/omniopt/priv_omniopt/utility.cpp \
    lib_multi_obj/omniopt/OmniOptOptimizer.cpp \
    lib_multi_obj/TEST_QT/main.cpp \
    lib_multi_obj/TEST_QT/simple_functions.cpp \
    lib_multi_obj/simple_functions.cpp \
    lib_multi_obj/TEST_QT/added_functions.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    lib_multi_obj/amga2/Amga2.h \
    lib_multi_obj/amga2/Individual.h \
    lib_multi_obj/amga2/RandomNumberGenerator.h \
    lib_multi_obj/emopso/efile.h \
    lib_multi_obj/emopso/emopso.h \
    lib_multi_obj/emopso/Particle.h \
    lib_multi_obj/libEvolOptimizer/CParticleRegular.h \
    lib_multi_obj/libEvolOptimizer/ICEvolOptimizer.h \
    lib_multi_obj/libEvolOptimizer/ICMultiObjectiveOptimizer.h \
    lib_multi_obj/libEvolOptimizer/ICNotifier.h \
    lib_multi_obj/libEvolOptimizer/ICParticle.h \
    lib_multi_obj/libEvolOptimizer/ICQualityFunction.h \
    lib_multi_obj/libEvolOptimizer/ICSingleObjOptimizer.h \
    lib_multi_obj/libEvolOptimizer/messages.h \
    lib_multi_obj/libEvolOptimizer/mtrand.h \
    lib_multi_obj/nsga2/CNSGA2Optimizer.h \
    lib_multi_obj/nsga2/NSGA2.h \
    lib_multi_obj/omniopt/priv_omniopt/global.h \
    lib_multi_obj/omniopt/priv_omniopt/pdef.h \
    lib_multi_obj/omniopt/priv_omniopt/rand.h \
    lib_multi_obj/omniopt/OmniOptOptimizer.h \
    lib_multi_obj/TEST_QT/simple_functions.h \
    lib_multi_obj/simple_functions.h \
    lib_multi_obj/added_functions.h \
    lib_multi_obj/TEST_QT/added_functions.h

