
#include <GeomAPI_IntCS.hxx>
#include <GC_MakeLine.hxx>
#include <ElSLib.hxx>
#include <ProjLib.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_OffsetSurface.hxx>
#include <GeomToIGES_GeomSurface.hxx>
#include <BRepTools.hxx>
#include <Standard_DefineHandle.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <GCPnts_TangentialDeflection.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Line.hxx>
#include <Geom_Surface.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <GeomAbs_CurveType.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <GeomTools_Curve2dSet.hxx>
#include <gp_Vec.hxx>
#include <Graphic3d_NameOfMaterial.hxx>
#include <MMgt_TShared.hxx>
#include <OSD_Environment.hxx>
#include <Precision.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_Projector.hxx>
#include <Prs3d_Text.hxx>
#include <Quantity_Factor.hxx>
#include <Quantity_Length.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_PhysicalQuantity.hxx>
#include <Quantity_PlaneAngle.hxx>
#include <Quantity_TypeOfColor.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_Selection.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_ListOfFilter.hxx>
#include <SelectMgr_Filter.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_CString.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Integer.hxx>
#include <Standard_IStream.hxx>
#include <Standard_Macro.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_OStream.hxx>
#include <Standard_Real.hxx>
#include <StdPrs_Curve.hxx>
#include <StdPrs_Point.hxx>
#include <StdPrs_PoleCurve.hxx>
#include <TCollection_AsciiString.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TColgp_HArray1OfPnt2d.hxx>
#include <TCollection_AsciiString.hxx>
#include <TColStd_HSequenceOfTransient.hxx>
#include <TColStd_MapIteratorOfMapOfTransient.hxx>
#include <TColStd_MapOfTransient.hxx>
#include <TopExp_Explorer.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopExp.hxx>
#include <TopTools_HSequenceOfShape.hxx>
#include <UnitsAPI.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>
#include <WNT_Window.hxx>
#include <Prs3d_PointAspect.hxx>
#include <AIS_Point.hxx>
#include <BRep_Tool.hxx>
#include <BRepAlgoAPI_Fuse.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepPrimAPI_MakeCone.hxx>
#include <BRepPrimAPI_MakeRevol.hxx>
#include <BRepFilletAPI_MakeFillet.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepLib.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>
#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepPrimAPI_MakePrism.hxx>
#include <BRepPrimAPI_MakeTorus.hxx>
#include <BRepAlgoAPI_Section.hxx>
#include <BRepPrimAPI_MakeSphere.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <TColgp_HArray1OfPnt.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeSegment.hxx>
#include <GC_MakeCircle.hxx>
#include <GCE2d_MakeSegment.hxx>
#include <gp.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Trsf.hxx>
#include <gp_Vec.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Surface.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <TopExp_Explorer.hxx>
#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Compound.hxx>
#include <GCPnts_AbscissaPoint.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <GeomLib.hxx>
#include <GeomConvert_CompCurveToBSplineCurve.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_ListIteratorOfListOfShape.hxx>
#include <TopTools_DataMapOfShapeInteger.hxx>
#include <TopTools_DataMapOfShapeReal.hxx>
#include <TopTools_IndexedDataMapOfShapeAddress.hxx>
#include <V3d_PositionalLight.hxx>
#include <V3d_DirectionalLight.hxx>
#include <V3d_AmbientLight.hxx>
#include <IGESControl_Controller.hxx>
#include <IGESControl_Writer.hxx>
#include <Interface_Static.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Xw_Window.hxx>
#include <V3d_View.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Aspect_Handle.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <WNT_Window.hxx>
#include <TopoDS_Shape.hxx>
#include <AIS_Shape.hxx>
#include <BRepAlgo.hxx>
#include <BRepAlgo_Common.hxx>
#include <BRepAlgoAPI_Common.hxx>
#include <BRepAlgoAPI_Algo.hxx>
#include <BRep_Tool.hxx>

#include <BRepAlgoAPI_Fuse.hxx>

#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_Transform.hxx>

