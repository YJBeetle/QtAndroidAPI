#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::media
{
	class VolumeShaper_Configuration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::media::VolumeShaper_Configuration CUBIC_RAMP();
		static jint INTERPOLATOR_TYPE_CUBIC();
		static jint INTERPOLATOR_TYPE_CUBIC_MONOTONIC();
		static jint INTERPOLATOR_TYPE_LINEAR();
		static jint INTERPOLATOR_TYPE_STEP();
		static android::media::VolumeShaper_Configuration LINEAR_RAMP();
		static android::media::VolumeShaper_Configuration SCURVE_RAMP();
		static android::media::VolumeShaper_Configuration SINE_RAMP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeShaper_Configuration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper_Configuration(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaximumCurvePoints();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jlong getDuration() const;
		jint getInterpolatorType() const;
		JFloatArray getTimes() const;
		JFloatArray getVolumes() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media

