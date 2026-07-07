#pragma once

#include "./AmbientBacklightSettings.def.hpp"
#include "./MediaQualityManager_PictureProfileCallback.def.hpp"
#include "./MediaQualityManager_ProfileQueryParams.def.hpp"
#include "./MediaQualityManager_SoundProfileCallback.def.hpp"
#include "./PictureProfile.def.hpp"
#include "./SoundProfile.def.hpp"
#include "../../../JString.hpp"
#include "./MediaQualityManager.def.hpp"

namespace android::media::quality
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaQualityManager::addActiveProcessingPictureListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addActiveProcessingPictureListener",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaQualityManager::createPictureProfile(android::media::quality::PictureProfile arg0) const
	{
		callMethod<void>(
			"createPictureProfile",
			"(Landroid/media/quality/PictureProfile;)V",
			arg0.object()
		);
	}
	inline void MediaQualityManager::createSoundProfile(android::media::quality::SoundProfile arg0) const
	{
		callMethod<void>(
			"createSoundProfile",
			"(Landroid/media/quality/SoundProfile;)V",
			arg0.object()
		);
	}
	inline JObject MediaQualityManager::getAvailablePictureProfiles(android::media::quality::MediaQualityManager_ProfileQueryParams arg0) const
	{
		return callObjectMethod(
			"getAvailablePictureProfiles",
			"(Landroid/media/quality/MediaQualityManager$ProfileQueryParams;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject MediaQualityManager::getAvailableSoundProfiles(android::media::quality::MediaQualityManager_ProfileQueryParams arg0) const
	{
		return callObjectMethod(
			"getAvailableSoundProfiles",
			"(Landroid/media/quality/MediaQualityManager$ProfileQueryParams;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline JObject MediaQualityManager::getParameterCapabilities(JObject arg0) const
	{
		return callObjectMethod(
			"getParameterCapabilities",
			"(Ljava/util/List;)Ljava/util/List;",
			arg0.object()
		);
	}
	inline android::media::quality::PictureProfile MediaQualityManager::getPictureProfile(jint arg0, JString arg1, android::media::quality::MediaQualityManager_ProfileQueryParams arg2) const
	{
		return callObjectMethod(
			"getPictureProfile",
			"(ILjava/lang/String;Landroid/media/quality/MediaQualityManager$ProfileQueryParams;)Landroid/media/quality/PictureProfile;",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::media::quality::SoundProfile MediaQualityManager::getSoundProfile(jint arg0, JString arg1, android::media::quality::MediaQualityManager_ProfileQueryParams arg2) const
	{
		return callObjectMethod(
			"getSoundProfile",
			"(ILjava/lang/String;Landroid/media/quality/MediaQualityManager$ProfileQueryParams;)Landroid/media/quality/SoundProfile;",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline jboolean MediaQualityManager::isAmbientBacklightEnabled() const
	{
		return callMethod<jboolean>(
			"isAmbientBacklightEnabled",
			"()Z"
		);
	}
	inline jboolean MediaQualityManager::isAutoPictureQualityEnabled() const
	{
		return callMethod<jboolean>(
			"isAutoPictureQualityEnabled",
			"()Z"
		);
	}
	inline jboolean MediaQualityManager::isAutoSoundQualityEnabled() const
	{
		return callMethod<jboolean>(
			"isAutoSoundQualityEnabled",
			"()Z"
		);
	}
	inline jboolean MediaQualityManager::isSuperResolutionEnabled() const
	{
		return callMethod<jboolean>(
			"isSuperResolutionEnabled",
			"()Z"
		);
	}
	inline void MediaQualityManager::registerAmbientBacklightCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerAmbientBacklightCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/quality/MediaQualityManager$AmbientBacklightCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaQualityManager::registerPictureProfileCallback(JObject arg0, android::media::quality::MediaQualityManager_PictureProfileCallback arg1) const
	{
		callMethod<void>(
			"registerPictureProfileCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/quality/MediaQualityManager$PictureProfileCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaQualityManager::registerSoundProfileCallback(JObject arg0, android::media::quality::MediaQualityManager_SoundProfileCallback arg1) const
	{
		callMethod<void>(
			"registerSoundProfileCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/quality/MediaQualityManager$SoundProfileCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaQualityManager::removeActiveProcessingPictureListener(JObject arg0) const
	{
		callMethod<void>(
			"removeActiveProcessingPictureListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline void MediaQualityManager::removePictureProfile(JString arg0) const
	{
		callMethod<void>(
			"removePictureProfile",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaQualityManager::removeSoundProfile(JString arg0) const
	{
		callMethod<void>(
			"removeSoundProfile",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaQualityManager::setAmbientBacklightEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setAmbientBacklightEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void MediaQualityManager::setAmbientBacklightSettings(android::media::quality::AmbientBacklightSettings arg0) const
	{
		callMethod<void>(
			"setAmbientBacklightSettings",
			"(Landroid/media/quality/AmbientBacklightSettings;)V",
			arg0.object()
		);
	}
	inline void MediaQualityManager::unregisterAmbientBacklightCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterAmbientBacklightCallback",
			"(Landroid/media/quality/MediaQualityManager$AmbientBacklightCallback;)V",
			arg0.object()
		);
	}
	inline void MediaQualityManager::unregisterPictureProfileCallback(android::media::quality::MediaQualityManager_PictureProfileCallback arg0) const
	{
		callMethod<void>(
			"unregisterPictureProfileCallback",
			"(Landroid/media/quality/MediaQualityManager$PictureProfileCallback;)V",
			arg0.object()
		);
	}
	inline void MediaQualityManager::unregisterSoundProfileCallback(android::media::quality::MediaQualityManager_SoundProfileCallback arg0) const
	{
		callMethod<void>(
			"unregisterSoundProfileCallback",
			"(Landroid/media/quality/MediaQualityManager$SoundProfileCallback;)V",
			arg0.object()
		);
	}
	inline void MediaQualityManager::updatePictureProfile(JString arg0, android::media::quality::PictureProfile arg1) const
	{
		callMethod<void>(
			"updatePictureProfile",
			"(Ljava/lang/String;Landroid/media/quality/PictureProfile;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaQualityManager::updateSoundProfile(JString arg0, android::media::quality::SoundProfile arg1) const
	{
		callMethod<void>(
			"updateSoundProfile",
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