#include <BRepFilletAPI_MakeFillet.hxx>

#include <BRepLib.hxx>

#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>

#include <BRepPrimAPI_MakeCylinder.hxx>
#include <BRepPrimAPI_MakePrism.hxx>

#include <GC_MakeArcOfCircle.hxx>
#include <GC_MakeSegment.hxx>

#include <GCE2d_MakeSegment.hxx>

#include <gp.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Ax2d.hxx>
#include <gp_Dir.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Pnt.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Trsf.hxx>
#include <gp_Vec.hxx>

#include <Geom_CylindricalSurface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Surface.hxx>
#include <Geom_TrimmedCurve.hxx>

#include <Geom2d_Ellipse.hxx>
#include <Geom2d_TrimmedCurve.hxx>

#include <TopExp_Explorer.hxx>

#include <TopoDS.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Compound.hxx>

#include <TopTools_ListOfShape.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <V3d_Coordinate.hxx>
#include <BRepOffsetAPI_MakePipeShell.hxx>
#include <BRepAlgoAPI_Cut.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <Standard_PrimitiveTypes.hxx>
#include <GProp_GProps.hxx>
#include <BRepGProp.hxx>
#include <Law_Linear.hxx>
 #include <GeomToStep_MakeCartesianPoint.hxx>
 #include <GeomToStep_MakePolyline.hxx>
 #include <gp_Pnt.hxx>
 #include <gp_Pnt2d.hxx>
 #include <StdFail_NotDone.hxx>
 #include <StepGeom_HArray1OfCartesianPoint.hxx>
 #include <StepGeom_Polyline.hxx>
 #include <TColgp_Array1OfPnt.hxx>
 #include <TColgp_Array1OfPnt2d.hxx>
 #include <TCollection_HAsciiString.hxx>
 #include <Geom_BezierCurve.hxx>
 #include <TColgp_Array1OfPnt.hxx>
 #include <GeomFill_Pipe.hxx>
 #include <Geom_Surface.hxx>
 #include <TColgp_Array1OfPnt2d.hxx>
 #include <Geom2d_BezierCurve.hxx>
 #include <TColgp_Array2OfPnt.hxx>
 #include <Geom_BezierSurface.hxx>
 #include <Geom2dAdaptor_HCurve.hxx>
 #include <GeomAdaptor_HSurface.hxx>
 #include <Approx_CurveOnSurface.hxx>
 #include <TopoDS_Wire.hxx>
 #include <TopoDS_Edge.hxx>
 #include <BRepBuilderAPI_MakeEdge.hxx>
 #include <BRepBuilderAPI_MakeWire.hxx>
 #include <BRepOffsetAPI_MakePipe.hxx>
 #include <BRepOffsetAPI_MakePipeShell.hxx>
 #include <Law_Interpol.hxx>
 #include <BRepBuilderAPI_TransitionMode.hxx>
 #include <TColStd_Array1OfReal.hxx>
 #include <TColStd_Array1OfInteger.hxx>
 #include <Geom_BSplineCurve.hxx>
 #include <BRepBuilderAPI_MakePolygon.hxx>
#include <math.hxx>
#include <vector>
#include <BRepTools_WireExplorer.hxx>
#include <IntAna_IntConicQuad.hxx>
#include <ProjLib_ProjectOnPlane.hxx>
#include <Geom_Line.hxx>
#include <Graphic3d_Texture2Dmanual.hxx>
#include <QString>
#include <QStringList>
#include <AIS_InteractiveContext.hxx>
#include <AIS_Shape.hxx>
#include "occ_helper_functions.h"






using namespace std;

