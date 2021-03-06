// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_ToolDrilledHole_HeaderFile
#define _IGESAppli_ToolDrilledHole_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_IGESAppli_DrilledHole.hxx>
#include <Handle_IGESData_IGESReaderData.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_Message_Messenger.hxx>
#include <Standard_Integer.hxx>
class Standard_DomainError;
class IGESAppli_DrilledHole;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;
class IGESData_IGESDumper;
class Message_Messenger;


//! Tool to work on a DrilledHole. Called by various Modules
//! (ReadWriteModule, GeneralModule, SpecificModule)
class IGESAppli_ToolDrilledHole 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns a ToolDrilledHole, ready to work
  Standard_EXPORT IGESAppli_ToolDrilledHole();
  
  //! Reads own parameters from file. <PR> gives access to them,
  //! <IR> detains parameter types and values
  Standard_EXPORT   void ReadOwnParams (const Handle(IGESAppli_DrilledHole)& ent, const Handle(IGESData_IGESReaderData)& IR, IGESData_ParamReader& PR)  const;
  
  //! Writes own parameters to IGESWriter
  Standard_EXPORT   void WriteOwnParams (const Handle(IGESAppli_DrilledHole)& ent, IGESData_IGESWriter& IW)  const;
  
  //! Lists the Entities shared by a DrilledHole <ent>, from
  //! its specific (own) parameters
  Standard_EXPORT   void OwnShared (const Handle(IGESAppli_DrilledHole)& ent, Interface_EntityIterator& iter)  const;
  
  //! Sets automatic unambiguous Correction on a DrilledHole
  //! (NbPropertyValues forced to 5, Level cleared if Subordinate != 0)
  Standard_EXPORT   Standard_Boolean OwnCorrect (const Handle(IGESAppli_DrilledHole)& ent)  const;
  
  //! Returns specific DirChecker
  Standard_EXPORT   IGESData_DirChecker DirChecker (const Handle(IGESAppli_DrilledHole)& ent)  const;
  
  //! Performs Specific Semantic Check
  Standard_EXPORT   void OwnCheck (const Handle(IGESAppli_DrilledHole)& ent, const Interface_ShareTool& shares, Handle(Interface_Check)& ach)  const;
  
  //! Copies Specific Parameters
  Standard_EXPORT   void OwnCopy (const Handle(IGESAppli_DrilledHole)& entfrom, const Handle(IGESAppli_DrilledHole)& entto, Interface_CopyTool& TC)  const;
  
  //! Dump of Specific Parameters
  Standard_EXPORT   void OwnDump (const Handle(IGESAppli_DrilledHole)& ent, const IGESData_IGESDumper& dumper, const Handle(Message_Messenger)& S, const Standard_Integer own)  const;




protected:





private:





};







#endif // _IGESAppli_ToolDrilledHole_HeaderFile
