#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Effect.def.hpp"

namespace android::media::effect
{
	// Fields
	
	// Constructors
	inline Effect::Effect()
		: JObject(
			"android.media.effect.Effect",
			"()V"
		) {}
	
	// Methods
	inline void Effect::apply(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"apply",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline JString Effect::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline void Effect::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline void Effect::setParameter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void Effect::setUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"setUpdateListener",
			"(Landroid/media/effect/EffectUpdateListener;)V",
			arg0.object()
		);
	}
} // namespace android::media::effect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::effect;
#endif
