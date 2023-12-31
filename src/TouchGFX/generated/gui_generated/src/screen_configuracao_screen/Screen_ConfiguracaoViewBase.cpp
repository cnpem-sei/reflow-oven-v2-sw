/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_configuracao_screen/Screen_ConfiguracaoViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen_ConfiguracaoViewBase::Screen_ConfiguracaoViewBase() :
    buttonCallback(this, &Screen_ConfiguracaoViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    retornar.setXY(17, 202);
    retornar.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_BACK_ARROW_32_ID));
    retornar.setIconXY(20, 15);
    retornar.setAction(buttonCallback);

    box2.setPosition(14, 45, 448, 148);
    box2.setColor(touchgfx::Color::getColorFromRGB(69, 133, 196));
    box2.setAlpha(162);

    textArea1.setPosition(156, 11, 169, 34);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(12, 157, 235));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TZMU));

    textArea2.setXY(26, 60);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NJ11));

    textArea2_1.setXY(26, 94);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OHPE));

    textArea2_2.setXY(26, 126);
    textArea2_2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2_2.setLinespacing(0);
    textArea2_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JZCA));

    textArea2_3.setXY(26, 159);
    textArea2_3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2_3.setLinespacing(0);
    textArea2_3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T9R1));

    textArea2_3_1.setPosition(295, 247, 175, 15);
    textArea2_3_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2_3_1.setLinespacing(0);
    textArea2_3_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HFKY));

    add(__background);
    add(box1);
    add(retornar);
    add(box2);
    add(textArea1);
    add(textArea2);
    add(textArea2_1);
    add(textArea2_2);
    add(textArea2_3);
    add(textArea2_3_1);
}

void Screen_ConfiguracaoViewBase::setupScreen()
{

}

void Screen_ConfiguracaoViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &retornar)
    {
        //Interaction1
        //When retornar clicked change screen to Screen_refusao
        //Go to Screen_refusao with no screen transition
        application().gotoScreen_refusaoScreenNoTransition();
    }
}
