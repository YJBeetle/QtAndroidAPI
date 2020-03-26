#pragma once

#ifndef ANDROID_MEDIA_EFFECT_EFFECTCONTEXT
#define ANDROID_MEDIA_EFFECT_EFFECTCONTEXT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::effect
{
	class EffectFactory;
}

namespace __jni_impl::android::media::effect
{
	class EffectContext : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getFactory();
		void release();
		static QAndroidJniObject createWithCurrentGlContext();
	};
} // namespace __jni_impl::android::media::effect

#include "EffectFactory.hpp"

namespace __jni_impl::android::media::effect
{
	// Fields
	
	// Constructors
	void EffectContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.effect.EffectContext",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject EffectContext::getFactory()
	{
		return __thiz.callObjectMethod(
			"getFactory",
			"()Landroid/media/effect/EffectFactory;"
		);
	}
	void EffectContext::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	QAndroidJniObject EffectContext::createWithCurrentGlContext()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.effect.EffectContext",
			"createWithCurrentGlContext",
			"()Landroid/media/effect/EffectContext;"
		);
	}
} // namespace __jni_impl::android::media::effect

namespace android::media::effect
{
	class EffectContext : public __jni_impl::android::media::effect::EffectContext
	{
	public:
		EffectContext(QAndroidJniObject obj) { __thiz = obj; }
		EffectContext()
		{
			__constructor();
		}
	};
} // namespace android::media::effect

#endif // ANDROID_MEDIA_EFFECT_EFFECTCONTEXT

