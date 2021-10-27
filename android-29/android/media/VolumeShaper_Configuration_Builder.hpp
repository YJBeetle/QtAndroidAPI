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
		
		VolumeShaper_Configuration_Builder(QAndroidJniObject obj);
		// Constructors
		VolumeShaper_Configuration_Builder();
		VolumeShaper_Configuration_Builder(android::media::VolumeShaper_Configuration &arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject invertVolumes();
		QAndroidJniObject reflectTimes();
		QAndroidJniObject scaleToEndVolume(jfloat arg0);
		QAndroidJniObject scaleToStartVolume(jfloat arg0);
		QAndroidJniObject setCurve(jfloatArray arg0, jfloatArray arg1);
		QAndroidJniObject setDuration(jlong arg0);
		QAndroidJniObject setInterpolatorType(jint arg0);
	};
} // namespace android::media

