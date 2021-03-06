// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _NLPlate_HPG0G3Constraint_HeaderFile
#define _NLPlate_HPG0G3Constraint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_NLPlate_HPG0G3Constraint.hxx>

#include <Plate_D3.hxx>
#include <NLPlate_HPG0G2Constraint.hxx>
#include <Standard_Integer.hxx>
class gp_XY;
class gp_XYZ;
class Plate_D1;
class Plate_D2;
class Plate_D3;


//! define a PinPoint G0+G3  Constraint  used to load a Non Linear
//! Plate
class NLPlate_HPG0G3Constraint : public NLPlate_HPG0G2Constraint
{

public:

  
  Standard_EXPORT NLPlate_HPG0G3Constraint(const gp_XY& UV, const gp_XYZ& Value, const Plate_D1& D1T, const Plate_D2& D2T, const Plate_D3& D3T);
  
  Standard_EXPORT virtual   Standard_Integer ActiveOrder()  const;
  
  Standard_EXPORT virtual  const  Plate_D3& G3Target()  const;




  DEFINE_STANDARD_RTTI(NLPlate_HPG0G3Constraint)

protected:




private: 


  Plate_D3 myG3Target;


};







#endif // _NLPlate_HPG0G3Constraint_HeaderFile
