#include "./EffectFactory.hpp"
#include "./EffectContext.hpp"

namespace android::media::effect
{
	// Fields
	
	// QAndroidJniObject forward
	EffectContext::EffectContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::media::effect::EffectContext EffectContext::createWithCurrentGlContext()
	{
		return callStaticObjectMethod(
			"android.media.effect.EffectContext",
			"createWithCurrentGlContext",
			"()Landroid/media/effect/EffectContext;"
		);
	}
	android::media::effect::EffectFactory EffectContext::getFactory()
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

