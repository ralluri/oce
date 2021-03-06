// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_TSolid1_HeaderFile
#define _PTopoDS_TSolid1_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PTopoDS_TSolid1.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <PTopoDS_TShape1.hxx>


class PTopoDS_TSolid1 : public PTopoDS_TShape1
{

public:

  
  //! The new  TSolid1  has no  boundary  and covers  the
  //! whole 3D space.
  Standard_EXPORT PTopoDS_TSolid1();
  
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType()  const;

PTopoDS_TSolid1(const Storage_stCONSTclCOM& a) : PTopoDS_TShape1(a)
{
  
}



  DEFINE_STANDARD_RTTI(PTopoDS_TSolid1)

protected:




private: 




};







#endif // _PTopoDS_TSolid1_HeaderFile
