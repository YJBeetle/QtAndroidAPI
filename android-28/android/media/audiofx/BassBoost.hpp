#pragma once

#include "./BassBoost_Settings.def.hpp"
#include "./BassBoost.def.hpp"

namespace android::media::audiofx
{
	// Fields
	inline jint BassBoost::PARAM_STRENGTH()
	{
		return getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH"
		);
	}
	inline jint BassBoost::PARAM_STRENGTH_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	
	// Constructors
	inline BassBoost::BassBoost(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.BassBoost",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::media::audiofx::BassBoost_Settings BassBoost::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/BassBoost$Settings;"
		);
	}
	inline jshort BassBoost::getRoundedStrength() const
	{
		return callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	inline jboolean BassBoost::getStrengthSupported() const
	{
		return callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	inline void BassBoost::setParameterListener(JObject arg0) const
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/BassBoost$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	inline void BassBoost::setProperties(android::media::audiofx::BassBoost_Settings arg0) const
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/BassBoost$Settings;)V",
			arg0.object()
		);
	}
	inline void BassBoost::setStrength(jshort arg0) const
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
