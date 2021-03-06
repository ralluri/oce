// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepAlgoAPI_Section_HeaderFile
#define _BRepAlgoAPI_Section_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include <Handle_Geom_Surface.hxx>
class TopoDS_Shape;
class BOPAlgo_PaveFiller;
class gp_Pln;
class Geom_Surface;


//! Computes the intersection of two shapes or geometries.
//! Geometries can be surfaces of planes.
//! Geometries are converted to faces
//! When a geometry has been converted to
//! topology the created shape can be found using
//! the methods Shape1 and Shape2 inherited from the class BooleanOperation.
//! The result (Shape() method) is a compound containing
//! edges built on intersection curves.
//! By default, the section is performed immediatly in
//! class constructors, with default values :
//! - geometries built are NOT approximated.
//! - PCurves are NOT computed on both parts.
//! Example : giving two shapes S1,S2 accessing faces,
//! let compute the section edges R on S1,S2,
//! performing approximation on new curves,
//! performing PCurve on part 1 but not on part 2 :
//! Standard_Boolean PerformNow = Standard_False;
//! BRepBoolAPI_Section S(S1,S2,PerformNow);
//! S.ComputePCurveOn1(Standard_True);
//! S.Approximation(Standard_True);
//! S.Build();
//! TopoDS_Shape R = S.Shape();
//! On Null Shapes of geometries, NotDone() is called.
class BRepAlgoAPI_Section  : public BRepAlgoAPI_BooleanOperation
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT BRepAlgoAPI_Section(const TopoDS_Shape& S1, const TopoDS_Shape& S2, const BOPAlgo_PaveFiller& aDSF, const Standard_Boolean PerformNow = Standard_True);
Standard_EXPORT virtual ~BRepAlgoAPI_Section(){}
  
  //! see upper
  Standard_EXPORT BRepAlgoAPI_Section(const TopoDS_Shape& Sh1, const TopoDS_Shape& Sh2, const Standard_Boolean PerformNow = Standard_True);
  
  //! see upper
  Standard_EXPORT BRepAlgoAPI_Section(const TopoDS_Shape& Sh, const gp_Pln& Pl, const Standard_Boolean PerformNow = Standard_True);
  
  //! see upper
  Standard_EXPORT BRepAlgoAPI_Section(const TopoDS_Shape& Sh, const Handle(Geom_Surface)& Sf, const Standard_Boolean PerformNow = Standard_True);
  
  //! see upper
  Standard_EXPORT BRepAlgoAPI_Section(const Handle(Geom_Surface)& Sf, const TopoDS_Shape& Sh, const Standard_Boolean PerformNow = Standard_True);
  
  //! This and the above classes construct a framework for
  //! computing the section lines of:
  //! -       two shapes Sh1 and Sh2, or
  //! -       shape Sh and plane Pl,  or
  //! -       shape Sh and surface Sf, or
  //! -       surface Sf and shape Sh, or
  //! -       two surfaces Sf1 and Sf2,
  //! and builds a result if PerformNow equals true, its
  //! default value. If PerformNow equals false, the intersection
  //! will be computed later by the function Build.
  //! The constructed shape will be returned by the function Shape.
  //! This is a compound object composed of edges. These
  //! intersection edges may be built:
  //! -      on new intersection lines, or
  //! -      on coincident portions of edges in the two intersected    shapes.
  //! These intersection edges are independent: they are not
  //! chained or grouped in wires. If no intersection edge exists, the
  //! result is an empty compound object.
  //! Note that other objects than TopoDS_Shape shapes involved in
  //! these syntaxes are converted into faces or shells before
  //! performing the computation of the intersection. A shape
  //! resulting from this conversion can be retrieved with the
  //! function Shape1 or Shape2.
  //! Parametric 2D curves on intersection edges
  //! No parametric 2D curve (pcurve) is defined for each elementary
  //! edge of the result. To attach such parametric curves to the
  //! constructed edges you may use a constructor with the PerformNow
  //! flag equal to false; then you use:
  //! -      the function ComputePCurveOn1 to ask for
  //! the additional computation of a pcurve in the parametric
  //! space of the first shape,
  //! -      the function ComputePCurveOn2 to ask for
  //! the additional computation of a pcurve in the parametric
  //! space of the second shape, in the end,
  //! -      the function Build to construct the result.
  //! Approximation of intersection edges
  //! The underlying 3D geometry attached to each elementary edge
  //! of the result is:
  //! -       analytic where possible, provided the corresponding
  //! geometry corresponds to a type of analytic curve
  //! defined in the Geom package; for example, the intersection
  //! of a cylindrical shape with a plane gives an ellipse or a    circle;
  //! -       or elsewhere, given as a succession of points grouped
  //! together in a BSpline curve of degree 1.
  //! If you prefer to have an attached 3D geometry which is a
  //! BSpline approximation of the computed set of points on
  //! computed elementary intersection edges whose underlying geometry
  //! is not analytic, you may use a constructor with the PerformNow
  //! flag equal to false. Then you use:
  //! -      the function Approximation to ask for this
  //! computation option, and
  //! -      the function Build to construct the result.
  //! -      Note that as a result, approximations will only be
  //! computed on edges built on new intersection lines.
  //! -      Example
  //! You may also combine these computation options. In the following example:
  //! - each elementary edge of the computed intersection,
  //! built on a new intersection line, which does not
  //! correspond to an analytic Geom curve, will be approximated by
  //! a BSpline curve whose degree is not greater than 8.
  //! - each elementary edge built on a new intersection line, will have:
  //! - a pcurve in the parametric space of the intersected face of shape S1,
  //! - no pcurve in the parametric space of the intersected face of shape S2.
  //! // TopoDS_Shape S1 = ... , S2 = ... ;
  //! Standard_Boolean PerformNow = Standard_False;
  //! BRepAlgoAPI_Section S ( S1, S2, PerformNow );
  //! S.ComputePCurveOn1 (Standard_True);
  //! S.Approximation (Standard_True);
  //! S.Build();
  //! TopoDS_Shape R = S.Shape();
  Standard_EXPORT BRepAlgoAPI_Section(const Handle(Geom_Surface)& Sf1, const Handle(Geom_Surface)& Sf2, const Standard_Boolean PerformNow = Standard_True);
  
  //! initialize first part
  Standard_EXPORT   void Init1 (const TopoDS_Shape& S1) ;
  
  //! initialize first part
  Standard_EXPORT   void Init1 (const gp_Pln& Pl) ;
  
  //! initialize first part
  Standard_EXPORT   void Init1 (const Handle(Geom_Surface)& Sf) ;
  
  //! initialize second part
  Standard_EXPORT   void Init2 (const TopoDS_Shape& S2) ;
  
  //! initialize second part
  Standard_EXPORT   void Init2 (const gp_Pln& Pl) ;
  
  //! Reinitializes the first and the
  //! second parts on which this algorithm is going to perform
  //! the intersection computation. This is done with either: the
  //! surface Sf, the plane Pl or the shape Sh.
  //! You use the function Build to construct the result.
  Standard_EXPORT   void Init2 (const Handle(Geom_Surface)& Sf) ;
  
  //! Defines an option for computation
  //! of further intersections. This computation will be performed by
  //! the function Build in this framework.
  //! By default, the underlying 3D geometry attached to each
  //! elementary edge of the result of a computed intersection is:
  //! - analytic where possible, provided the corresponding
  //! geometry corresponds to a type of analytic curve defined in
  //! the Geom package; for example the intersection of a
  //! cylindrical shape with a plane gives an ellipse or a circle;
  //! -      or elsewhere, given as a succession of points grouped
  //! together in a BSpline curve of degree 1. If Approx equals
  //! true, when further computations are performed in this framework
  //! with the function Build, these edges will have an attached 3D
  //! geometry which is a BSpline approximation of the computed
  //! set of points.
  //! Note that as a result, approximations will be computed
  //! on edges built only on new intersection lines.
  Standard_EXPORT   void Approximation (const Standard_Boolean B) ;
  

  //! Indicates if the Pcurve must be (or not) performed on first part.
  Standard_EXPORT   void ComputePCurveOn1 (const Standard_Boolean B) ;
  
  //! Define options for the computation of further
  //! intersections, which will be performed by the function Build
  //! in this framework.
  //! By default, no parametric 2D curve (pcurve) is defined for the
  //! elementary edges of the result. If ComputePCurve1 equals true,
  //! further computations performed in this framework with the function
  //! Build will attach an additional pcurve in the parametric space of
  //! the first shape to the constructed edges.
  //! If ComputePCurve2 equals true, the additional pcurve will be
  //! attached to the constructed edges in the parametric space of the
  //! second shape.
  //! These two functions may be used together.
  Standard_EXPORT   void ComputePCurveOn2 (const Standard_Boolean B) ;
  
  //! Performs the computation of
  //! section lines between two parts defined at the time of
  //! construction of this framework or reinitialized with the Init1 and
  //! Init2 functions.
  //! The constructed shape will be returned by the function Shape.
  //! This is a compound object composed of edges. These
  //! intersection edges may be built:
  //! -      on new intersection lines, or
  //! -      on coincident portions of edges in the two intersected shapes.
  //! These intersection edges are independent: they are not chained
  //! or grouped into wires.
  //! If no intersection edge exists, the result is an empty compound object.
  //! The shapes involved in the construction of section lines can
  //! be retrieved with the function Shape1 or Shape2. Note that other
  //! objects than TopoDS_Shape shapes given as arguments at the
  //! construction time of this framework, or to the Init1 or
  //! Init2 function, are converted into faces or shells before
  //! performing the computation of the intersection.
  //! Parametric 2D curves on intersection edges
  //! No parametric 2D curve (pcurve) is defined for the elementary
  //! edges of the result. To attach parametric curves like this to
  //! the constructed edges you have to use:
  //! -      the function
  //! ComputePCurveOn1 to ask for the additional computation of a
  //! pcurve in the parametric space of the first shape,
  //! -      the function
  //! ComputePCurveOn2 to ask for the additional computation of a
  //! pcurve in the parametric space of the second shape.
  //! This must be done before calling this function.
  //! Approximation of intersection edges
  //! The underlying 3D geometry attached to each elementary edge of the result is:
  //! -      analytic (where possible) provided the corresponding
  //! geometry corresponds to a type of analytic curve defined in
  //! the Geom package; for example, the intersection of a
  //! cylindrical shape with a plane gives an ellipse or a circle;    or
  //! -      elsewhere, given as a succession of points grouped
  //! together in a BSpline curve of degree 1.
  //! If, on computed elementary intersection edges whose
  //! underlying geometry is not analytic, you prefer to have an
  //! attached 3D geometry which is a Bspline approximation of the
  //! computed set of points, you have to use the function Approximation
  //! to ask for this computation option before calling this function.
  //! You may also have combined these computation options: look at the
  //! example given above to illustrate the use of the constructors.
  Standard_EXPORT   void Build() ;
  

  //! get the face of the first part giving section edge <E>.
  //! Returns True on the 3 following conditions :
  //! 1/ <E> is an edge returned by the Shape() method.
  //! 2/ First part of section performed is a shape.
  //! 3/ <E> is built on a intersection curve (i.e <E>
  //! is not the result of common edges)
  //! When False, F remains untouched.
  Standard_EXPORT   Standard_Boolean HasAncestorFaceOn1 (const TopoDS_Shape& E, TopoDS_Shape& F)  const;
  
  //! Identifies the ancestor faces of
  //! the intersection edge E resulting from the last
  //! computation performed in this framework, that is, the faces of
  //! the two original shapes on which the edge E lies:
  //! -      HasAncestorFaceOn1 gives the ancestor face in the first shape, and
  //! -      HasAncestorFaceOn2 gives the ancestor face in the second shape.
  //! These functions return true if an ancestor face F is found, or false if not.
  //! An ancestor face is identifiable for the edge E if the following
  //! conditions are satisfied:
  //! -  the first part on which this algorithm performed its
  //! last computation is a shape, that is, it was not given as
  //! a surface or a plane at the time of construction of this
  //! algorithm or at a later time by the Init1 function,
  //! - E is one of the elementary edges built by the
  //! last computation of this section algorithm.
  //! To use these functions properly, you have to test the returned
  //! Boolean value before using the ancestor face: F is significant
  //! only if the returned Boolean value equals true.
  Standard_EXPORT   Standard_Boolean HasAncestorFaceOn2 (const TopoDS_Shape& E, TopoDS_Shape& F)  const;




protected:





private:

  
  Standard_EXPORT   void InitParameters() ;


  Standard_Boolean myshapeisnull;
  Standard_Boolean myparameterschanged;
  Standard_Boolean myApprox;
  Standard_Boolean myComputePCurve1;
  Standard_Boolean myComputePCurve2;


};







#endif // _BRepAlgoAPI_Section_HeaderFile
