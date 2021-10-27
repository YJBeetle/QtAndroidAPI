#include "./VibrationEffect.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject VibrationEffect::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.VibrationEffect",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint VibrationEffect::DEFAULT_AMPLITUDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.VibrationEffect",
			"DEFAULT_AMPLITUDE"
		);
	}
	jint VibrationEffect::EFFECT_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_CLICK"
		);
	}
	jint VibrationEffect::EFFECT_DOUBLE_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_DOUBLE_CLICK"
		);
	}
	jint VibrationEffect::EFFECT_HEAVY_CLICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_HEAVY_CLICK"
		);
	}
	jint VibrationEffect::EFFECT_TICK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.VibrationEffect",
			"EFFECT_TICK"
		);
	}
	
	VibrationEffect::VibrationEffect(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject VibrationEffect::createOneShot(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createOneShot",
			"(JI)Landroid/os/VibrationEffect;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VibrationEffect::createPredefined(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createPredefined",
			"(I)Landroid/os/VibrationEffect;",
			arg0
		);
	}
	QAndroidJniObject VibrationEffect::createWaveform(jlongArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createWaveform",
			"([JI)Landroid/os/VibrationEffect;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VibrationEffect::createWaveform(jlongArray arg0, jintArray arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.VibrationEffect",
			"createWaveform",
			"([J[II)Landroid/os/VibrationEffect;",
			arg0,
			arg1,
			arg2
		);
	}
	jint VibrationEffect::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
} // namespace android::os

