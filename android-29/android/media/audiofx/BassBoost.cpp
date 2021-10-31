#include "./BassBoost_Settings.hpp"
#include "./BassBoost.hpp"

namespace android::media::audiofx
{
	// Fields
	jint BassBoost::PARAM_STRENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH"
		);
	}
	jint BassBoost::PARAM_STRENGTH_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.audiofx.BassBoost",
			"PARAM_STRENGTH_SUPPORTED"
		);
	}
	
	BassBoost::BassBoost(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BassBoost::BassBoost(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.BassBoost",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject BassBoost::getProperties()
	{
		return __thiz.callObjectMethod(
			"getProperties",
			"()Landroid/media/audiofx/BassBoost$Settings;"
		);
	}
	jshort BassBoost::getRoundedStrength()
	{
		return __thiz.callMethod<jshort>(
			"getRoundedStrength",
			"()S"
		);
	}
	jboolean BassBoost::getStrengthSupported()
	{
		return __thiz.callMethod<jboolean>(
			"getStrengthSupported",
			"()Z"
		);
	}
	void BassBoost::setParameterListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setParameterListener",
			"(Landroid/media/audiofx/BassBoost$OnParameterChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void BassBoost::setProperties(android::media::audiofx::BassBoost_Settings arg0)
	{
		__thiz.callMethod<void>(
			"setProperties",
			"(Landroid/media/audiofx/BassBoost$Settings;)V",
			arg0.__jniObject().object()
		);
	}
	void BassBoost::setStrength(jshort arg0)
	{
		__thiz.callMethod<void>(
			"setStrength",
			"(S)V",
			arg0
		);
	}
} // namespace android::media::audiofx

