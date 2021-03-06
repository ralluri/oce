// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_MeshOwner_HeaderFile
#define _MeshVS_MeshOwner_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_MeshVS_MeshOwner.hxx>

#include <Handle_MeshVS_DataSource.hxx>
#include <Handle_TColStd_HPackedMapOfInteger.hxx>
#include <Standard_Integer.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SOPtr.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Handle_PrsMgr_PresentationManager.hxx>
#include <Standard_Boolean.hxx>
class MeshVS_DataSource;
class TColStd_HPackedMapOfInteger;
class PrsMgr_PresentationManager;


//! The custom mesh owner used for advanced mesh selection. This class provides methods to store information:
//! 1) IDs of hilighted mesh nodes and elements
//! 2) IDs of mesh nodes and elements selected on the mesh
class MeshVS_MeshOwner : public SelectMgr_EntityOwner
{

public:

  
  Standard_EXPORT MeshVS_MeshOwner(const SelectMgr_SOPtr& theSelObj, const Handle(MeshVS_DataSource)& theDS, const Standard_Integer thePriority = 0);
  
  Standard_EXPORT  const  Handle(MeshVS_DataSource)& GetDataSource()  const;
  
  //! Returns ids of selected mesh nodes
  Standard_EXPORT  const  Handle(TColStd_HPackedMapOfInteger)& GetSelectedNodes()  const;
  
  //! Returns ids of selected mesh elements
  Standard_EXPORT  const  Handle(TColStd_HPackedMapOfInteger)& GetSelectedElements()  const;
  
  //! Saves ids of selected mesh entities
  Standard_EXPORT virtual   void AddSelectedEntities (const Handle(TColStd_HPackedMapOfInteger)& Nodes, const Handle(TColStd_HPackedMapOfInteger)& Elems) ;
  
  //! Clears ids of selected mesh entities
  Standard_EXPORT virtual   void ClearSelectedEntities() ;
  
  //! Returns ids of hilighted mesh nodes
  Standard_EXPORT  const  Handle(TColStd_HPackedMapOfInteger)& GetDetectedNodes()  const;
  
  //! Returns ids of hilighted mesh elements
  Standard_EXPORT  const  Handle(TColStd_HPackedMapOfInteger)& GetDetectedElements()  const;
  
  //! Saves ids of hilighted mesh entities
  Standard_EXPORT   void SetDetectedEntities (const Handle(TColStd_HPackedMapOfInteger)& Nodes, const Handle(TColStd_HPackedMapOfInteger)& Elems) ;
  
  Standard_EXPORT virtual   void HilightWithColor (const Handle(PrsMgr_PresentationManager3d)& PM, const Quantity_NameOfColor theColor, const Standard_Integer Mode = 0) ;
  
  Standard_EXPORT virtual   void Unhilight (const Handle(PrsMgr_PresentationManager)& PM, const Standard_Integer Mode = 0) ;
  
  Standard_EXPORT virtual   Standard_Boolean IsForcedHilight()  const;




  DEFINE_STANDARD_RTTI(MeshVS_MeshOwner)

protected:


  Handle(TColStd_HPackedMapOfInteger) mySelectedNodes;
  Handle(TColStd_HPackedMapOfInteger) mySelectedElems;


private: 


  Handle(MeshVS_DataSource) myDataSource;
  Handle(TColStd_HPackedMapOfInteger) myDetectedNodes;
  Handle(TColStd_HPackedMapOfInteger) myDetectedElems;
  Standard_Integer myLastID;


};







#endif // _MeshVS_MeshOwner_HeaderFile
