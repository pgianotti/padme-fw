#ifndef ADCBoard_H
#define ADCBoard_H

#include<vector>
#include<string>
#include<iostream>
#include<fstream>

#include "Rtypes.h"

#include "DBService.hh"

#include "ADCEvent.hh"
#include "ADCFile.hh"

class ADCBoard
{

 public:

  ADCBoard(int);
  ~ADCBoard();

  void Reset();
  void Init();

  int GetBoardId() { return fBoardId; }

  ADCFile* File(int i);
  ADCFile* AddFile(std::string);
  int GetNFiles() { return fFiles.size(); }
  std::string GetFileName(int);

  ADCEvent* Event() { return fADCEvent; }
  ADCEvent* NextEvent();

  void SetVerbose(Int_t v) { fVerbose = v; }

 private:

  int OpenFile();
  int ReadFileHead();
  int ReadNextEvent();
  int UnpackEvent_v01(UInt_t);
  int UnpackEvent_v02(UInt_t);
  int UnpackEvent_v03(UInt_t);

 private:

  int fBoardId;

  Int_t fVerbose;

  //DBService* fDB;

  std::vector<ADCFile> fFiles;

  UInt_t fNewFile;
  UInt_t fCurrentFile;
  std::ifstream fFileHandle;
  void* fBuffer;

  ADCEvent* fADCEvent;

};
#endif
