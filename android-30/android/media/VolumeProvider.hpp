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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VolumeProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VolumeProvider(QAndroidJniObject obj);
		
		// Constructors
		VolumeProvider(jint arg0, jint arg1, jint arg2);
		VolumeProvider(jint arg0, jint arg1, jint arg2, jstring arg3);
		
		// Methods
		jint getCurrentVolume();
		jint getMaxVolume();
		jint getVolumeControl();
		jstring getVolumeControlId();
		void onAdjustVolume(jint arg0);
		void onSetVolumeTo(jint arg0);
		void setCurrentVolume(jint arg0);
	};
} // namespace android::media

