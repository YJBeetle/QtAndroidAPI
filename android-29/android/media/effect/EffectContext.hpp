#pragma once

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
		static QAndroidJniObject createWithCurrentGlContext();
		QAndroidJniObject getFactory();
		void release();
	};
} // namespace __jni_impl::android::media::effect

#include "./EffectFactory.hpp"

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
	QAndroidJniObject EffectContext::createWithCurrentGlContext()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.effect.EffectContext",
			"createWithCurrentGlContext",
			"()Landroid/media/effect/EffectContext;"
		);
	}
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

