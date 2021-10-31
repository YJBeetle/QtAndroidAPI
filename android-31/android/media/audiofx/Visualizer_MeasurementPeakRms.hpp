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
		
		// QJniObject forward
		template<typename ...Ts> explicit Visualizer_MeasurementPeakRms(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Visualizer_MeasurementPeakRms(QJniObject obj);
		
		// Constructors
		Visualizer_MeasurementPeakRms();
		
		// Methods
	};
} // namespace android::media::audiofx

