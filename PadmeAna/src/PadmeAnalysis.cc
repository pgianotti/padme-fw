#include "PadmeAnalysis.hh"
#include "iostream"

using namespace std;


PadmeAnalysis::PadmeAnalysis()
{;}

PadmeAnalysis::~PadmeAnalysis()
{;}

void PadmeAnalysis::ProcessInputFile(string InFile){
  std::cout << "Processing file " << InFile <<  std::endl  ;
}


void PadmeAnalysis::ProcessInputList(std::vector<string> FileList){
  for(size_t ifile = 0; ifile<FileList.size(); ++ifile) {
    ProcessInputFile(FileList[ifile]);
  }
}

// void PadmeAnalysis::ProcessSoBEvent(){
//   ;
// }
// void PadmeAnalysis::ProcessSoREvent(){
//   ;
// }
// void PadmeAnalysis::ProcessEoBEvent(){
//   ;
// }
// void PadmeAnalysis::ProcessEoREvent(){
//   ;
// }

// void PadmeAnalysis::ProcessDataEvent(){

  
//   ;
// }

void PadmeAnalysis::Init(string ConfigFileName){
  ;
}
void PadmeAnalysis::EndProcessing(){
  ;
}