//
//  MotionSensor3D.h
//  GraphAddOnTest
//
//  Created by songhojun on 10/26/13.
//
//

#pragma once
#include "ETRILighting.h"
#include "Sensor.h"
#include "ofxAssimpModelLoader.h"


class MotionSensor3D : public Sensor{
    
public:
    MotionSensor3D();
    ~MotionSensor3D();
    
    void setup();
    void draw(LightSensorType sensorType, LightVisualType visualType);
    
    ofImage motion3DBGImg;

    
    ofxAssimpModelLoader compass3D;
    ofxAssimpModelLoader crossModel;
    ofRectangle viewport;
    ofCamera cam;

    
    
    ofxPlot MotionSensorPlot;
    ofxPlot MotionSensorHistoryPlot;
    
    ofTrueTypeFont numberFont;
    ofTrueTypeFont textFont;
    
};