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
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncParams(QJniObject obj);
		
		// Constructors
		SyncParams();
		
		// Methods
		android::media::SyncParams allowDefaults() const;
		jint getAudioAdjustMode() const;
		jfloat getFrameRate() const;
		jint getSyncSource() const;
		jfloat getTolerance() const;
		android::media::SyncParams setAudioAdjustMode(jint arg0) const;
		android::media::SyncParams setFrameRate(jfloat arg0) const;
		android::media::SyncParams setSyncSource(jint arg0) const;
		android::media::SyncParams setTolerance(jfloat arg0) const;
	};
} // namespace android::media

