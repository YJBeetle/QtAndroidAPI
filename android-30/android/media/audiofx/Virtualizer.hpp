#pragma once

#include "../../../JIntArray.hpp"
#include "./Virtualizer_Settings.def.hpp"
#include "./Virtualizer.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint Virtualizer::PARAM_STRENGTH()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH"
		);
	}
	inline jint Virtualizer::PARAM_STRENGTH_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	inline jint Virtualizer::VIRTUALIZATION_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_AUTO"
		);
	}
	inline jint Virtualizer::VIRTUALIZATION_MODE_BINAURAL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_BINAURAL"
		);
	}
	inline jint Virtualizer::VIRTUALIZATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_OFF"
		);
	}
	inline jint Virtualizer::VIRTUALIZATION_MODE_TRANSAURAL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_TRANSAURAL"
		);
	}
	
	// Constructors
	inline Virtualizer::Virtualizer(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.Virtualizer",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean Virtualizer::canVirtualize(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"canVirtualize",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Virtualizer::forceVirtualizationMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"forceVirtualizationMode",
			"(I)Z",
			arg0
		);
	}
	inline android::media::audiofx::Virtualizer_Settings Virtualizer::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/Virtualizer$Settings;"
		);
	}
	inline jshort Virtualizer::getRoundedStrength() const
	{
		return callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	inline jboolean Virtualizer::getSpeakerAngles(jint arg0, jint arg1, JIntArray arg2) const
	{
		return callMethod<jboolean>(
			"getSpeakerAngles",
			"(II[I)Z",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	inline jboolean Virtualizer::getStrengthSupported() const
	{
		return callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	inline jint Virtualizer::getVirtualizationMode() const
	{
		return callMethod<jint>(
			"getVirtualizationMode",
			"()I"
		);
	}
	inline void Virtualizer::setParameterListener(JObject arg0) const
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/Virtualizer$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	inline void Virtualizer::setProperties(android::media::audiofx::Virtualizer_Settings arg0) const
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/Virtualizer$Settings;)V",
			arg0.object()
		);
	}
	inline void Virtualizer::setStrength(jshort arg0) const
	{
		callMethod<void>(
			"setStrength",
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
