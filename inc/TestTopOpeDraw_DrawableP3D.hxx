// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_DrawableP3D_HeaderFile
#define _TestTopOpeDraw_DrawableP3D_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TestTopOpeDraw_DrawableP3D.hxx>

#include <gp_Pnt.hxx>
#include <Standard_CString.hxx>
#include <Draw_Color.hxx>
#include <Standard_Real.hxx>
#include <Handle_Draw_Text3D.hxx>
#include <Draw_Marker3D.hxx>
#include <Draw_MarkerShape.hxx>
#include <Standard_Integer.hxx>
class Draw_Text3D;
class gp_Pnt;
class Draw_Color;
class Draw_Display;



class TestTopOpeDraw_DrawableP3D : public Draw_Marker3D
{

public:

  
  Standard_EXPORT TestTopOpeDraw_DrawableP3D(const gp_Pnt& P, const Draw_Color& PColor, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT TestTopOpeDraw_DrawableP3D(const gp_Pnt& P, const Draw_Color& PColor, const Standard_CString Text, const Draw_Color& TextColor, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT TestTopOpeDraw_DrawableP3D(const gp_Pnt& P, const Draw_MarkerShape T, const Draw_Color& PColor, const Standard_CString Text, const Draw_Color& TextColor, const Standard_Integer Size = 2, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT TestTopOpeDraw_DrawableP3D(const gp_Pnt& P, const Draw_MarkerShape T, const Draw_Color& PColor, const Standard_CString Text, const Draw_Color& TextColor, const Standard_Real Tol, const Standard_Real moveX = 0.0, const Standard_Real moveY = 0.0);
  
  Standard_EXPORT   void ChangePnt (const gp_Pnt& P) ;
  
  Standard_EXPORT virtual   void DrawOn (Draw_Display& dis)  const;




  DEFINE_STANDARD_RTTI(TestTopOpeDraw_DrawableP3D)

protected:




private: 


  gp_Pnt myPnt;
  Standard_CString myText;
  Draw_Color myTextColor;
  Standard_Real myMoveX;
  Standard_Real myMoveY;
  Handle(Draw_Text3D) myText3D;


};







#endif // _TestTopOpeDraw_DrawableP3D_HeaderFile
