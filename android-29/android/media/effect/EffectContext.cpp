#include "./EffectFactory.hpp"
#include "./EffectContext.hpp"

namespace android::media::effect
{
	// Fields
	
	EffectContext::EffectContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::media::effect

