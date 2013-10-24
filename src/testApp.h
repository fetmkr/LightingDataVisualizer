#pragma once

#include "ofMain.h"
#include "ofxPlot.h"
#include "ofxPlotLine.h"

#include "ofxSvg.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        ofxPlot AccelGraph;
        ofxPlot AccelHistoryPlot;
    
        ofxPlotLine AccelXLine;
        ofxPlotLine AccelYLine;
        ofxPlotLine AccelZLine;
    
        ofxPlotLine* AccelXLinePtr;
        ofxPlotLine* AccelYLinePtr;
        ofxPlotLine* AccelZLinePtr;
    
        ofTrueTypeFont analFont;
        ofxSVG etriLogoBlk;
    
        bool bData;

    
};
