//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
//
/// \file MuStoppedEventAction.hh
/// \brief Definition of the MuStoppedEventAction class

#ifndef MuStoppedEventAction_h
#define MuStoppedEventAction_h 1

#include "G4UserEventAction.hh"
#include "globals.hh"
#include "MuStoppedRunAction.hh"
//#include "MuStoppedPrimaryGeneratorAction.hh"
#include "generator.hh"
//------add g4root.hh, then G4AnalysisManager can be recognised!----
#include "g4root.hh"

/// Event action class
///

class MuStoppedEventAction : public G4UserEventAction
{
  public:
    //MuStoppedEventAction(MuStoppedRunAction* runAction, MuStoppedPrimaryGeneratorAction* PrimaryGeneratorAction);
    MuStoppedEventAction(MuStoppedRunAction* runAction, MyPrimaryGenerator* GunGenerator);
    virtual ~MuStoppedEventAction();

    virtual void BeginOfEventAction(const G4Event* event);
    virtual void EndOfEventAction(const G4Event* event);

    void AddEdep(G4double edep) { fEdep += edep; }
 

  private:
    MuStoppedRunAction* fRunAction;
    //MuStoppedPrimaryGeneratorAction* fPrimaryGeneratorAction;
    MyPrimaryGenerator* fPrimaryGeneratorAction;
    G4double     fEdep;

};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

    
