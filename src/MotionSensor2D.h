//
//  MotionSensor2D.h
//  GraphAddOnTest
//
//  Created by songhojun on 10/25/13.
//
//

#pragma once
#include "ETRILighting.h"
#include "Sensor.h"


class MotionSensor2D : public Sensor{
    
public:
    MotionSensor2D();
    ~MotionSensor2D();

    void setup();
    void draw(LightSensorType sensorType, LightVisualType visualType);

    ofImage compassImg;
    ofImage compassBGImg;


    ofxPlot MotionSensorPlot;
    ofxPlot MotionSensorHistoryPlot;

    ofxPlotLine AccelXLine;
    ofxPlotLine AccelYLine;
    ofxPlotLine AccelZLine;
    ofxPlotLine GyroXLine;
    ofxPlotLine GyroYLine;
    ofxPlotLine GyroZLine;

    ofTrueTypeFont numberFont;
    ofTrueTypeFont textFont;
};