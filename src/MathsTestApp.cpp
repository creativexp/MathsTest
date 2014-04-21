#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class MathsTestApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void MathsTestApp::setup()
{
}

void MathsTestApp::mouseDown( MouseEvent event )
{
}

void MathsTestApp::update()
{
}

void MathsTestApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( MathsTestApp, RendererGl )
