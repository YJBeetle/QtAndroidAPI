#pragma once

#include "./PictureProfile.def.hpp"
#include "../../../JString.hpp"
#include "./MediaQualityManager_PictureProfileCallback.def.hpp"

namespace android::media::quality
{
	// Fields
	
	// Constructors
	inline MediaQualityManager_PictureProfileCallback::MediaQualityManager_PictureProfileCallback()
		: JObject(
			"android.media.quality.MediaQualityManager$PictureProfileCallback",
			"()V"
		) {}
	
	// Methods
	inline void MediaQualityManager_PictureProfileCallback::onError(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void MediaQualityManager_PictureProfileCallback::onParameterCapabilitiesChanged(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"onParameterCapabilitiesChanged",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaQualityManager_PictureProfileCallback::onPictureProfileAdded(JString arg0, android::media::quality::PictureProfile arg1) const
	{
		callMethod<void>(
			"onPictureProfileAdded",
			"(Ljava/lang/String;Landroid/media/quality/PictureProfile;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaQualityManager_PictureProfileCallback::onPictureProfileRemoved(JString arg0, android::media::quality::PictureProfile arg1) const
	{
		callMethod<void>(
			"onPictureProfileRemoved",
			"(Ljava/lang/String;Landroid/media/quality/PictureProfile;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaQualityManager_PictureProfileCallback::onPictureProfileUpdated(JString arg0, android::media::quality::PictureProfile arg1) const
	{
		callMethod<void>(
			"onPictureProfileUpdated",
			"(Ljava/lang/String;Landroid/media/quality/PictureProfile;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace android::media::quality

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::quality;
#endif
