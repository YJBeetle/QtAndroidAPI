#pragma once

#include "./SoundProfile.def.hpp"
#include "../../../JString.hpp"
#include "./MediaQualityManager_SoundProfileCallback.def.hpp"

namespace android::media::quality
{
	// Fields
	
	// Constructors
	inline MediaQualityManager_SoundProfileCallback::MediaQualityManager_SoundProfileCallback()
		: JObject(
			"android.media.quality.MediaQualityManager$SoundProfileCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaQualityManager_SoundProfileCallback::onError(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void MediaQualityManager_SoundProfileCallback::onParameterCapabilitiesChanged(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onParameterCapabilitiesChanged",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaQualityManager_SoundProfileCallback::onSoundProfileAdded(JString arg0, android::media::quality::SoundProfile arg1) const
	{
		callMethod<void>(
			"onSoundProfileAdded",
			"(Ljava/lang/String;Landroid/media/quality/SoundProfile;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaQualityManager_SoundProfileCallback::onSoundProfileRemoved(JString arg0, android::media::quality::SoundProfile arg1) const
	{
		callMethod<void>(
			"onSoundProfileRemoved",
			"(Ljava/lang/String;Landroid/media/quality/SoundProfile;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaQualityManager_SoundProfileCallback::onSoundProfileUpdated(JString arg0, android::media::quality::SoundProfile arg1) const
	{
		callMethod<void>(
			"onSoundProfileUpdated",
			"(Ljava/lang/String;Landroid/media/quality/SoundProfile;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
