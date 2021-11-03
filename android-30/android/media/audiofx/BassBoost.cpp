#include "./BassBoost_Settings.hpp"
#include "./BassBoost.hpp"

namespace android::media::audiofx
{
	// Fields
	jint BassBoost::PARAM_STRENGTH()
	{
		return getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH"
		);
	}
	jint BassBoost::PARAM_STRENGTH_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	
	// QJniObject forward
	BassBoost::BassBoost(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	BassBoost::BassBoost(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.BassBoost",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::media::audiofx::BassBoost_Settings BassBoost::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/BassBoost$Settings;"
		);
	}
	jshort BassBoost::getRoundedStrength() const
	{
		return callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	jboolean BassBoost::getStrengthSupported() const
	{
		return callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	void BassBoost::setParameterListener(JObject arg0) const
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/BassBoost$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	void BassBoost::setProperties(android::media::audiofx::BassBoost_Settings arg0) const
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/BassBoost$Settings;)V",
			arg0.object()
		);
	}
	void BassBoost::setStrength(jshort arg0) const
	{
		callMethod<void>(
			"setStrength",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

