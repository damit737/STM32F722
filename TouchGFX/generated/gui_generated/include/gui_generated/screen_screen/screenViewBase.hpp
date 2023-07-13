/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENVIEWBASE_HPP
#define SCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/AnimatedImage.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class screenViewBase : public touchgfx::View<screenPresenter>
{
public:
    screenViewBase();
    virtual ~screenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image_background;
    touchgfx::AnimatedImage animatedImage1;
    touchgfx::TextAreaWithOneWildcard mcuLoadValueText;

    /*
     * Wildcard Buffers
     */
    static const uint16_t MCULOADVALUETEXT_SIZE = 15;
    touchgfx::Unicode::UnicodeChar mcuLoadValueTextBuffer[MCULOADVALUETEXT_SIZE];

private:

};

#endif // SCREENVIEWBASE_HPP
