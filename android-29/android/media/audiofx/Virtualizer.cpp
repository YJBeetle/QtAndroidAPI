#include "./Virtualizer_Settings.hpp"
#include "./Virtualizer.hpp"

namespace android::media::audiofx
{
	// Fields
	jint Virtualizer::PARAM_STRENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH"
		);
	}
	jint Virtualizer::PARAM_STRENGTH_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_AUTO"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_BINAURAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_BINAURAL"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_OFF"
		);
	}
	jint Virtualizer::VIRTUALIZATION_MODE_TRANSAURAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.Virtualizer",
			"VIRTUALIZATION_MODE_TRANSAURAL"
		);
	}
	
	Virtualizer::Virtualizer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Virtualizer::Virtualizer(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.Virtualizer",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean Virtualizer::canVirtualize(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"canVirtualize",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean Virtualizer::forceVirtualizationMode(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"forceVirtualizationMode",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject Virtualizer::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/Virtualizer$Settings;"
		);
	}
	jshort Virtualizer::getRoundedStrength()
	{
		return __thiz.callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	jboolean Virtualizer::getSpeakerAngles(jint arg0, jint arg1, jintArray arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getSpeakerAngles",
			"(II[I)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Virtualizer::getStrengthSupported()
	{
		return __thiz.callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	jint Virtualizer::getVirtualizationMode()
	{
		return __thiz.callMethod<jint>(
			"getVirtualizationMode",
			"()I"
		);
	}
	void Virtualizer::setParameterListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/Virtualizer$OnParameterChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Virtualizer::setProperties(android::media::audiofx::Virtualizer_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/Virtualizer$Settings;)V",
			arg0.__jniObject().object()
		);
	}
	void Virtualizer::setStrength(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

