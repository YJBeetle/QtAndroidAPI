#pragma once

#include "./PresetReverb_Settings.def.hpp"
#include "./PresetReverb.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint PresetReverb::PARAM_PRESET()
	{
		return getStaticField<jint>(
			"android.media.audiofx.PresetReverb",
			"PARAM_PRESET"
		);
	}
	inline jshort PresetReverb::PRESET_LARGEHALL()
	{
		return getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_LARGEHALL"
		);
	}
	inline jshort PresetReverb::PRESET_LARGEROOM()
	{
		return getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_LARGEROOM"
		);
	}
	inline jshort PresetReverb::PRESET_MEDIUMHALL()
	{
		return getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_MEDIUMHALL"
		);
	}
	inline jshort PresetReverb::PRESET_MEDIUMROOM()
	{
		return getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_MEDIUMROOM"
		);
	}
	inline jshort PresetReverb::PRESET_NONE()
	{
		return getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_NONE"
		);
	}
	inline jshort PresetReverb::PRESET_PLATE()
	{
		return getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_PLATE"
		);
	}
	inline jshort PresetReverb::PRESET_SMALLROOM()
	{
		return getStaticField<jshort>(
			"android.media.audiofx.PresetReverb",
			"PRESET_SMALLROOM"
		);
	}
	
	// Constructors
	inline PresetReverb::PresetReverb(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.PresetReverb",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jshort PresetReverb::getPreset() const
	{
		return callMethod<jshort>(
			"getPreset",
			"()S"
		);
	}
	inline android::media::audiofx::PresetReverb_Settings PresetReverb::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/PresetReverb$Settings;"
		);
	}
	inline void PresetReverb::setParameterListener(JObject arg0) const
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/PresetReverb$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	inline void PresetReverb::setPreset(jshort arg0) const
	{
		callMethod<void>(
			"setPreset",
			"(S)V",
			arg0
		);
	}
	inline void PresetReverb::setProperties(android::media::audiofx::PresetReverb_Settings arg0) const
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/PresetReverb$Settings;)V",
			arg0.object()
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./AudioEffect.hpp"

