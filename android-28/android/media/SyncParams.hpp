#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class SyncParams : public JObject
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
		template<typename ...Ts> explicit SyncParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncParams(QAndroidJniObject obj);
		
		// Constructors
		SyncParams();
		
		// Methods
		android::media::SyncParams allowDefaults();
		jint getAudioAdjustMode();
		jfloat getFrameRate();
		jint getSyncSource();
		jfloat getTolerance();
		android::media::SyncParams setAudioAdjustMode(jint arg0);
		android::media::SyncParams setFrameRate(jfloat arg0);
		android::media::SyncParams setSyncSource(jint arg0);
		android::media::SyncParams setTolerance(jfloat arg0);
	};
} // namespace android::media

