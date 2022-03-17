#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./Keyframe.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline Keyframe::Keyframe()
		: JObject(
			"android.animation.Keyframe",
			"()V"
		) {}
	
	// Methods
	inline android::animation::Keyframe Keyframe::ofFloat(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	inline android::animation::Keyframe Keyframe::ofFloat(jfloat arg0, jfloat arg1)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(FF)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	inline android::animation::Keyframe Keyframe::ofInt(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	inline android::animation::Keyframe Keyframe::ofInt(jfloat arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(FI)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	inline android::animation::Keyframe Keyframe::ofObject(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	inline android::animation::Keyframe Keyframe::ofObject(jfloat arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(FLjava/lang/Object;)Landroid/animation/Keyframe;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline android::animation::Keyframe Keyframe::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/Keyframe;"
		);
	}
	inline jfloat Keyframe::getFraction() const
	{
		return callMethod<jfloat>(
			"getFraction",
			"()F"
		);
	}
	inline JObject Keyframe::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	inline JClass Keyframe::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	inline JObject Keyframe::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean Keyframe::hasValue() const
	{
		return callMethod<jboolean>(
			"hasValue",
			"()Z"
		);
	}
	inline void Keyframe::setFraction(jfloat arg0) const
	{
		callMethod<void>(
			"setFraction",
			"(F)V",
			arg0
		);
	}
	inline void Keyframe::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	inline void Keyframe::setValue(JObject arg0) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::animation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::animation;
#endif
