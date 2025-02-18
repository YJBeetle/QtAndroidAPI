#pragma once

#include "./AudioAttributes.def.hpp"
#include "./AudioFormat.def.hpp"
#include "./Spatializer.def.hpp"

namespace android::media
{
	// Fields
	inline jint Spatializer::SPATIALIZER_IMMERSIVE_LEVEL_MULTICHANNEL()
	{
		return getStaticField<jint>(
			"android.media.Spatializer",
			"SPATIALIZER_IMMERSIVE_LEVEL_MULTICHANNEL"
		);
	}
	inline jint Spatializer::SPATIALIZER_IMMERSIVE_LEVEL_NONE()
	{
		return getStaticField<jint>(
			"android.media.Spatializer",
			"SPATIALIZER_IMMERSIVE_LEVEL_NONE"
		);
	}
	inline jint Spatializer::SPATIALIZER_IMMERSIVE_LEVEL_OTHER()
	{
		return getStaticField<jint>(
			"android.media.Spatializer",
			"SPATIALIZER_IMMERSIVE_LEVEL_OTHER"
		);
	}
	
	// Constructors
	
	// Methods
	inline void Spatializer::addOnHeadTrackerAvailableListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addOnHeadTrackerAvailableListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/Spatializer$OnHeadTrackerAvailableListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Spatializer::addOnSpatializerStateChangedListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addOnSpatializerStateChangedListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/Spatializer$OnSpatializerStateChangedListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Spatializer::canBeSpatialized(android::media::AudioAttributes arg0, android::media::AudioFormat arg1) const
	{
		return callMethod<jboolean>(
			"canBeSpatialized",
			"(Landroid/media/AudioAttributes;Landroid/media/AudioFormat;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Spatializer::getImmersiveAudioLevel() const
	{
		return callMethod<jint>(
			"getImmersiveAudioLevel",
			"()I"
		);
	}
	inline jboolean Spatializer::isAvailable() const
	{
		return callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	inline jboolean Spatializer::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean Spatializer::isHeadTrackerAvailable() const
	{
		return callMethod<jboolean>(
			"isHeadTrackerAvailable",
			"()Z"
		);
	}
	inline void Spatializer::removeOnHeadTrackerAvailableListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnHeadTrackerAvailableListener",
			"(Landroid/media/Spatializer$OnHeadTrackerAvailableListener;)V",
			arg0.object()
		);
	}
	inline void Spatializer::removeOnSpatializerStateChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnSpatializerStateChangedListener",
			"(Landroid/media/Spatializer$OnSpatializerStateChangedListener;)V",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
