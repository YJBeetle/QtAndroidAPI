#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class Visualizer_MeasurementPeakRms : public __JniBaseClass
	{
	public:
		// Fields
		jint mPeak();
		jint mRms();
		
		Visualizer_MeasurementPeakRms(QAndroidJniObject obj);
		// Constructors
		Visualizer_MeasurementPeakRms();
		
		// Methods
	};
} // namespace android::media::audiofx

