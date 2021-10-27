#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class VibrationEffect : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DEFAULT_AMPLITUDE();
		static jint EFFECT_CLICK();
		static jint EFFECT_DOUBLE_CLICK();
		static jint EFFECT_HEAVY_CLICK();
		static jint EFFECT_TICK();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createOneShot(jlong arg0, jint arg1);
		static QAndroidJniObject createPredefined(jint arg0);
		static QAndroidJniObject createWaveform(jlongArray arg0, jint arg1);
		static QAndroidJniObject createWaveform(jlongArray arg0, jintArray arg1, jint arg2);
		jint describeContents();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
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
	
	// Constructors
	void VibrationEffect::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.VibrationEffect",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::os

namespace android::os
{
	class VibrationEffect : public __jni_impl::android::os::VibrationEffect
	{
	public:
		VibrationEffect(QAndroidJniObject obj) { __thiz = obj; }
		VibrationEffect()
		{
			__constructor();
		}
	};
} // namespace android::os

