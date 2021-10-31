#include "./EnvironmentalReverb_Settings.hpp"
#include "./EnvironmentalReverb.hpp"

namespace android::media::audiofx
{
	// Fields
	jint EnvironmentalReverb::PARAM_DECAY_HF_RATIO()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_HF_RATIO"
		);
	}
	jint EnvironmentalReverb::PARAM_DECAY_TIME()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_TIME"
		);
	}
	jint EnvironmentalReverb::PARAM_DENSITY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DENSITY"
		);
	}
	jint EnvironmentalReverb::PARAM_DIFFUSION()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DIFFUSION"
		);
	}
	jint EnvironmentalReverb::PARAM_REFLECTIONS_DELAY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_DELAY"
		);
	}
	jint EnvironmentalReverb::PARAM_REFLECTIONS_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_REVERB_DELAY()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_DELAY"
		);
	}
	jint EnvironmentalReverb::PARAM_REVERB_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_ROOM_HF_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_HF_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_ROOM_LEVEL()
	{
		return getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_LEVEL"
		);
	}
	
	// QAndroidJniObject forward
	EnvironmentalReverb::EnvironmentalReverb(QAndroidJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	EnvironmentalReverb::EnvironmentalReverb(jint arg0, jint arg1)
		: android::media::audiofx::AudioEffect(
			"android.media.audiofx.EnvironmentalReverb",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jshort EnvironmentalReverb::getDecayHFRatio()
	{
		return callMethod<jshort>(
			"getDecayHFRatio",
			"()S"
		);
	}
	jint EnvironmentalReverb::getDecayTime()
	{
		return callMethod<jint>(
			"getDecayTime",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getDensity()
	{
		return callMethod<jshort>(
			"getDensity",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getDiffusion()
	{
		return callMethod<jshort>(
			"getDiffusion",
			"()S"
		);
	}
	android::media::audiofx::EnvironmentalReverb_Settings EnvironmentalReverb::getProperties()
	{
		return callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/EnvironmentalReverb$Settings;"
		);
	}
	jint EnvironmentalReverb::getReflectionsDelay()
	{
		return callMethod<jint>(
			"getReflectionsDelay",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getReflectionsLevel()
	{
		return callMethod<jshort>(
			"getReflectionsLevel",
			"()S"
		);
	}
	jint EnvironmentalReverb::getReverbDelay()
	{
		return callMethod<jint>(
			"getReverbDelay",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getReverbLevel()
	{
		return callMethod<jshort>(
			"getReverbLevel",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getRoomHFLevel()
	{
		return callMethod<jshort>(
			"getRoomHFLevel",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getRoomLevel()
	{
		return callMethod<jshort>(
			"getRoomLevel",
			"()S"
		);
	}
	void EnvironmentalReverb::setDecayHFRatio(jshort arg0)
	{
		callMethod<void>(
			"setDecayHFRatio",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDecayTime(jint arg0)
	{
		callMethod<void>(
			"setDecayTime",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDensity(jshort arg0)
	{
		callMethod<void>(
			"setDensity",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDiffusion(jshort arg0)
	{
		callMethod<void>(
			"setDiffusion",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setParameterListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/EnvironmentalReverb$OnParameterChangeListener;)V",
			arg0.object()
		);
	}
	void EnvironmentalReverb::setProperties(android::media::audiofx::EnvironmentalReverb_Settings arg0)
	{
		callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/EnvironmentalReverb$Settings;)V",
			arg0.object()
		);
	}
	void EnvironmentalReverb::setReflectionsDelay(jint arg0)
	{
		callMethod<void>(
			"setReflectionsDelay",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReflectionsLevel(jshort arg0)
	{
		callMethod<void>(
			"setReflectionsLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReverbDelay(jint arg0)
	{
		callMethod<void>(
			"setReverbDelay",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReverbLevel(jshort arg0)
	{
		callMethod<void>(
			"setReverbLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setRoomHFLevel(jshort arg0)
	{
		callMethod<void>(
			"setRoomHFLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setRoomLevel(jshort arg0)
	{
		callMethod<void>(
			"setRoomLevel",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

