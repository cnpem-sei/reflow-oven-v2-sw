/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_INICIALIZACAOVIEWBASE_HPP
#define SCREEN_INICIALIZACAOVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_inicializacao_screen/Screen_inicializacaoPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>

class Screen_inicializacaoViewBase : public touchgfx::View<Screen_inicializacaoPresenter>
{
public:
    Screen_inicializacaoViewBase();
    virtual ~Screen_inicializacaoViewBase() {}
    virtual void setupScreen();
    virtual void handleTickEvent();
    virtual void afterTransition();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Image image1;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;

private:

    /*
     * Delay Variable Declarations
     */
    static const uint16_t INTERACTION1_DURATION = 9;
    uint16_t interaction1Counter;

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN_INICIALIZACAOVIEWBASE_HPP