#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class SyncParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_ADJUST_MODE_DEFAULT();
		static jint AUDIO_ADJUST_MODE_RESAMPLE();
		static jint AUDIO_ADJUST_MODE_STRETCH();
		static jint SYNC_SOURCE_AUDIO();
		static jint SYNC_SOURCE_DEFAULT();
		static jint SYNC_SOURCE_SYSTEM_CLOCK();
		static jint SYNC_SOURCE_VSYNC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncParams(QAndroidJniObject obj);
		
		// Constructors
		SyncParams();
		
		// Methods
		QAndroidJniObject allowDefaults();
		jint getAudioAdjustMode();
		jfloat getFrameRate();
		jint getSyncSource();
		jfloat getTolerance();
		QAndroidJniObject setAudioAdjustMode(jint arg0);
		QAndroidJniObject setFrameRate(jfloat arg0);
		QAndroidJniObject setSyncSource(jint arg0);
		QAndroidJniObject setTolerance(jfloat arg0);
	};
} // namespace android::media

