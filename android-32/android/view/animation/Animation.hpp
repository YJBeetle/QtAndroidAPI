#pragma once

#include "../../content/Context.def.hpp"
#include "./Transformation.def.hpp"
#include "../../../JObject.hpp"
#include "./Animation.def.hpp"

namespace android::view::animation
{
	// Fields
	inline jint Animation::ABSOLUTE()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ABSOLUTE"
		);
	}
	inline jint Animation::INFINITE()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"INFINITE"
		);
	}
	inline jint Animation::RELATIVE_TO_PARENT()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"RELATIVE_TO_PARENT"
		);
	}
	inline jint Animation::RELATIVE_TO_SELF()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"RELATIVE_TO_SELF"
		);
	}
	inline jint Animation::RESTART()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"RESTART"
		);
	}
	inline jint Animation::REVERSE()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"REVERSE"
		);
	}
	inline jint Animation::START_ON_FIRST_FRAME()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"START_ON_FIRST_FRAME"
		);
	}
	inline jint Animation::ZORDER_BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_BOTTOM"
		);
	}
	inline jint Animation::ZORDER_NORMAL()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_NORMAL"
		);
	}
	inline jint Animation::ZORDER_TOP()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_TOP"
		);
	}
	
	// Constructors
	inline Animation::Animation()
		: JObject(
			"android.view.animation.Animation",
			"()V"
		) {}
	inline Animation::Animation(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.animation.Animation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void Animation::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jlong Animation::computeDurationHint() const
	{
		return callMethod<jlong>(
			"computeDurationHint",
			"()J"
		);
	}
	inline jint Animation::getBackgroundColor() const
	{
		return callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	inline jboolean Animation::getDetachWallpaper() const
	{
		return callMethod<jboolean>(
			"getDetachWallpaper",
			"()Z"
		);
	}
	inline jlong Animation::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	inline jboolean Animation::getFillAfter() const
	{
		return callMethod<jboolean>(
			"getFillAfter",
			"()Z"
		);
	}
	inline jboolean Animation::getFillBefore() const
	{
		return callMethod<jboolean>(
			"getFillBefore",
			"()Z"
		);
	}
	inline JObject Animation::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	inline jint Animation::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	inline jint Animation::getRepeatMode() const
	{
		return callMethod<jint>(
			"getRepeatMode",
			"()I"
		);
	}
	inline jlong Animation::getStartOffset() const
	{
		return callMethod<jlong>(
			"getStartOffset",
			"()J"
		);
	}
	inline jlong Animation::getStartTime() const
	{
		return callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	inline jboolean Animation::getTransformation(jlong arg0, android::view::animation::Transformation arg1) const
	{
		return callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Animation::getTransformation(jlong arg0, android::view::animation::Transformation arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;F)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	inline jint Animation::getZAdjustment() const
	{
		return callMethod<jint>(
			"getZAdjustment",
			"()I"
		);
	}
	inline jboolean Animation::hasEnded() const
	{
		return callMethod<jboolean>(
			"hasEnded",
			"()Z"
		);
	}
	inline jboolean Animation::hasStarted() const
	{
		return callMethod<jboolean>(
			"hasStarted",
			"()Z"
		);
	}
	inline void Animation::initialize(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline jboolean Animation::isFillEnabled() const
	{
		return callMethod<jboolean>(
			"isFillEnabled",
			"()Z"
		);
	}
	inline jboolean Animation::isInitialized() const
	{
		return callMethod<jboolean>(
			"isInitialized",
			"()Z"
		);
	}
	inline void Animation::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Animation::restrictDuration(jlong arg0) const
	{
		callMethod<void>(
			"restrictDuration",
			"(J)V",
			arg0
		);
	}
	inline void Animation::scaleCurrentDuration(jfloat arg0) const
	{
		callMethod<void>(
			"scaleCurrentDuration",
			"(F)V",
			arg0
		);
	}
	inline void Animation::setAnimationListener(JObject arg0) const
	{
		callMethod<void>(
			"setAnimationListener",
			"(Landroid/view/animation/Animation$AnimationListener;)V",
			arg0.object()
		);
	}
	inline void Animation::setBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	inline void Animation::setDetachWallpaper(jboolean arg0) const
	{
		callMethod<void>(
			"setDetachWallpaper",
			"(Z)V",
			arg0
		);
	}
	inline void Animation::setDuration(jlong arg0) const
	{
		callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	inline void Animation::setFillAfter(jboolean arg0) const
	{
		callMethod<void>(
			"setFillAfter",
			"(Z)V",
			arg0
		);
	}
	inline void Animation::setFillBefore(jboolean arg0) const
	{
		callMethod<void>(
			"setFillBefore",
			"(Z)V",
			arg0
		);
	}
	inline void Animation::setFillEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setFillEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void Animation::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.object()
		);
	}
	inline void Animation::setInterpolator(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Animation::setRepeatCount(jint arg0) const
	{
		callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	inline void Animation::setRepeatMode(jint arg0) const
	{
		callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	inline void Animation::setStartOffset(jlong arg0) const
	{
		callMethod<void>(
			"setStartOffset",
			"(J)V",
			arg0
		);
	}
	inline void Animation::setStartTime(jlong arg0) const
	{
		callMethod<void>(
			"setStartTime",
			"(J)V",
			arg0
		);
	}
	inline void Animation::setZAdjustment(jint arg0) const
	{
		callMethod<void>(
			"setZAdjustment",
			"(I)V",
			arg0
		);
	}
	inline void Animation::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline void Animation::startNow() const
	{
		callMethod<void>(
			"startNow",
			"()V"
		);
	}
	inline jboolean Animation::willChangeBounds() const
	{
		return callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	inline jboolean Animation::willChangeTransformationMatrix() const
	{
		return callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::animation;
#endif