OCC_functions::~OCC_functions()
{
}

 OCC_functions::OCC_functions( Handle(V3d_View) View, Handle(AIS_InteractiveContext) Context)
{
     myGlobalView     = View;
     myGlobalContext  = Context;
     GLine = new GhostLine(View,Context);

}

 void OCC_functions::DrawPoint(gp_Pnt aPoint )
{
    TopoDS_Vertex V1 = BRepBuilderAPI_MakeVertex( aPoint );

    // Create the AIS_Shape
    Handle(AIS_Shape) aShape = new AIS_Shape(V1);

    // Set the vertex shape, color, and size
    Quantity_Color color(Quantity_NOC_YELLOW);
    Handle_Prs3d_PointAspect myPointAspect=new Prs3d_PointAspect(Aspect_TOM_O,color,1);
    aShape->Attributes()->SetPointAspect(myPointAspect);
    myGlobalContext->Display(aShape,true);
}

 void OCC_functions::DivideToPointsOnLine(gp_Pnt sPt,gp_Pnt ePt,int Quantity)
{
  Standard_Real distance = sPt.Distance(ePt);
  Standard_Real newLength = distance / Quantity;
  gp_Dir dir = gp_Dir(gp_Vec(sPt,ePt));
  gp_Pnt P = sPt;
  for (int i=1 ; i<Quantity;i++)
  {
  P.Translate(dir.XYZ()*newLength*i);
  DrawPoint(P);
  P = sPt;
  }

}

 void OCC_functions::ExtractLinesCoordinates(gp_Pnt& sPt,gp_Pnt& ePt)
{

    myGlobalContext->InitSelected();
    while(myGlobalContext->MoreSelected())
    {
    if(myGlobalContext->HasSelectedShape() && myGlobalContext->SelectedShape().ShapeType() == TopAbs_EDGE)
    {

    TopoDS_Shape myLine = myGlobalContext->SelectedShape();
    //
    TopoDS_Shape aShape = myLine; // Your initial shape.
    for (TopExp_Explorer anExp(aShape, TopAbs_EDGE); anExp.More(); anExp.Next())
    {
      // Iterate over edges in input shape.
       const TopoDS_Edge& anEdge = TopoDS::Edge(anExp.Current());

      // Take the first and the last vertices from edge
      TopoDS_Vertex aVFirst = TopExp::FirstVertex(anEdge);
      TopoDS_Vertex aVLast  = TopExp::LastVertex(anEdge);

      // Take geometrical information from vertices.
       sPt = BRep_Tool::Pnt(aVFirst);
       ePt = BRep_Tool::Pnt(aVLast);
    }
    //

    }
    else
    {

    }

    myGlobalContext->NextSelected();
    }

    myGlobalContext->ClearSelected(true);

}





 gp_Pnt OCC_functions::ConvertClickToPoint(Standard_Real x, Standard_Real y)
{

    Standard_Real XEye,YEye,ZEye,XAt,YAt,ZAt;
    myGlobalView->Eye(XEye,YEye,ZEye);
    myGlobalView->At(XAt,YAt,ZAt);
    gp_Pnt EyePoint(XEye,YEye,ZEye);
    gp_Pnt AtPoint(XAt,YAt,ZAt);

    gp_Vec EyeVector(EyePoint,AtPoint);
    gp_Dir EyeDir(EyeVector);

    gp_Pln PlaneOfTheView = gp_Pln(AtPoint,EyeDir);
    Standard_Real X,Y,Z;
    myGlobalView->Convert(int(x),int(y),X,Y,Z);
    gp_Pnt ConvertedPoint(X,Y,Z);
    gp_Pnt2d ConvertedPointOnPlane = ProjLib::Project(PlaneOfTheView,ConvertedPoint);

    gp_Pnt ResultPoint = ElSLib::Value(ConvertedPointOnPlane.X(),
                                    ConvertedPointOnPlane.Y(),
                                    PlaneOfTheView);
    return ResultPoint;
}


 gp_Pnt OCC_functions::PickPoint( TopoDS_Shape myShape, long x, long y)
{
    V3d_Coordinate xEye, yEye, zEye, xAt, yAt, zAt;
    gp_Pnt resultPoint;

    myGlobalView->Eye(xEye, yEye, zEye);
    myGlobalView->At(xAt, yAt, zAt);
    gp_Pnt EyePoint(xEye, yEye, zEye);
    gp_Pnt AtPoint(xAt, yAt, zAt);

    gp_Vec EyeVector(EyePoint, AtPoint);
    gp_Dir EyeDir(EyeVector);

    gp_Pln PlaneOfView = gp_Pln(AtPoint, EyeDir);

    Standard_Real theX, theY, theZ;
    myGlobalView->Convert(x, y, theX, theY, theZ);
    gp_Pnt ConvertedPoint(theX, theY, theZ);

    gp_Pnt2d ConvertedPointOnPlane = ProjLib::Project(PlaneOfView, ConvertedPoint);

    gp_Pnt shapePoint = ElSLib::Value(ConvertedPointOnPlane.X(), ConvertedPointOnPlane.Y(), PlaneOfView);
    resultPoint = shapePoint;

    GC_MakeLine line(EyePoint, shapePoint);
    TopExp_Explorer exp;
    TopAbs_State aState;


    for (exp.Init(myShape, TopAbs_FACE); exp.More(); exp.Next())
    {
        TopoDS_Face face = TopoDS::Face(exp.Current());
        BRepAdaptor_Surface surface(face);
         const GeomAdaptor_Surface& geomAdapSurf = surface.Surface();
         const Handle(Geom_Surface)& geomSurf = geomAdapSurf.Surface();

        GeomAPI_IntCS inCS;
        inCS.Perform(line.Value(), geomSurf);
        if (inCS.IsDone())
        {
            if (inCS.NbPoints() != 0)
            {
                shapePoint = gp_Pnt(inCS.Point(1).XYZ());

                ShapeAnalysis_Surface shapeAnalysis(geomSurf);
                gp_Pnt2d shapePoint2D = shapeAnalysis.ValueOfUV(shapePoint, Precision::Confusion());
                BRepClass_FaceClassifier aClassifier(face, shapePoint2D, Precision::Confusion());
                aState = aClassifier.State();
                if ((aState == TopAbs_ON) || (aState == TopAbs_IN))
                {
                    if (resultPoint.Distance(EyePoint) > shapePoint.Distance(shapePoint))
                    {
                        resultPoint = shapePoint;
                    }
                }
            }
        }
    }
    return resultPoint;
}


 vector<gp_Pnt> OCC_functions::extract_points()
{
 BRepTools_WireExplorer ex;
 vector<gp_Pnt> points;
    AIS_ListOfInteractive objList;
    myGlobalContext->DisplayedObjects(objList);
    AIS_ListIteratorOfListOfInteractive iter;
    for(iter.Initialize(objList); iter.More(); iter.Next())
    {
    Handle(AIS_InteractiveObject) aisShp = iter.Value();
    if(aisShp->IsKind("AIS_Shape"))
    {
    TopoDS_Shape myShape = Handle(AIS_Shape)::DownCast(aisShp)->Shape();
    //now you that you got your shape, do something with it
    if (myShape.ShapeType() == TopAbs_WIRE)
    {
        TopoDS_Wire W = TopoDS::Wire(myShape);
        ex = BRepTools_WireExplorer(W);
        while (ex.More()== true)
        {
            TopoDS_Vertex vertex = ex.CurrentVertex();
            gp_Pnt pt = BRep_Tool::Pnt(vertex);
            points.push_back(pt);
            ex.Next();
        }
    };
};

};
    return points;
}

