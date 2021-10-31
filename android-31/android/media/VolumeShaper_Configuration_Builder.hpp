#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class VolumeShaper_Configuration;
}

namespace android::media
{
	class VolumeShaper_Configuration_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeShaper_Configuration_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VolumeShaper_Configuration_Builder(QAndroidJniObject obj);
		
		// Constructors
		VolumeShaper_Configuration_Builder();
		VolumeShaper_Configuration_Builder(android::media::VolumeShaper_Configuration arg0);
		
		// Methods
		android::media::VolumeShaper_Configuration build();
		android::media::VolumeShaper_Configuration_Builder invertVolumes();
		android::media::VolumeShaper_Configuration_Builder reflectTimes();
		android::media::VolumeShaper_Configuration_Builder scaleToEndVolume(jfloat arg0);
		android::media::VolumeShaper_Configuration_Builder scaleToStartVolume(jfloat arg0);
		android::media::VolumeShaper_Configuration_Builder setCurve(jfloatArray arg0, jfloatArray arg1);
		android::media::VolumeShaper_Configuration_Builder setDuration(jlong arg0);
		android::media::VolumeShaper_Configuration_Builder setInterpolatorType(jint arg0);
	};
} // namespace android::media

