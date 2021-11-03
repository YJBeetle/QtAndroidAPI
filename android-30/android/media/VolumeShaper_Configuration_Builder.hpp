#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::media
{
	class VolumeShaper_Configuration;
}

namespace android::media
{
	class VolumeShaper_Configuration_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeShaper_Configuration_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper_Configuration_Builder(QAndroidJniObject obj);
		
		// Constructors
		VolumeShaper_Configuration_Builder();
		VolumeShaper_Configuration_Builder(android::media::VolumeShaper_Configuration arg0);
		
		// Methods
		android::media::VolumeShaper_Configuration build() const;
		android::media::VolumeShaper_Configuration_Builder invertVolumes() const;
		android::media::VolumeShaper_Configuration_Builder reflectTimes() const;
		android::media::VolumeShaper_Configuration_Builder scaleToEndVolume(jfloat arg0) const;
		android::media::VolumeShaper_Configuration_Builder scaleToStartVolume(jfloat arg0) const;
		android::media::VolumeShaper_Configuration_Builder setCurve(JFloatArray arg0, JFloatArray arg1) const;
		android::media::VolumeShaper_Configuration_Builder setDuration(jlong arg0) const;
		android::media::VolumeShaper_Configuration_Builder setInterpolatorType(jint arg0) const;
	};
} // namespace android::media