void OCC_functions::CreateClipPlane(gp_Pln ClipPlane1,gp_Pln ClipPlane2)
{
     const Handle(Graphic3d_ClipPlane)& aClipPlane1 = new Graphic3d_ClipPlane();
    aClipPlane1->SetEquation (ClipPlane1);
    aClipPlane1->SetCapping (true);
    myGlobalView->AddClipPlane (aClipPlane1);
    aClipPlane1->SetOn(Standard_True);
//
     const Handle(Graphic3d_ClipPlane)& aClipPlane2 = new Graphic3d_ClipPlane();
    aClipPlane2->SetEquation (ClipPlane2);
    aClipPlane2->SetCapping (true);
    myGlobalView->AddClipPlane (aClipPlane2);
    aClipPlane2->SetOn(Standard_True);

    // update the view

    myGlobalView->Update();

}

void OCC_functions::drawLine(gp_Pnt pt1,gp_Pnt pt2,int i)
{
    Handle(Geom_TrimmedCurve) aSegment1 = GC_MakeSegment(pt1, pt2);
    TopoDS_Edge anEdge1 = BRepBuilderAPI_MakeEdge(aSegment1);
    TopoDS_Wire threadingWire1 = BRepBuilderAPI_MakeWire(anEdge1, anEdge1);
    Handle_Prs3d_LineAspect lineAspectDotDash = new Prs3d_LineAspect(Quantity_NOC_WHITE, Aspect_TOL_DOTDASH, 1);
    Handle_Prs3d_LineAspect lineAspectSolid = new Prs3d_LineAspect(Quantity_NOC_WHITE, Aspect_TOL_SOLID, 1);



     Handle(AIS_Shape) aisBody1 = new AIS_Shape(threadingWire1);
     switch (i)
     {
         case 0:
         {
           aisBody1->Attributes()->SetWireAspect(lineAspectDotDash);
           myGlobalContext->SetColor(aisBody1,Quantity_NOC_YELLOW,Standard_False);
           xGrid.push_back(aisBody1);

         };break;
         case 1:
         {
           aisBody1->Attributes()->SetWireAspect(lineAspectDotDash);
           myGlobalContext->SetColor(aisBody1,Quantity_NOC_YELLOW,Standard_False);
           yGrid.push_back(aisBody1);
         };break;
         case 2:
         {
          aisBody1->Attributes()->SetWireAspect(lineAspectDotDash);
          myGlobalContext->SetColor(aisBody1,Quantity_NOC_YELLOW,Standard_False);
          zGrid.push_back(aisBody1);
         };break;
         case 4:
         {
             aisBody1->Attributes()->SetWireAspect(lineAspectSolid);
             myGlobalContext->SetColor(aisBody1,Quantity_NOC_WHITE,Standard_False);
         };break;

     }
 //   myGlobalContext->SetMaterial(aisBody1,Graphic3d_NOM_PLASTIC,Standard_False);
     myGlobalContext->Display(aisBody1,Standard_False,Standard_False,Standard_False);


}

