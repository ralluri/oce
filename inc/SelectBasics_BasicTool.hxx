// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_BasicTool_HeaderFile
#define _SelectBasics_BasicTool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
class gp_Pnt2d;
class TColgp_Array1OfPnt2d;


//! give Tools for sorting Selection results
//! (example : sensitive entities matching)
class SelectBasics_BasicTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! returns True if The Segment {P1P2} is
  //! intersected by the segment {P3P4}
  Standard_EXPORT static   Standard_Boolean MatchSegments (const gp_Pnt2d& P1, const gp_Pnt2d& P2, const gp_Pnt2d& P3, const gp_Pnt2d& P4) ;
  
  //! return True if Segment(pBegin, pEnd) is Selected
  Standard_EXPORT static   Standard_Boolean MatchSegment (const gp_Pnt2d& pBegin, const gp_Pnt2d& pEnd, const Standard_Real X, const Standard_Real Y, const Standard_Real aTol, Standard_Real& DMin) ;
  
  Standard_EXPORT static   Standard_Boolean AutoInter (const TColgp_Array1OfPnt2d& aPolyg2d) ;
  
  //! package method used to find if a point
  //! is close enough to a polygon of 2D points
  //! to be Used by Primitives like curves or faces...
  //! Rank gives the index of the touched
  //! segment
  Standard_EXPORT static   Standard_Boolean MatchPolyg2d (const TColgp_Array1OfPnt2d& tabpoint, const Standard_Real X, const Standard_Real Y, const Standard_Real aTol, Standard_Real& DMin, Standard_Integer& Rank) ;




protected:





private:





};







#endif // _SelectBasics_BasicTool_HeaderFile
