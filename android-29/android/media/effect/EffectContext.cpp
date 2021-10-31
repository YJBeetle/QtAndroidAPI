#include "./EffectFactory.hpp"
#include "./EffectContext.hpp"

namespace android::media::effect
{
	// Fields
	
	// QAndroidJniObject forward
	EffectContext::EffectContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
		return callObjectMethod(
			"getFactory",
			"()Landroid/media/effect/EffectFactory;"
		);
	}
	void EffectContext::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::media::effect

