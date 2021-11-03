#include "../../content/Context.hpp"
#include "./Transformation.hpp"
#include "../../../JObject.hpp"
#include "./Animation.hpp"

namespace android::view::animation
{
	// Fields
	jint Animation::ABSOLUTE()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ABSOLUTE"
		);
	}
	jint Animation::INFINITE()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"INFINITE"
		);
	}
	jint Animation::RELATIVE_TO_PARENT()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"RELATIVE_TO_PARENT"
		);
	}
	jint Animation::RELATIVE_TO_SELF()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"RELATIVE_TO_SELF"
		);
	}
	jint Animation::RESTART()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"RESTART"
		);
	}
	jint Animation::REVERSE()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"REVERSE"
		);
	}
	jint Animation::START_ON_FIRST_FRAME()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"START_ON_FIRST_FRAME"
		);
	}
	jint Animation::ZORDER_BOTTOM()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_BOTTOM"
		);
	}
	jint Animation::ZORDER_NORMAL()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_NORMAL"
		);
	}
	jint Animation::ZORDER_TOP()
	{
		return getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_TOP"
		);
	}
	
	// QAndroidJniObject forward
	Animation::Animation(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Animation::Animation()
		: JObject(
			"android.view.animation.Animation",
			"()V"
		) {}
	Animation::Animation(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.animation.Animation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void Animation::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jlong Animation::computeDurationHint() const
	{
		return callMethod<jlong>(
			"computeDurationHint",
			"()J"
		);
	}
	jint Animation::getBackgroundColor() const
	{
		return callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	jboolean Animation::getDetachWallpaper() const
	{
		return callMethod<jboolean>(
			"getDetachWallpaper",
			"()Z"
		);
	}
	jlong Animation::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jboolean Animation::getFillAfter() const
	{
		return callMethod<jboolean>(
			"getFillAfter",
			"()Z"
		);
	}
	jboolean Animation::getFillBefore() const
	{
		return callMethod<jboolean>(
			"getFillBefore",
			"()Z"
		);
	}
	JObject Animation::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint Animation::getRepeatCount() const
	{
		return callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint Animation::getRepeatMode() const
	{
		return callMethod<jint>(
			"getRepeatMode",
			"()I"
		);
	}
	jlong Animation::getStartOffset() const
	{
		return callMethod<jlong>(
			"getStartOffset",
			"()J"
		);
	}
	jlong Animation::getStartTime() const
	{
		return callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	jboolean Animation::getTransformation(jlong arg0, android::view::animation::Transformation arg1) const
	{
		return callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean Animation::getTransformation(jlong arg0, android::view::animation::Transformation arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;F)Z",
			arg0,
			arg1.object(),
			arg2
		);
	}
	jint Animation::getZAdjustment() const
	{
		return callMethod<jint>(
			"getZAdjustment",
			"()I"
		);
	}
	jboolean Animation::hasEnded() const
	{
		return callMethod<jboolean>(
			"hasEnded",
			"()Z"
		);
	}
	jboolean Animation::hasStarted() const
	{
		return callMethod<jboolean>(
			"hasStarted",
			"()Z"
		);
	}
	void Animation::initialize(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	jboolean Animation::isFillEnabled() const
	{
		return callMethod<jboolean>(
			"isFillEnabled",
			"()Z"
		);
	}
	jboolean Animation::isInitialized() const
	{
		return callMethod<jboolean>(
			"isInitialized",
			"()Z"
		);
	}
	void Animation::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Animation::restrictDuration(jlong arg0) const
	{
		callMethod<void>(
			"restrictDuration",
			"(J)V",
			arg0
		);
	}
	void Animation::scaleCurrentDuration(jfloat arg0) const
	{
		callMethod<void>(
			"scaleCurrentDuration",
			"(F)V",
			arg0
		);
	}
	void Animation::setAnimationListener(JObject arg0) const
	{
		callMethod<void>(
			"setAnimationListener",
			"(Landroid/view/animation/Animation$AnimationListener;)V",
			arg0.object()
		);
	}
	void Animation::setBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void Animation::setDetachWallpaper(jboolean arg0) const
	{
		callMethod<void>(
			"setDetachWallpaper",
			"(Z)V",
			arg0
		);
	}
	void Animation::setDuration(jlong arg0) const
	{
		callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void Animation::setFillAfter(jboolean arg0) const
	{
		callMethod<void>(
			"setFillAfter",
			"(Z)V",
			arg0
		);
	}
	void Animation::setFillBefore(jboolean arg0) const
	{
		callMethod<void>(
			"setFillBefore",
			"(Z)V",
			arg0
		);
	}
	void Animation::setFillEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setFillEnabled",
			"(Z)V",
			arg0
		);
	}
	void Animation::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.object()
		);
	}
	void Animation::setInterpolator(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void Animation::setRepeatCount(jint arg0) const
	{
		callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	void Animation::setRepeatMode(jint arg0) const
	{
		callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void Animation::setStartOffset(jlong arg0) const
	{
		callMethod<void>(
			"setStartOffset",
			"(J)V",
			arg0
		);
	}
	void Animation::setStartTime(jlong arg0) const
	{
		callMethod<void>(
			"setStartTime",
			"(J)V",
			arg0
		);
	}
	void Animation::setZAdjustment(jint arg0) const
	{
		callMethod<void>(
			"setZAdjustment",
			"(I)V",
			arg0
		);
	}
	void Animation::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	void Animation::startNow() const
	{
		callMethod<void>(
			"startNow",
			"()V"
		);
	}
	jboolean Animation::willChangeBounds() const
	{
		return callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	jboolean Animation::willChangeTransformationMatrix() const
	{
		return callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation

