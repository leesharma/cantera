#ifndef CT_MIX_DEFS_H
#define CT_MIX_DEFS_H

namespace Cantera {

    /**
     *  This generic id is used as the default in virtual base
     *  classes that employ id's. It is used to indicate the lack
     *  of an inherited class that would define the id.
     */
    const int cNone = 0;

    // species thermo types
    const int cNASA = 1;
    const int cShomate = 2;

    /**
     * Equation of state types:
     *
     *     These types are used in the member function eosType()
     *  of the virtual base class ThermoPhase. They are used to
     *  distinguish different types of equation of states. And,
     *  they may be used for upcasting from the ThermoPhase class.
     *  Their id's should be distinct.
     *
     *  Users who wish to define their own equation of states which
     *  inherit from ThermoPhase should define a unique id which
     *  doesn't conflict with those listed below. The Cantera Kernel
     *  however, will not be know about the class and will therefore
     *  not be able to initialize the class within its "factory"
     *  routines. 
     */
    const int cIdealGas = 1;       //  IdealGasPhase in IdealGasPhase.h
    const int cIncompressible = 2; //  ConstDensityThermo in ConstDensityThermo.h
    const int cSurf = 3;           //  SurfPhase in SurfPhase.h 
    const int cMetal = 4;          //  MetalPhase in MetalPhase.h
    const int cSolidCompound = 5;  //  SolidCompound in SolidCompound.h

    // kinetic manager types
    const int cGasKinetics = 2;
    const int cGRI30 = 3;
    const int cInterfaceKinetics = 4;
}

#endif
