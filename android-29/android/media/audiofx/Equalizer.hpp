#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JShortArray.hpp"
#include "./Equalizer_Settings.def.hpp"
#include "../../../JString.hpp"
#include "./Equalizer.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint Equalizer::PARAM_BAND_FREQ_RANGE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_BAND_FREQ_RANGE"
		);
	}
	inline jint Equalizer::PARAM_BAND_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_BAND_LEVEL"
		);
	}
	inline jint Equalizer::PARAM_CENTER_FREQ()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_CENTER_FREQ"
		);
	}
	inline jint Equalizer::PARAM_CURRENT_PRESET()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_CURRENT_PRESET"
		);
	}
	inline jint Equalizer::PARAM_GET_BAND()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_BAND"
		);
	}
	inline jint Equalizer::PARAM_GET_NUM_OF_PRESETS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_NUM_OF_PRESETS"
		);
	}
	inline jint Equalizer::PARAM_GET_PRESET_NAME()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_GET_PRESET_NAME"
		);
	}
	inline jint Equalizer::PARAM_LEVEL_RANGE()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_LEVEL_RANGE"
		);
	}
	inline jint Equalizer::PARAM_NUM_BANDS()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_NUM_BANDS"
		);
	}
	inline jint Equalizer::PARAM_STRING_SIZE_MAX()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Equalizer",
			"PARAM_STRING_SIZE_MAX"
		);
	}
	
	// Constructors
	inline Equalizer::Equalizer(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.Equalizer",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jshort Equalizer::getBand(jint arg0) const
	{
		return callMethod<jshort>(
			"getBand",
			"(I)S",
			arg0
		);
	}
	inline JIntArray Equalizer::getBandFreqRange(jshort arg0) const
	{
		return callObjectMethod(
			"getBandFreqRange",
			"(S)[I",
			arg0
		);
	}
	inline jshort Equalizer::getBandLevel(jshort arg0) const
	{
		return callMethod<jshort>(
			"getBandLevel",
			"(S)S",
			arg0
		);
	}
	inline JShortArray Equalizer::getBandLevelRange() const
	{
		return callObjectMethod(
			"getBandLevelRange",
			"()[S"
		);
	}
	inline jint Equalizer::getCenterFreq(jshort arg0) const
	{
		return callMethod<jint>(
			"getCenterFreq",
			"(S)I",
			arg0
		);
	}
	inline jshort Equalizer::getCurrentPreset() const
	{
		return callMethod<jshort>(
			"getCurrentPreset",
			"()S"
		);
	}
	inline jshort Equalizer::getNumberOfBands() const
	{
		return callMethod<jshort>(
			"getNumberOfBands",
			"()S"
		);
	}
	inline jshort Equalizer::getNumberOfPresets() const
	{
		return callMethod<jshort>(
			"getNumberOfPresets",
			"()S"
		);
	}
	inline JString Equalizer::getPresetName(jshort arg0) const
	{
		return callObjectMethod(
			"getPresetName",
			"(S)Ljava/lang/String;",
			arg0
		);
	}
	inline android::media::audiofx::Equalizer_Settings Equalizer::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/Equalizer$Settings;"
		);
	}
	inline void Equalizer::setBandLevel(jshort arg0, jshort arg1) const
	{
		callMethod<void>(
			"setBandLevel",
			"(SS)V",
			arg0,
			arg1
		);
	}
	inline void Equalizer::setParameterListener(JObject arg0) const
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/Equalizer$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	inline void Equalizer::setProperties(android::media::audiofx::Equalizer_Settings arg0) const
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/Equalizer$Settings;)V",
			arg0.object()
		);
	}
	inline void Equalizer::usePreset(jshort arg0) const
	{
		callMethod<void>(
			"usePreset",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

// Base class headers
#include "./AudioEffect.hpp"

