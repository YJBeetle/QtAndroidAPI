#pragma once

#include "../../content/Context.def.hpp"
#include "./Animation.def.hpp"
#include "./Transformation.def.hpp"
#include "../../../JObject.hpp"
#include "./AnimationSet.def.hpp"

namespace android::view::animation
{
	// Fields
	
	// Constructors
	inline AnimationSet::AnimationSet(jboolean arg0)
		: android::view::animation::Animation(
			"android.view.animation.AnimationSet",
			"(Z)V",
			arg0
		) {}
	inline AnimationSet::AnimationSet(android::content::Context arg0, JObject arg1)
		: android::view::animation::Animation(
			"android.view.animation.AnimationSet",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void AnimationSet::addAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"addAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	inline jlong AnimationSet::computeDurationHint() const
	{
		return callMethod<jlong>(
			"computeDurationHint",
			"()J"
		);
	}
	inline JObject AnimationSet::getAnimations() const
	{
		return callObjectMethod(
			"getAnimations",
			"()Ljava/util/List;"
		);
	}
	inline jlong AnimationSet::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline jlong AnimationSet::getStartTime() const
	{
		return callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	inline jboolean AnimationSet::getTransformation(jlong arg0, android::view::animation::Transformation arg1) const
	{
		return callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void AnimationSet::initialize(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void AnimationSet::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void AnimationSet::restrictDuration(jlong arg0) const
	{
		callMethod<void>(
			"restrictDuration",
			"(J)V",
			arg0
		);
	}
	inline void AnimationSet::scaleCurrentDuration(jfloat arg0) const
	{
		callMethod<void>(
			"scaleCurrentDuration",
			"(F)V",
			arg0
		);
	}
	inline void AnimationSet::setDuration(jlong arg0) const
	{
		callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	inline void AnimationSet::setFillAfter(jboolean arg0) const
	{
		callMethod<void>(
			"setFillAfter",
			"(Z)V",
			arg0
		);
	}
	inline void AnimationSet::setFillBefore(jboolean arg0) const
	{
		callMethod<void>(
			"setFillBefore",
			"(Z)V",
			arg0
		);
	}
	inline void AnimationSet::setRepeatMode(jint arg0) const
	{
		callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	inline void AnimationSet::setStartOffset(jlong arg0) const
	{
		callMethod<void>(
			"setStartOffset",
			"(J)V",
			arg0
		);
	}
	inline void AnimationSet::setStartTime(jlong arg0) const
	{
		callMethod<void>(
			"setStartTime",
			"(J)V",
			arg0
		);
	}
	inline jboolean AnimationSet::willChangeBounds() const
	{
		return callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	inline jboolean AnimationSet::willChangeTransformationMatrix() const
	{
		return callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation

// Base class headers
#include "./Animation.hpp"

