#pragma once

#include "waveform/widgets/waveformwidgetabstract.h"
#include "widget/wglwidget.h"

class WWaveformViewer;

namespace qopengl {
class WaveformWidget;
}

class qopengl::WaveformWidget : public ::WGLWidget,
                                public ::WaveformWidgetAbstract {
    Q_OBJECT
  public:
    explicit WaveformWidget(const QString& group, QWidget* parent);
    ~WaveformWidget() override;

    // override for WaveformWidgetAbstract
    mixxx::Duration render() override;

    // overrides for WGLWidget
    void initializeGL() override;
    void renderGL() override;
    void resizeGL(int w, int h) override;

    virtual WGLWidget* getGLWidget() override {
        return this;
    }
};
