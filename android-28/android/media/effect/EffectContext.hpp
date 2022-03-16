#pragma once

#include "./EffectFactory.def.hpp"
#include "./EffectContext.def.hpp"

namespace android::media::effect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::media::effect::EffectContext EffectContext::createWithCurrentGlContext()
	{
		return callStaticObjectMethod(
			"android.media.effect.EffectContext",
			"createWithCurrentGlContext",
			"()Landroid/media/effect/EffectContext;"
		);
	}
	inline android::media::effect::EffectFactory EffectContext::getFactory() const
	{
		return callObjectMethod(
			"getFactory",
			"()Landroid/media/effect/EffectFactory;"
		);
	}
	inline void EffectContext::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::media::effect

// Base class headers

