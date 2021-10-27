#include "./Visualizer_MeasurementPeakRms.hpp"

namespace android::media::audiofx
{
	// Fields
	jint Visualizer_MeasurementPeakRms::mPeak()
	{
		return __thiz.getField<jint>(
			"mPeak"
		);
	}
	jint Visualizer_MeasurementPeakRms::mRms()
	{
		return __thiz.getField<jint>(
			"mRms"
		);
	}
	
	Visualizer_MeasurementPeakRms::Visualizer_MeasurementPeakRms(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Visualizer_MeasurementPeakRms::Visualizer_MeasurementPeakRms()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Visualizer$MeasurementPeakRms",
			"()V"
		);
	}
	
	// Methods
} // namespace android::media::audiofx

