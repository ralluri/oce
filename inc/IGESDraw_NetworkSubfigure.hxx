// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDraw_NetworkSubfigure_HeaderFile
#define _IGESDraw_NetworkSubfigure_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDraw_NetworkSubfigure_HeaderFile
#include <Handle_IGESDraw_NetworkSubfigure.hxx>
#endif

#ifndef _Handle_IGESDraw_NetworkSubfigureDef_HeaderFile
#include <Handle_IGESDraw_NetworkSubfigureDef.hxx>
#endif
#ifndef _gp_XYZ_HeaderFile
#include <gp_XYZ.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_IGESGraph_TextDisplayTemplate_HeaderFile
#include <Handle_IGESGraph_TextDisplayTemplate.hxx>
#endif
#ifndef _Handle_IGESDraw_HArray1OfConnectPoint_HeaderFile
#include <Handle_IGESDraw_HArray1OfConnectPoint.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESDraw_ConnectPoint_HeaderFile
#include <Handle_IGESDraw_ConnectPoint.hxx>
#endif
class IGESDraw_NetworkSubfigureDef;
class TCollection_HAsciiString;
class IGESGraph_TextDisplayTemplate;
class IGESDraw_HArray1OfConnectPoint;
class Standard_OutOfRange;
class gp_XYZ;
class IGESDraw_ConnectPoint;


//! defines IGES Network Subfigure Instance Entity, <br>
//!           Type <420> Form Number <0> in package IGESDraw <br>
class IGESDraw_NetworkSubfigure : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDraw_NetworkSubfigure();
  //! This method is used to set the fields of the class <br>
//!           NetworkSubfigure <br>
//!       - aDefinition      : Network Subfigure Definition Entity <br>
//!       - aTranslation     : Translation data relative to the model <br>
//!                            space or the definition space <br>
//!       - aScaleFactor     : Scale factors in the definition space <br>
//!       - aTypeFlag        : Type flag <br>
//!       - aDesignator      : Primary reference designator <br>
//!       - aTemplate        : Primary reference designator Text <br>
//!                            display Template Entity <br>
//!       - allConnectPoints : Associated Connect Point Entities <br>
  Standard_EXPORT     void Init(const Handle(IGESDraw_NetworkSubfigureDef)& aDefinition,const gp_XYZ& aTranslation,const gp_XYZ& aScaleFactor,const Standard_Integer aTypeFlag,const Handle(TCollection_HAsciiString)& aDesignator,const Handle(IGESGraph_TextDisplayTemplate)& aTemplate,const Handle(IGESDraw_HArray1OfConnectPoint)& allConnectPoints) ;
  //! returns Network Subfigure Definition Entity specified by this entity <br>
  Standard_EXPORT     Handle_IGESDraw_NetworkSubfigureDef SubfigureDefinition() const;
  //! returns Translation Data relative to either model space or to <br>
//! the definition space of a referring entity <br>
  Standard_EXPORT     gp_XYZ Translation() const;
  //! returns the Transformed Translation Data relative to either model <br>
//! space or to the definition space of a referring entity <br>
  Standard_EXPORT     gp_XYZ TransformedTranslation() const;
  //! returns Scale factor in definition space(x, y, z axes) <br>
  Standard_EXPORT     gp_XYZ ScaleFactors() const;
  //! returns Type Flag which implements the distinction between Logical <br>
//! design and Physical design data,and is required if both are present. <br>
//!         Type Flag = 0 : Not specified (default) <br>
//!                   = 1 : Logical <br>
//!                   = 2 : Physical <br>
  Standard_EXPORT     Standard_Integer TypeFlag() const;
  //! returns the primary reference designator <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString ReferenceDesignator() const;
  //! returns True if Text Display Template Entity is specified, <br>
//! else False <br>
  Standard_EXPORT     Standard_Boolean HasDesignatorTemplate() const;
  //! returns primary reference designator Text Display Template Entity, <br>
//! or null. If null, no Text Display Template Entity specified <br>
  Standard_EXPORT     Handle_IGESGraph_TextDisplayTemplate DesignatorTemplate() const;
  //! returns the number of associated Connect Point Entities <br>
  Standard_EXPORT     Standard_Integer NbConnectPoints() const;
  //! returns the Index'th  associated Connect point Entity <br>
//! raises exception if Index <= 0 or Index > NbConnectPoints() <br>
  Standard_EXPORT     Handle_IGESDraw_ConnectPoint ConnectPoint(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDraw_NetworkSubfigure)

protected:




private: 


Handle_IGESDraw_NetworkSubfigureDef theSubfigureDefinition;
gp_XYZ theTranslation;
gp_XYZ theScaleFactor;
Standard_Integer theTypeFlag;
Handle_TCollection_HAsciiString theDesignator;
Handle_IGESGraph_TextDisplayTemplate theDesignatorTemplate;
Handle_IGESDraw_HArray1OfConnectPoint theConnectPoints;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif