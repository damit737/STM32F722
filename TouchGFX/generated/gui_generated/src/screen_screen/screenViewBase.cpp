/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

screenViewBase::screenViewBase()
{

    __background.setPosition(0, 0, 160, 128);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    image_background.setXY(0, 0);
    image_background.setBitmap(touchgfx::Bitmap(BITMAP_U_ID));

    animation.setXY(0, 0);
    animation.setBitmaps(BITMAP_HEPA_1_ID, BITMAP_HEPA_5_ID);
    animation.setUpdateTicksInterval(60);
    animation.startAnimation(false, true, true);

    mcuLoadValueText.setXY(99, 57);
    mcuLoadValueText.setColor(touchgfx::Color::getColorFrom24BitRGB(159, 6, 239));
    mcuLoadValueText.setLinespacing(0);
    Unicode::snprintf(mcuLoadValueTextBuffer, MCULOADVALUETEXT_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID2).getText());
    mcuLoadValueText.setWildcard(mcuLoadValueTextBuffer);
    mcuLoadValueText.resizeToCurrentText();
    mcuLoadValueText.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    add(__background);
    add(image_background);
    add(animation);
    add(mcuLoadValueText);
}

void screenViewBase::setupScreen()
{

}
