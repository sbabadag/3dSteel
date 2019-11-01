QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS \
 WNT

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH +=  \
        C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/inc \
        C:/Qt\5.12.1/winrt_armv7_msvc2017/include/QtOpenGL

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    occ_helper_functions.cpp \
    occ_view.cpp

HEADERS += \
    mainwindow.h \
    occ_helper_functions.h \
    occ_view.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DESTDIR += C:/dlls

DEPENDPATH += C:/dlls

LIBS +=         \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKBin                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKBinL                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKBinTObj                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKBinXCAF                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKBO                      \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKBool                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKBRep                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKCAF                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKCDF                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKD3DHost                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKDCAF                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKDraw                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKernel                   \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKFeat                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKFillet                  \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKG2d                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKG3d                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKGeomAlgo                \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKGeomBase                \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKHLR                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKIGES                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKIVtk                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKIVtkDraw                \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKLCAF                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKMath                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKMesh                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKMeshVS                  \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKOffset                  \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKOpenGl                  \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKPrim                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKQADraw                  \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKService                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKShHealing               \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKStd                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKStdL                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKSTEP                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKSTEP209                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKSTEPAttr                \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKSTEPBase                \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKSTL                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKTObj                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKTObjDRAW                \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKTopAlgo                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKTopTest                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKV3d                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKVCAF                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKViewerTest              \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKVRML                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXCAF                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXDEDRAW                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXDEIGES                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXDESTEP                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXMesh                   \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXml                     \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXmlL                    \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXmlTObj                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXmlXCAF                 \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXSBase                  \
  -L"C:/OpenCASCADE-7.3.0-vc14-64/opencascade-7.3.0/win64/vc14/lib/"  -lTKXSDRAW

