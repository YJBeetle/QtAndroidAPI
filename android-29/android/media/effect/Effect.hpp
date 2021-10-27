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
		void apply(jint arg0, jint arg1, jint arg2, jint arg3);
		jstring getName();
		void release();
		void setParameter(jstring arg0, jobject arg1);
		void setParameter(const QString &arg0, jobject arg1);
		void setUpdateListener(__jni_impl::__JniBaseClass arg0);
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
			"()V"
		);
	}
	
	// Methods
	void Effect::apply(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"apply",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jstring Effect::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Effect::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void Effect::setParameter(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Effect::setParameter(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Effect::setUpdateListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setUpdateListener",
			"(Landroid/media/effect/EffectUpdateListener;)V",
			arg0.__jniObject().object()
		);
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

