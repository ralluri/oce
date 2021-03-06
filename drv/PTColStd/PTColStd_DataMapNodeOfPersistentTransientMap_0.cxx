// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <PTColStd_DataMapNodeOfPersistentTransientMap.hxx>

#include <Standard_Type.hxx>

#include <Standard_Persistent.hxx>
#include <Standard_Transient.hxx>
#include <PTColStd_MapPersistentHasher.hxx>
#include <PTColStd_PersistentTransientMap.hxx>
#include <PTColStd_DataMapIteratorOfPersistentTransientMap.hxx>

 


IMPLEMENT_STANDARD_TYPE(PTColStd_DataMapNodeOfPersistentTransientMap)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(TCollection_MapNode),
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(PTColStd_DataMapNodeOfPersistentTransientMap)


IMPLEMENT_DOWNCAST(PTColStd_DataMapNodeOfPersistentTransientMap,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(PTColStd_DataMapNodeOfPersistentTransientMap)


#define TheKey Handle(Standard_Persistent)
#define TheKey_hxx <Standard_Persistent.hxx>
#define TheItem Handle(Standard_Transient)
#define TheItem_hxx <Standard_Transient.hxx>
#define Hasher PTColStd_MapPersistentHasher
#define Hasher_hxx <PTColStd_MapPersistentHasher.hxx>
#define TCollection_DataMapNode PTColStd_DataMapNodeOfPersistentTransientMap
#define TCollection_DataMapNode_hxx <PTColStd_DataMapNodeOfPersistentTransientMap.hxx>
#define TCollection_DataMapIterator PTColStd_DataMapIteratorOfPersistentTransientMap
#define TCollection_DataMapIterator_hxx <PTColStd_DataMapIteratorOfPersistentTransientMap.hxx>
#define Handle_TCollection_DataMapNode Handle_PTColStd_DataMapNodeOfPersistentTransientMap
#define TCollection_DataMapNode_Type_() PTColStd_DataMapNodeOfPersistentTransientMap_Type_()
#define TCollection_DataMap PTColStd_PersistentTransientMap
#define TCollection_DataMap_hxx <PTColStd_PersistentTransientMap.hxx>
#include <TCollection_DataMapNode.gxx>