void OCC_functions::CreateMainGrid(gp_Pnt start_Point ,QString XValues,QString YValues,QString ZValues,int dir)
{
 QStringList *XV,*YV,*ZV;
 vector<Standard_Real> Xn,Yn,Zn;
 gp_Pnt pt1,pt2;
 Standard_Real Xmax,Ymax,Zmax;
 Standard_Real Xcur,Ycur,Zcur;
 Xcur =0;
 Ycur =0;
 Zcur =0;

 XV = new (QStringList);
 YV = new (QStringList);
 ZV = new (QStringList);


 *XV = XValues.split(QRegExp(" "), QString::SkipEmptyParts);
 *YV = YValues.split(QRegExp(" "), QString::SkipEmptyParts);
 *ZV = ZValues.split(QRegExp(" "), QString::SkipEmptyParts);

 Xn.push_back(Standard_Real(0));
 for (int i=0;i<XV->size();i++)
 {
     Xn.push_back(XV->at(i).toFloat());
     Xmax += XV->at(i).toFloat();
 };

 Yn.push_back(Standard_Real(0));
 for (int i=0;i<YV->size();i++)
 {
     Yn.push_back(YV->at(i).toFloat());
     Ymax += YV->at(i).toFloat();
 };
 Zn.push_back(Standard_Real(0));
 for (int i=0;i<ZV->size();i++)
 {
     Zn.push_back(ZV->at(i).toFloat());
     Zmax += ZV->at(i).toFloat();
 };

//  Xmax = *max_element(Xn.begin(), Xn.end());
//  Ymax = *max_element(Yn.begin(), Yn.end());
//  Zmax = *max_element(Zn.begin(), Zn.end());




// XY Axis
    for (int z=0;z<Zn.size();z++)
{
        Zcur+=Zn[z];
        Xcur =0;
        Ycur =0;

    for (int j=0;j<Yn.size();j++)
    {
        Ycur += Yn[j];

    for (int i=0;i<Xn.size();i++)
    {
          pt1 = gp_Pnt(start_Point.X(),     start_Point.Y()+Ycur,start_Point.Z()+Zcur);
          pt2 = gp_Pnt(start_Point.X()+Xmax,start_Point.Y()+Ycur,start_Point.Z()+Zcur);
          drawLine(pt1,pt2,0);
    }
    }



    for (int j=0;j<Xn.size();j++)
    {
        Xcur += Xn[j];

    for (int i=0;i<Yn.size();i++)
    {
          pt1 = gp_Pnt(start_Point.X()+Xcur,start_Point.Y(),start_Point.Z()+Zcur);
          pt2 = gp_Pnt(start_Point.X()+Xcur,start_Point.Y()+Ymax,start_Point.Z()+Zcur);
          drawLine(pt1,pt2,0);
    }
    }
}

    Xcur =0;
    Ycur =0;
    Zcur =0;

// XZ Axis

    for (int y=0;y<Yn.size();y++)
{
        Ycur+=Yn[y];
        Xcur =0;
        Zcur =0;
    for (int j=0;j<Zn.size();j++)
    {
        Zcur += Zn[j];

    for (int i=0;i<Xn.size();i++)
    {
          pt1 = gp_Pnt(start_Point.X(),  start_Point.Y()+Ycur   ,start_Point.Z()+Zcur);
          pt2 = gp_Pnt(start_Point.X()+Xmax,start_Point.Y()+Ycur,start_Point.Z()+Zcur);
          drawLine(pt1,pt2,1);
    }
    }



    for (int j=0;j<Xn.size();j++)
    {
        Xcur += Xn[j];

    for (int i=0;i<Zn.size();i++)
    {
          pt1 = gp_Pnt(start_Point.X()+Xcur, start_Point.Y()+Ycur,start_Point.Z());
          pt2 = gp_Pnt(start_Point.X()+Xcur, start_Point.Y()+Ycur,start_Point.Z()+Zmax);
          drawLine(pt1,pt2,1);
    }
    }
}
    Xcur =0;
    Ycur =0;
    Zcur =0;

    // YZ Axis

    for (int x=0;x<Xn.size();x++)
{
        Xcur+=Xn[x];
        Zcur =0;
        Ycur =0;
    for (int j=0;j<Zn.size();j++)
    {
        Zcur += Zn[j];

    for (int i=0;i<Yn.size();i++)
    {
          pt1 = gp_Pnt(start_Point.X()+Xcur,start_Point.Y()     ,start_Point.Z()+Zcur);
          pt2 = gp_Pnt(start_Point.X()+Xcur,start_Point.Y()+Ymax,start_Point.Z()+Zcur);
          drawLine(pt1,pt2,2);
    }
    }


    for (int j=0;j<Yn.size();j++)
    {
        Ycur += Yn[j];

    for (int i=0;i<Zn.size();i++)
    {
          pt1 = gp_Pnt(start_Point.X()+Xcur,start_Point.Y()+Ycur,start_Point.Z());
          pt2 = gp_Pnt(start_Point.X()+Xcur,start_Point.Y()+Ycur,start_Point.Z()+Zmax);
          drawLine(pt1,pt2,2);
    }
    }
}

      myGlobalView->Redraw();
      myGlobalView->FitAll();
}

