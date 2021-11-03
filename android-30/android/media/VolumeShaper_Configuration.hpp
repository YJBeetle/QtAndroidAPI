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
		
		// QJniObject forward
		template<typename ...Ts> explicit VolumeShaper_Configuration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper_Configuration(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaximumCurvePoints();
		jint describeContents();
		jboolean equals(JObject arg0);
		jlong getDuration();
		jint getInterpolatorType();
		JFloatArray getTimes();
		JFloatArray getVolumes();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

