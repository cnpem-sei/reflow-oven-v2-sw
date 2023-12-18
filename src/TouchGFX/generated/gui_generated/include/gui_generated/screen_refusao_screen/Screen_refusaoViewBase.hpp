/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_REFUSAOVIEWBASE_HPP
#define SCREEN_REFUSAOVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_refusao_screen/Screen_refusaoPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/graph/Graph.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class Screen_refusaoViewBase : public touchgfx::View<Screen_refusaoPresenter>
{
public:
    Screen_refusaoViewBase();
    virtual ~Screen_refusaoViewBase() {}
    virtual void setupScreen();

    /*
     * Custom Actions
     */
    virtual void action1();

    /*
     * Virtual Action Handlers
     */
    virtual void profile()
    {
        // Override and implement this function in Screen_refusao
    }

    virtual void startReflow()
    {
        // Override and implement this function in Screen_refusao
    }

    virtual void profile_2()
    {
        // Override and implement this function in Screen_refusao
    }

    virtual void profile_3()
    {
        // Override and implement this function in Screen_refusao
    }

    virtual void profile_4()
    {
        // Override and implement this function in Screen_refusao
    }

    virtual void clear()
    {
        // Override and implement this function in Screen_refusao
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::BoxWithBorder boxWithBorder1_1;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::TextAreaWithOneWildcard textArea1;
    touchgfx::GraphWrapAndClear<1199> dynamicGraph1;
    touchgfx::GraphElementLine dynamicGraph1Line1;
    touchgfx::PainterRGB565 dynamicGraph1Line1Painter;
    touchgfx::GraphLabelsX dynamicGraph1MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph1MajorYAxisLabel;
    touchgfx::MoveAnimator< touchgfx::Graph<4000> > graph1;
    touchgfx::GraphElementLine graph1Line1;
    touchgfx::PainterRGB565 graph1Line1Painter;
    touchgfx::GraphElementGridX graph1MajorXAxisGrid;
    touchgfx::GraphElementGridY graph1MajorYAxisGrid;
    touchgfx::GraphLabelsX graph1MajorXAxisLabel;
    touchgfx::GraphLabelsY graph1MajorYAxisLabel;
    touchgfx::MoveAnimator< touchgfx::Graph<4000> > graph2;
    touchgfx::GraphElementLine graph2Line1;
    touchgfx::PainterRGB565 graph2Line1Painter;
    touchgfx::GraphElementGridX graph2MajorXAxisGrid;
    touchgfx::GraphElementGridY graph2MajorYAxisGrid;
    touchgfx::GraphLabelsX graph2MajorXAxisLabel;
    touchgfx::GraphLabelsY graph2MajorYAxisLabel;
    touchgfx::MoveAnimator< touchgfx::Graph<4000> > graph3;
    touchgfx::GraphElementLine graph3Line1;
    touchgfx::PainterRGB565 graph3Line1Painter;
    touchgfx::GraphElementGridX graph3MajorXAxisGrid;
    touchgfx::GraphElementGridY graph3MajorYAxisGrid;
    touchgfx::GraphLabelsX graph3MajorXAxisLabel;
    touchgfx::GraphLabelsY graph3MajorYAxisLabel;
    touchgfx::MoveAnimator< touchgfx::Graph<4000> > graph4;
    touchgfx::GraphElementLine graph4Line1;
    touchgfx::PainterRGB565 graph4Line1Painter;
    touchgfx::GraphElementGridX graph4MajorXAxisGrid;
    touchgfx::GraphElementGridY graph4MajorYAxisGrid;
    touchgfx::GraphLabelsX graph4MajorXAxisLabel;
    touchgfx::GraphLabelsY graph4MajorYAxisLabel;
    touchgfx::ButtonWithIcon play;
    touchgfx::TextAreaWithOneWildcard textArea2;
    touchgfx::ButtonWithIcon Config;
    touchgfx::TextArea textArea3;
    touchgfx::TextArea textArea3_1;
    touchgfx::TextArea textArea3_1_1;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ToggleButtonTrigger > > perfil;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ToggleButtonTrigger > > perfil_2;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ToggleButtonTrigger > > perfil_3;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ToggleButtonTrigger > > perfil_4;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::TouchButtonTrigger > > clear_button;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREA1_SIZE = 6;
    touchgfx::Unicode::UnicodeChar textArea1Buffer[TEXTAREA1_SIZE];
    static const uint16_t TEXTAREA2_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textArea2Buffer[TEXTAREA2_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Screen_refusaoViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<Screen_refusaoViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 7200;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // SCREEN_REFUSAOVIEWBASE_HPP