void OCC_functions::sendMouseEvent(int event, gp_Pnt P)
{
    GLine->sendMouseEvent(event,P);
}

void OCC_functions::HideObjects( vector< Handle (AIS_InteractiveObject) > objects)
{
    for (int i=0;i<objects.size();i++)
    {
        myGlobalContext->Erase(objects[i],true);
    }

}

TopoDS_Shape OCC_functions::MakeProfile(vector<gp_Pnt> P, gp_Pnt sPt, gp_Pnt ePt,Standard_Real rot)
{
    BRepBuilderAPI_MakeWire mkWire;
    Handle(Geom_TrimmedCurve) aSegment;

    for (int i=0;i<P.size();i++)
    {
        if (i != P.size()-1) aSegment = GC_MakeSegment(P[i], P[i+1]);else {
            aSegment = GC_MakeSegment(P[i], P[0]);
        }
    TopoDS_Edge anEdge1 = BRepBuilderAPI_MakeEdge(aSegment);
    TopoDS_Wire threadingWire = BRepBuilderAPI_MakeWire(anEdge1);
    mkWire.Add(threadingWire);
    };
    //
    TopoDS_Wire myWireProfile = mkWire.Wire();
    TopoDS_Face myFaceProfile = BRepBuilderAPI_MakeFace(myWireProfile);
    double Length = sPt.Distance(ePt);

    gp_Trsf T;
    T.SetRotation(gp_Ax1(gp_Pnt(0,0,0),gp_Dir(0,0,Length)),rot*0.0174532925);
    myFaceProfile.Move(T);
    gp_Vec aPrismVec(gp_Pnt(0, 0, 0), gp_Pnt(0, 0, Length));
    TopoDS_Shape IPE_Profile = BRepPrimAPI_MakePrism(myFaceProfile, aPrismVec);
    gp_Trsf Tr;
    gp_Ax3 oldAxis(gp_Pnt(0, 0, 0), gp_Dir(gp_Vec(gp_Pnt(0,0,0),gp_Pnt(0,0,1))));
    gp_Ax3 newAxis(sPt, gp_Dir(gp_Vec(sPt,ePt)));

    Tr.SetDisplacement(oldAxis, newAxis);

    BRepBuilderAPI_Transform xform1(IPE_Profile, Tr);


    return xform1.Shape();
}

