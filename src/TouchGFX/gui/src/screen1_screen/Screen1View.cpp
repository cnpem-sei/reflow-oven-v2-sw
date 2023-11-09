#include <gui/screen1_screen/Screen1View.hpp>

extern volatile float heatVal;
extern volatile uint8_t ReflowEnable;
extern volatile uint8_t ReflowCurve[4000];



Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::handleTickEvent()
{
    //Show temperature value (heatVal) on the display
	Unicode::snprintfFloat(textArea1Buffer, TEXTAREA1_SIZE, "%f", heatVal);
	textArea1.invalidate();

   		//Add variable heatVal on the dynamic graph
		  dynamicGraph1.addDataPoint(heatVal);


}


// If button is clicked call virtual function "profile" that write points on the display
void Screen1View::profile()
{
	while(ReflowCurve[ind] != 0)
		 {
			graph1.addDataPoint(ind, ReflowCurve[ind]);
			ind= ind + 4;
		 }

	//Clear dynamic graph
	dynamicGraph1.clear();
	dynamicGraph1.invalidate();

}

void Screen1View::startReflow()
{
	ReflowEnable = 1;

	//Write "ON" on the display when start button is clicked
	Unicode::strncpy(textArea2Buffer, "ON", 4);
	textArea2.invalidate();

}



