#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class VolumeShaper_Configuration : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static android::media::VolumeShaper_Configuration CUBIC_RAMP();
		static jint INTERPOLATOR_TYPE_CUBIC();
		static jint INTERPOLATOR_TYPE_CUBIC_MONOTONIC();
		static jint INTERPOLATOR_TYPE_LINEAR();
		static jint INTERPOLATOR_TYPE_STEP();
		static android::media::VolumeShaper_Configuration LINEAR_RAMP();
		static android::media::VolumeShaper_Configuration SCURVE_RAMP();
		static android::media::VolumeShaper_Configuration SINE_RAMP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeShaper_Configuration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper_Configuration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaximumCurvePoints();
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getDuration();
		jint getInterpolatorType();
		jfloatArray getTimes();
		jfloatArray getVolumes();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

