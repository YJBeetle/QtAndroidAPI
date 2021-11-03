#include "../../../JIntArray.hpp"
#include "./Virtualizer_Settings.hpp"
#include "./Virtualizer.hpp"

namespace android::media::audiofx
{
	// Fields
	jint Virtualizer::PARAM_STRENGTH()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH"
		);
	}
	jint Virtualizer::PARAM_STRENGTH_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_AUTO"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_BINAURAL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_BINAURAL"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_OFF"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_TRANSAURAL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_TRANSAURAL"
		);
	}
	
	// QJniObject forward
	Virtualizer::Virtualizer(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	Virtualizer::Virtualizer(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.Virtualizer",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean Virtualizer::canVirtualize(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"canVirtualize",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Virtualizer::forceVirtualizationMode(jint arg0) const
	{
		return callMethod<jboolean>(
			"forceVirtualizationMode",
			"(I)Z",
			arg0
		);
	}
	android::media::audiofx::Virtualizer_Settings Virtualizer::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/Virtualizer$Settings;"
		);
	}
	jshort Virtualizer::getRoundedStrength() const
	{
		return callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	jboolean Virtualizer::getSpeakerAngles(jint arg0, jint arg1, JIntArray arg2) const
	{
		return callMethod<jboolean>(
			"getSpeakerAngles",
			"(II[I)Z",
			arg0,
			arg1,
			arg2.object<jintArray>()
		);
	}
	jboolean Virtualizer::getStrengthSupported() const
	{
		return callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	jint Virtualizer::getVirtualizationMode() const
	{
		return callMethod<jint>(
			"getVirtualizationMode",
			"()I"
		);
	}
	void Virtualizer::setParameterListener(JObject arg0) const
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/Virtualizer$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	void Virtualizer::setProperties(android::media::audiofx::Virtualizer_Settings arg0) const
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/Virtualizer$Settings;)V",
			arg0.object()
		);
	}
	void Virtualizer::setStrength(jshort arg0) const
	{
		callMethod<void>(
			"setStrength",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

