// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdSelect_EdgeFilter_HeaderFile
#define _StdSelect_EdgeFilter_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StdSelect_EdgeFilter.hxx>

#include <StdSelect_TypeOfEdge.hxx>
#include <SelectMgr_Filter.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_SelectMgr_EntityOwner.hxx>
#include <TopAbs_ShapeEnum.hxx>
class SelectMgr_EntityOwner;


//! A framework to define a filter to select a specific type of edge.
//! The types available include:
//! -   any edge
//! -   a linear edge
//! -   a circular edge.
class StdSelect_EdgeFilter : public SelectMgr_Filter
{

public:

  
  //! Constructs an edge filter object defined by the type of edge Edge.
  Standard_EXPORT StdSelect_EdgeFilter(const StdSelect_TypeOfEdge Edge);
  
  //! Sets the type of edge aNewType. aNewType is to be highlighted in selection.
  Standard_EXPORT   void SetType (const StdSelect_TypeOfEdge aNewType) ;
  
  //! Returns the type of edge to be highlighted in selection.
  Standard_EXPORT   StdSelect_TypeOfEdge Type()  const;
  
  Standard_EXPORT virtual   Standard_Boolean IsOk (const Handle(SelectMgr_EntityOwner)& anobj)  const;
  
  Standard_EXPORT virtual   Standard_Boolean ActsOn (const TopAbs_ShapeEnum aStandardMode)  const;




  DEFINE_STANDARD_RTTI(StdSelect_EdgeFilter)

protected:




private: 


  StdSelect_TypeOfEdge mytype;


};







#endif // _StdSelect_EdgeFilter_HeaderFile
