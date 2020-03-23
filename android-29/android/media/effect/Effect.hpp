#pragma once

#ifndef ANDROID_MEDIA_EFFECT_EFFECT
#define ANDROID_MEDIA_EFFECT_EFFECT

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::effect
{
	class Effect : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		void apply(jint arg0, jint arg1, jint arg2, jint arg3);
		void release();
		void setUpdateListener(__jni_impl::__JniBaseClass arg0);
		void setParameter(jstring arg0, jobject arg1);
	};
} // namespace __jni_impl::android::media::effect


namespace __jni_impl::android::media::effect
{
	// Fields
	
	// Constructors
	void Effect::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.effect.Effect",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Effect::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	void Effect::apply(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"apply",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Effect::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V");
	}
	void Effect::setUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setUpdateListener",
			"(Landroid/media/effect/EffectUpdateListener;)V",
			arg0.__jniObject().object());
	}
	void Effect::setParameter(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::media::effect

namespace android::media::effect
{
	class Effect : public __jni_impl::android::media::effect::Effect
	{
	public:
		Effect(QAndroidJniObject obj) { __thiz = obj; }
		Effect()
		{
			__constructor();
		}
	};
} // namespace android::media::effect

#endif // ANDROID_MEDIA_EFFECT_EFFECT

