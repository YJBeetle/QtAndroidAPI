#include "./EnvironmentalReverb_Settings.hpp"
#include "./EnvironmentalReverb.hpp"

namespace android::media::audiofx
{
	// Fields
	jint EnvironmentalReverb::PARAM_DECAY_HF_RATIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_HF_RATIO"
		);
	}
	jint EnvironmentalReverb::PARAM_DECAY_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DECAY_TIME"
		);
	}
	jint EnvironmentalReverb::PARAM_DENSITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DENSITY"
		);
	}
	jint EnvironmentalReverb::PARAM_DIFFUSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_DIFFUSION"
		);
	}
	jint EnvironmentalReverb::PARAM_REFLECTIONS_DELAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_DELAY"
		);
	}
	jint EnvironmentalReverb::PARAM_REFLECTIONS_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REFLECTIONS_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_REVERB_DELAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_DELAY"
		);
	}
	jint EnvironmentalReverb::PARAM_REVERB_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_REVERB_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_ROOM_HF_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_HF_LEVEL"
		);
	}
	jint EnvironmentalReverb::PARAM_ROOM_LEVEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.EnvironmentalReverb",
			"PARAM_ROOM_LEVEL"
		);
	}
	
	EnvironmentalReverb::EnvironmentalReverb(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EnvironmentalReverb::EnvironmentalReverb(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.EnvironmentalReverb",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jshort EnvironmentalReverb::getDecayHFRatio()
	{
		return __thiz.callMethod<jshort>(
			"getDecayHFRatio",
			"()S"
		);
	}
	jint EnvironmentalReverb::getDecayTime()
	{
		return __thiz.callMethod<jint>(
			"getDecayTime",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getDensity()
	{
		return __thiz.callMethod<jshort>(
			"getDensity",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getDiffusion()
	{
		return __thiz.callMethod<jshort>(
			"getDiffusion",
			"()S"
		);
	}
	QAndroidJniObject EnvironmentalReverb::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/EnvironmentalReverb$Settings;"
		);
	}
	jint EnvironmentalReverb::getReflectionsDelay()
	{
		return __thiz.callMethod<jint>(
			"getReflectionsDelay",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getReflectionsLevel()
	{
		return __thiz.callMethod<jshort>(
			"getReflectionsLevel",
			"()S"
		);
	}
	jint EnvironmentalReverb::getReverbDelay()
	{
		return __thiz.callMethod<jint>(
			"getReverbDelay",
			"()I"
		);
	}
	jshort EnvironmentalReverb::getReverbLevel()
	{
		return __thiz.callMethod<jshort>(
			"getReverbLevel",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getRoomHFLevel()
	{
		return __thiz.callMethod<jshort>(
			"getRoomHFLevel",
			"()S"
		);
	}
	jshort EnvironmentalReverb::getRoomLevel()
	{
		return __thiz.callMethod<jshort>(
			"getRoomLevel",
			"()S"
		);
	}
	void EnvironmentalReverb::setDecayHFRatio(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setDecayHFRatio",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDecayTime(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDecayTime",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDensity(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setDensity",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setDiffusion(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setDiffusion",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setParameterListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/EnvironmentalReverb$OnParameterChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void EnvironmentalReverb::setProperties(android::media::audiofx::EnvironmentalReverb_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/EnvironmentalReverb$Settings;)V",
			arg0.__jniObject().object()
		);
	}
	void EnvironmentalReverb::setReflectionsDelay(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReflectionsDelay",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReflectionsLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setReflectionsLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReverbDelay(jint arg0)
	{
		__thiz.callMethod<void>(
			"setReverbDelay",
			"(I)V",
			arg0
		);
	}
	void EnvironmentalReverb::setReverbLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setReverbLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setRoomHFLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setRoomHFLevel",
			"(S)V",
			arg0
		);
	}
	void EnvironmentalReverb::setRoomLevel(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setRoomLevel",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

