#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class VolumeProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint VOLUME_CONTROL_ABSOLUTE();
		static jint VOLUME_CONTROL_FIXED();
		static jint VOLUME_CONTROL_RELATIVE();
		
		VolumeProvider(QAndroidJniObject obj);
		// Constructors
		VolumeProvider(jint arg0, jint arg1, jint arg2);
		VolumeProvider() = default;
		
		// Methods
		jint getCurrentVolume();
		jint getMaxVolume();
		jint getVolumeControl();
		void onAdjustVolume(jint arg0);
		void onSetVolumeTo(jint arg0);
		void setCurrentVolume(jint arg0);
	};
} // namespace android::media

