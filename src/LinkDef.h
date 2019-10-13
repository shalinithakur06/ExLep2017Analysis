#include "interface/MyEvent.h"
#include "interface/Reader.h"
#include "interface/ObjectSelector.hh"
#include "interface/HistogramPlotter.hh"
#include "interface/UncertaintyComputer.hh"
#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class SampleInfo+;
//#pragma link C++ class LorentzVector+;
//#pragma link C++ class Point3D+;
#pragma link C++ class MyVertex+;
#pragma link C++ class std::vector<MyVertex>;
#pragma link C++ class MyMET+;
#pragma link C++ class std::vector<MyMET>;
#pragma link C++ class MyJet+;
#pragma link C++ class std::vector<MyJet>;
#pragma link C++ class MyElectron+;
#pragma link C++ class std::vector<MyElectron>;
#pragma link C++ class MyMuon+;
#pragma link C++ class std::vector<MyMuon>;
#pragma link C++ class MyEvent+;
#pragma link C++ class Reader+;
#pragma link C++ class ObjectSelector+;
#pragma link C++ class HistogramPlotter+;
#pragma link C++ class BTagSF+;
#pragma link C++ class UncertaintyComputer+;
#endif


