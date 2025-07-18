#ifdef __CLING__
R__LOAD_LIBRARY(libDelphes)
#include "classes/DelphesClasses.h"
#include "external/ExRootAnalysis/ExRootTreeReader.h"
#endif

#include <fstream>

//------------------------------------------------------------------------------

void particle_extract(const char *inputFile)
{
  gSystem->Load("/home/kousik/Tools/Delphes-3.5.0/libDelphes.so");

  TChain chain("Delphes");
  chain.Add(inputFile);

  ExRootTreeReader *treeReader = new ExRootTreeReader(&chain);
  Long64_t numberOfEntries = treeReader->GetEntries();

  TClonesArray *branchParticle = treeReader->UseBranch("Particle");

  std::ofstream outFile("particle_extract.csv");
  outFile << "Event_Number,Particle_No,PID,Charge,PT\n";

  for (Int_t entry = 0; entry < numberOfEntries; ++entry)
  {
    treeReader->ReadEntry(entry);
    Int_t numberOfParticles = branchParticle->GetEntries();
    
    if (numberOfParticles > 0)
    {
      for (Int_t particleIndex = 0; particleIndex < numberOfParticles; ++particleIndex)
      {
        GenParticle *particle = (GenParticle*) branchParticle->At(particleIndex);
        
        // Print to console
        cout << "Event No: " << entry + 1 
             << " , Particle No: " << particleIndex + 1 
             << " , PID = " << particle->PID 
             << " , Charge = " << particle->Charge 
             << " , PT = " << particle->PT 
             << endl;
        
        // Write to CSV file
        outFile << entry + 1 << "," 
                << particleIndex + 1 << "," 
                << particle->PID << "," 
                << particle->Charge << "," 
                << particle->PT << "\n";
      }
    }
  }

  outFile.close();
}
