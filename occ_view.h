#ifndef OCC_VIEW_H
#define OCC_VIEW_H

#include <QMainWindow>
#include <QWidget>
#include <AIS_InteractiveContext.hxx>

class OCC_View : public QWidget
{
    Q_OBJECT
public:
    explicit OCC_View(QWidget *parent = nullptr);
    const Handle(AIS_InteractiveContext)& getContext() const;

signals:

public slots:

private:
    Handle(V3d_View) myView;
    Handle(V3d_Viewer) myViewer;
    Handle(AIS_InteractiveContext) myContext;

    void drawCircle(gp_Pnt a);
protected:
    // Paint events.
    virtual void paintEvent(QPaintEvent* theEvent);
    virtual void resizeEvent(QResizeEvent* theEvent);

    // Mouse events.
    virtual void mousePressEvent(QMouseEvent* theEvent);
    virtual void mouseReleaseEvent(QMouseEvent* theEvent);
    virtual void mouseMoveEvent(QMouseEvent * theEvent);
    virtual void wheelEvent(QWheelEvent * theEvent);

    // Button events.
    virtual void onLButtonDown(const int theFlags, const QPoint thePoint);
    virtual void onMButtonDown(const int theFlags, const QPoint thePoint);
    virtual void onRButtonDown(const int theFlags, const QPoint thePoint);
    virtual void onMouseWheel(const int theFlags, const int theDelta, const QPoint thePoint);
    virtual void onLButtonUp(const int theFlags, const QPoint thePoint);
    virtual void onMButtonUp(const int theFlags, const QPoint thePoint);
    virtual void onRButtonUp(const int theFlags, const QPoint thePoint);
    virtual void onMouseMove(const int theFlags, const QPoint thePoint);

    // Popup menu.
    virtual void addItemInPopup(QMenu* theMenu);

protected:
    void init(void);
    void popup(const int x, const int y);
    void dragEvent(const int x, const int y);
    void inputEvent(const int x, const int y);
    void moveEvent(const int x, const int y);
    void multiMoveEvent(const int x, const int y);
    void multiDragEvent(const int x, const int y);
    void multiInputEvent(const int x, const int y);
    void drawRubberBand(const int minX, const int minY, const int maxX, const int maxY);
    void panByMiddleButton(const QPoint& thePoint);

};

#endif // OCC_VIEW_H
