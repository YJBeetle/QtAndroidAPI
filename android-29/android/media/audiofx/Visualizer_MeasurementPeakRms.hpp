#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS
#define ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class Visualizer_MeasurementPeakRms : public __JniBaseClass
	{
	public:
		// Fields
		jint mPeak();
		jint mRms();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
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
	
	// Constructors
	void Visualizer_MeasurementPeakRms::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Visualizer$MeasurementPeakRms",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class Visualizer_MeasurementPeakRms : public __jni_impl::android::media::audiofx::Visualizer_MeasurementPeakRms
	{
	public:
		Visualizer_MeasurementPeakRms(QAndroidJniObject obj) { __thiz = obj; }
		Visualizer_MeasurementPeakRms()
		{
			__constructor();
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_VISUALIZER_MEASUREMENTPEAKRMS

