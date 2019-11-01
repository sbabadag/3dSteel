#include <OpenGl_GraphicDriver.hxx>

#include "occ_view.h"
#include "mainwindow.h"
#include "occ_view.h"
#include <QMainWindow>
#include <QStatusBar>
#include <gp_Trsf.hxx>


#include <QMenu>
#include <QMouseEvent>
#include <QRubberBand>
#include <QStyleFactory>

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
#include <Xw_Window.hxx>
#include <V3d_View.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Aspect_Handle.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <WNT_Window.hxx>
#include <AIS_InteractiveContext.hxx>
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
#include <BRepBuilderAPI_Copy.hxx>
#include <V3d_Viewer.hxx>
#include <QMenu>
#include <QMouseEvent>
#include <QRubberBand>
#include <QStyleFactory>

// occ header files.
#include <V3d_Viewer.hxx>
//#include <WNT_Window.hxx>
#include <Aspect_Handle.hxx>

#include <Graphic3d_GraphicDriver.hxx>
#include <Xw_Window.hxx>

//
//

#ifdef WNT
#include <WNT_Window.hxx>
#elif defined(__APPLE__) && !defined(MACOSX_USE_GLX)
#include <Cocoa_Window.hxx>
#else
#undef Bool
#undef CursorShape
#undef None
#undef KeyPress
#undef KeyRelease
#undef FocusIn
#undef FocusOut
#undef FontChange
#undef Expose
#include <Xw_Window.hxx>
#endif

static Handle(Graphic3d_GraphicDriver)& GetGraphicDriver()
{
    static Handle(Graphic3d_GraphicDriver) aGraphicDriver;
    return aGraphicDriver;
}


OCC_View::OCC_View(QWidget *parent) : QWidget(parent)
{
    setMouseTracking( true );

}

const Handle(AIS_InteractiveContext)& OCC_View::getContext() const
{
    return myContext;
}

void OCC_View::paintEvent(QPaintEvent *theEvent)
{
    if (myContext.IsNull())
    {
        init();
    }

    myView->Redraw();
}

void OCC_View::resizeEvent(QResizeEvent *theEvent)
{
    if( !myView.IsNull() )
    {
        myView->MustBeResized();
    }
}

void OCC_View::mousePressEvent(QMouseEvent *theEvent)
{

}

void OCC_View::mouseReleaseEvent(QMouseEvent *theEvent)
{

}

void OCC_View::mouseMoveEvent(QMouseEvent *theEvent)
{

}

void OCC_View::wheelEvent(QWheelEvent *theEvent)
{

}

void OCC_View::onLButtonDown(const int theFlags, const QPoint thePoint)
{

}

void OCC_View::onMButtonDown(const int theFlags, const QPoint thePoint)
{

}

void OCC_View::onRButtonDown(const int theFlags, const QPoint thePoint)
{

}

void OCC_View::onMouseWheel(const int theFlags, const int theDelta, const QPoint thePoint)
{

}

void OCC_View::onLButtonUp(const int theFlags, const QPoint thePoint)
{

}

void OCC_View::onMButtonUp(const int theFlags, const QPoint thePoint)
{

}

void OCC_View::onRButtonUp(const int theFlags, const QPoint thePoint)
{

}

void OCC_View::onMouseMove(const int theFlags, const QPoint thePoint)
{

}

void OCC_View::addItemInPopup(QMenu *theMenu)
{

}

void OCC_View::init()
{
    // Create Aspect_DisplayConnection
    Handle(Aspect_DisplayConnection) aDisplayConnection =
        new Aspect_DisplayConnection();

    // Get graphic driver if it exists, otherwise initialise it
    if (GetGraphicDriver().IsNull())
    {
        GetGraphicDriver() = new OpenGl_GraphicDriver(aDisplayConnection);
    }

    // Get window handle. This returns something suitable for all platforms.
    WId window_handle = (WId) winId();

// Create appropriate window for platform
#ifdef WNT
    Handle(WNT_Window) wind = new WNT_Window((Aspect_Handle) window_handle);
#elif defined(__APPLE__) && !defined(MACOSX_USE_GLX)
    Handle(Cocoa_Window) wind = new Cocoa_Window((NSView *) window_handle);
#else
    Handle(Xw_Window) wind = new Xw_Window(aDisplayConnection, (Window) window_handle);
#endif

    // Create V3dViewer and V3d_View
    myViewer = new V3d_Viewer(GetGraphicDriver(), Standard_ExtString("viewer3d"));

    myView = myViewer->CreateView();

    myView->SetWindow(wind);
    if (!wind->IsMapped()) wind->Map();

    // Create AISInteractiveContext
    myContext = new AIS_InteractiveContext(myViewer);

    // Set up lights etc
    myViewer->SetDefaultLights();
    myViewer->SetLightOn();

    myView->SetBackgroundColor(Quantity_NOC_BLACK);
    myView->MustBeResized();
    myView->TriedronDisplay(Aspect_TOTP_LEFT_LOWER, Quantity_NOC_GOLD, 0.08, V3d_ZBUFFER);

    myContext->SetDisplayMode(AIS_Shaded, Standard_True);
    myView->SetBackgroundColor(Quantity_NOC_GRAY20);

    myContext->SetDisplayMode(AIS_Shaded,true);

    myContext->CloseAllContexts(true);
    myContext->OpenLocalContext();
    myView->ZFitAll();
    myView->DepthFitAll();
    getContext()->ActivateStandardMode(TopAbs_EDGE);

    drawCircle(gp_Pnt(0,0,0));

}

void OCC_View::popup(const int x, const int y)
{

}

void OCC_View::dragEvent(const int x, const int y)
{

}

void OCC_View::inputEvent(const int x, const int y)
{

}

void OCC_View::moveEvent(const int x, const int y)
{

}

void OCC_View::multiMoveEvent(const int x, const int y)
{

}

void OCC_View::multiDragEvent(const int x, const int y)
{

}

void OCC_View::multiInputEvent(const int x, const int y)
{

}

void OCC_View::drawRubberBand(const int minX, const int minY, const int maxX, const int maxY)
{

}

void OCC_View::panByMiddleButton(const QPoint &thePoint)
{

}

void OCC_View::drawCircle(gp_Pnt a)
{
    TopoDS_Vertex V1 = BRepBuilderAPI_MakeVertex( a );

    // Create the AIS_Shape
    Handle(AIS_Shape) aShape = new AIS_Shape(V1);

    // Set the vertex shape, color, and size
    Quantity_Color color(Quantity_NOC_YELLOW);
    Handle_Prs3d_PointAspect myPointAspect=new Prs3d_PointAspect(Aspect_TOM_O,color,2);
    aShape->Attributes()->SetPointAspect(myPointAspect);
    myContext->Display(aShape,Standard_False);

}