GhostLine::GhostLine( Handle(V3d_View) View, Handle(AIS_InteractiveContext) Context)
{
    Context = Context;
    View = View;
    status = 0;
    pt1 = gp_Pnt(0,0,0);
    pt2 = gp_Pnt(0,0,0);

}

GhostLine::~GhostLine()
{
    active = false;
}

void GhostLine::draw()
{
    Handle(Geom_TrimmedCurve) aSegment1 = GC_MakeSegment(pt1, pt2);
    TopoDS_Edge anEdge1 = BRepBuilderAPI_MakeEdge(aSegment1);
    TopoDS_Wire threadingWire1 = BRepBuilderAPI_MakeWire(anEdge1, anEdge1);
    Handle_Prs3d_LineAspect lineAspectSolid = new Prs3d_LineAspect(Quantity_NOC_WHITE, Aspect_TOL_SOLID, 1);
    LineBody = new AIS_Shape(threadingWire1);

        LineBody->Attributes()->SetWireAspect(lineAspectSolid);
        Context->SetColor(LineBody,Quantity_NOC_WHITE,Standard_False);
        Context->Display(LineBody,Standard_False,Standard_False,Standard_False);
}

void GhostLine::hide()
{
    Context->Erase(LineBody,true);
    Context->Update(LineBody,true);
}

void GhostLine::moveTo(gp_Pnt nP)
{
    gp_Trsf move;
    move.SetTranslation(pt1,nP);
    Context->SetLocation (LineBody, move);
    Context->Display(LineBody,true);
}

void GhostLine::start(gp_Pnt sP)
{
    pt1 = sP;
    active = true;
}

void GhostLine::activate()
{
    active = true;
}

void GhostLine::deactivate()
{
    active = false;
}

void GhostLine::sendMouseEvent(int event, gp_Pnt P)
{
  switch (event)
    {
  case 0:
  {
      moveTo(P);
  };break;
  case 1:
  {
      status += 1;
      if (status == 1)
      {
          start(P);
          draw();
      } else if (status == 2)
       {
          pt2=P;
          hide();
          status = 0;
       }
  };break;

  }

}
