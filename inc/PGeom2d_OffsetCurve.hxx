// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_OffsetCurve_HeaderFile
#define _PGeom2d_OffsetCurve_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PGeom2d_OffsetCurve_HeaderFile
#include <Handle_PGeom2d_OffsetCurve.hxx>
#endif

#ifndef _Handle_PGeom2d_Curve_HeaderFile
#include <Handle_PGeom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _PGeom2d_Curve_HeaderFile
#include <PGeom2d_Curve.hxx>
#endif
class PGeom2d_Curve;


class PGeom2d_OffsetCurve : public PGeom2d_Curve {

public:

  //! Creates an OffsetCurve with default values. <br>
  Standard_EXPORT   PGeom2d_OffsetCurve();
  //! <aBasisCurve> is  the basis curve, <aOffsetValue> <br>
//!         is the distance between <me> and the basis curve at <br>
//!         any point.    <aOffsetDirection>  defines the fixed <br>
//!         reference direction (offset direction). <br>
  Standard_EXPORT   PGeom2d_OffsetCurve(const Handle(PGeom2d_Curve)& aBasisCurve,const Standard_Real aOffsetValue);
  //! Set the field basisCurve with <aBasisCurve>. <br>
  Standard_EXPORT     void BasisCurve(const Handle(PGeom2d_Curve)& aBasisCurve) ;
  //! The basis curve can be an offset curve. <br>
  Standard_EXPORT     Handle_PGeom2d_Curve BasisCurve() const;
  //! Set the field offsetValue with <aOffsetValue>. <br>
  Standard_EXPORT     void OffsetValue(const Standard_Real aOffsetValue) ;
  //! Returns the value of the field offsetValue. <br>
  Standard_EXPORT     Standard_Real OffsetValue() const;

PGeom2d_OffsetCurve(const Storage_stCONSTclCOM& a) : PGeom2d_Curve(a)
{
  
}
    Handle(PGeom2d_Curve) _CSFDB_GetPGeom2d_OffsetCurvebasisCurve() const { return basisCurve; }
    void _CSFDB_SetPGeom2d_OffsetCurvebasisCurve(const Handle(PGeom2d_Curve)& p) { basisCurve = p; }
    Standard_Real _CSFDB_GetPGeom2d_OffsetCurveoffsetValue() const { return offsetValue; }
    void _CSFDB_SetPGeom2d_OffsetCurveoffsetValue(const Standard_Real p) { offsetValue = p; }



  DEFINE_STANDARD_RTTI(PGeom2d_OffsetCurve)

protected:




private: 


Handle_PGeom2d_Curve basisCurve;
Standard_Real offsetValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif