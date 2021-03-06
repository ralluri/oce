// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_Array1OfFiniteElement_HeaderFile
#define _IGESAppli_Array1OfFiniteElement_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_IGESAppli_FiniteElement.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class IGESAppli_FiniteElement;



class IGESAppli_Array1OfFiniteElement 
{
public:

  DEFINE_STANDARD_ALLOC

  
    IGESAppli_Array1OfFiniteElement(const Standard_Integer Low, const Standard_Integer Up);
  
    IGESAppli_Array1OfFiniteElement(const Handle(IGESAppli_FiniteElement)& Item, const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT   void Init (const Handle(IGESAppli_FiniteElement)& V) ;
  
      void Destroy() ;
~IGESAppli_Array1OfFiniteElement()
{
  Destroy();
}
  
      Standard_Boolean IsAllocated()  const;
  
  Standard_EXPORT  const  IGESAppli_Array1OfFiniteElement& Assign (const IGESAppli_Array1OfFiniteElement& Other) ;
 const  IGESAppli_Array1OfFiniteElement& operator = (const IGESAppli_Array1OfFiniteElement& Other) 
{
  return Assign(Other);
}
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const Handle(IGESAppli_FiniteElement)& Value) ;
  
     const  Handle(IGESAppli_FiniteElement)& Value (const Standard_Integer Index)  const;
   const  Handle(IGESAppli_FiniteElement)& operator () (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
      Handle(IGESAppli_FiniteElement)& ChangeValue (const Standard_Integer Index) ;
    Handle(IGESAppli_FiniteElement)& operator () (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}




protected:





private:

  
  Standard_EXPORT IGESAppli_Array1OfFiniteElement(const IGESAppli_Array1OfFiniteElement& AnArray);


  Standard_Integer myLowerBound;
  Standard_Integer myUpperBound;
  Standard_Address myStart;
  Standard_Boolean isAllocated;


};

#define Array1Item Handle(IGESAppli_FiniteElement)
#define Array1Item_hxx <IGESAppli_FiniteElement.hxx>
#define TCollection_Array1 IGESAppli_Array1OfFiniteElement
#define TCollection_Array1_hxx <IGESAppli_Array1OfFiniteElement.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx




#endif // _IGESAppli_Array1OfFiniteElement_HeaderFile
