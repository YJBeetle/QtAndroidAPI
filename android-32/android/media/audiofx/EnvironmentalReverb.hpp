#pragma once

#include "./EnvironmentalReverb_Settings.def.hpp"
#include "./EnvironmentalReverb.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint EnvironmentalReverb::PARAM_DECAY_HF_RATIO()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_HF_RATIO"
		);
	}
	inline jint EnvironmentalReverb::PARAM_DECAY_TIME()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_TIME"
		);
	}
	inline jint EnvironmentalReverb::PARAM_DENSITY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DENSITY"
		);
	}
	inline jint EnvironmentalReverb::PARAM_DIFFUSION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DIFFUSION"
		);
	}
	inline jint EnvironmentalReverb::PARAM_REFLECTIONS_DELAY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_DELAY"
		);
	}
	inline jint EnvironmentalReverb::PARAM_REFLECTIONS_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_LEVEL"
		);
	}
	inline jint EnvironmentalReverb::PARAM_REVERB_DELAY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_DELAY"
		);
	}
	inline jint EnvironmentalReverb::PARAM_REVERB_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_LEVEL"
		);
	}
	inline jint EnvironmentalReverb::PARAM_ROOM_HF_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_HF_LEVEL"
		);
	}
	inline jint EnvironmentalReverb::PARAM_ROOM_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_LEVEL"
		);
	}
	
	// Constructors
	inline EnvironmentalReverb::EnvironmentalReverb(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.EnvironmentalReverb",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jshort EnvironmentalReverb::getDecayHFRatio() const
	{
		return callMethod<jshort>(
			"getDecayHFRatio",
			"()S"
		);
	}
	inline jint EnvironmentalReverb::getDecayTime() const
	{
		return callMethod<jint>(
			"getDecayTime",
			"()I"
		);
	}
	inline jshort EnvironmentalReverb::getDensity() const
	{
		return callMethod<jshort>(
			"getDensity",
			"()S"
		);
	}
	inline jshort EnvironmentalReverb::getDiffusion() const
	{
		return callMethod<jshort>(
			"getDiffusion",
			"()S"
		);
	}
	inline android::media::audiofx::EnvironmentalReverb_Settings EnvironmentalReverb::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/EnvironmentalReverb$Settings;"
		);
	}
	inline jint EnvironmentalReverb::getReflectionsDelay() const
	{
		return callMethod<jint>(
			"getReflectionsDelay",
			"()I"
		);
	}
	inline jshort EnvironmentalReverb::getReflectionsLevel() const
	{
		return callMethod<jshort>(
			"getReflectionsLevel",
			"()S"
		);
	}
	inline jint EnvironmentalReverb::getReverbDelay() const
	{
		return callMethod<jint>(
			"getReverbDelay",
			"()I"
		);
	}
	inline jshort EnvironmentalReverb::getReverbLevel() const
	{
		return callMethod<jshort>(
			"getReverbLevel",
			"()S"
		);
	}
	inline jshort EnvironmentalReverb::getRoomHFLevel() const
	{
		return callMethod<jshort>(
			"getRoomHFLevel",
			"()S"
		);
	}
	inline jshort EnvironmentalReverb::getRoomLevel() const
	{
		return callMethod<jshort>(
			"getRoomLevel",
			"()S"
		);
	}
	inline void EnvironmentalReverb::setDecayHFRatio(jshort arg0) const
	{
		callMethod<void>(
			"setDecayHFRatio",
			"(S)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setDecayTime(jint arg0) const
	{
		callMethod<void>(
			"setDecayTime",
			"(I)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setDensity(jshort arg0) const
	{
		callMethod<void>(
			"setDensity",
			"(S)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setDiffusion(jshort arg0) const
	{
		callMethod<void>(
			"setDiffusion",
			"(S)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setParameterListener(JObject arg0) const
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/EnvironmentalReverb$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	inline void EnvironmentalReverb::setProperties(android::media::audiofx::EnvironmentalReverb_Settings arg0) const
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/EnvironmentalReverb$Settings;)V",
			arg0.object()
		);
	}
	inline void EnvironmentalReverb::setReflectionsDelay(jint arg0) const
	{
		callMethod<void>(
			"setReflectionsDelay",
			"(I)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setReflectionsLevel(jshort arg0) const
	{
		callMethod<void>(
			"setReflectionsLevel",
			"(S)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setReverbDelay(jint arg0) const
	{
		callMethod<void>(
			"setReverbDelay",
			"(I)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setReverbLevel(jshort arg0) const
	{
		callMethod<void>(
			"setReverbLevel",
			"(S)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setRoomHFLevel(jshort arg0) const
	{
		callMethod<void>(
			"setRoomHFLevel",
			"(S)V",
			arg0
		);
	}
	inline void EnvironmentalReverb::setRoomLevel(jshort arg0) const
	{
		callMethod<void>(
			"setRoomLevel",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./AudioEffect.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::audiofx;
#endif
