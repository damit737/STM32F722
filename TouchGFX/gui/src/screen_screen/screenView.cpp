#include <gui/screen_screen/screenView.hpp>

screenView::screenView()
{

}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
    mcuLoadPct = touchgfx::HAL::getInstance()->getMCULoadPct();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}

void screenView::handleTickEvent()
{
    if (HAL::getInstance()->getLCDRefreshCount() > 1)
    {
        frameSkippedCounter++;
    }
    else
    {
        frames++;
    }

    if (frames + frameSkippedCounter >= 60)
    {
        fps = frames;
        updateFPSAndMCU();
        frameSkippedCounter = 0;
        frames = 0;
    }
}
void screenView::updateFPSAndMCU()
{
    Unicode::snprintf(mcuLoadValueTextBuffer, MCULOADVALUETEXT_SIZE, "%d", fps);
    mcuLoadValueText.invalidate();
}
