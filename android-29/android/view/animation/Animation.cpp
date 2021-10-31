#include "../../content/Context.hpp"
#include "./Transformation.hpp"
#include "./Animation.hpp"

namespace android::view::animation
{
	// Fields
	jint Animation::ABSOLUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"ABSOLUTE"
		);
	}
	jint Animation::INFINITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"INFINITE"
		);
	}
	jint Animation::RELATIVE_TO_PARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"RELATIVE_TO_PARENT"
		);
	}
	jint Animation::RELATIVE_TO_SELF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"RELATIVE_TO_SELF"
		);
	}
	jint Animation::RESTART()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"RESTART"
		);
	}
	jint Animation::REVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"REVERSE"
		);
	}
	jint Animation::START_ON_FIRST_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"START_ON_FIRST_FRAME"
		);
	}
	jint Animation::ZORDER_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_BOTTOM"
		);
	}
	jint Animation::ZORDER_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_NORMAL"
		);
	}
	jint Animation::ZORDER_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.animation.Animation",
			"ZORDER_TOP"
		);
	}
	
	Animation::Animation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Animation::Animation()
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.Animation",
			"()V"
		);
	}
	Animation::Animation(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.animation.Animation",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void Animation::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jlong Animation::computeDurationHint()
	{
		return __thiz.callMethod<jlong>(
			"computeDurationHint",
			"()J"
		);
	}
	jint Animation::getBackgroundColor()
	{
		return __thiz.callMethod<jint>(
			"getBackgroundColor",
			"()I"
		);
	}
	jboolean Animation::getDetachWallpaper()
	{
		return __thiz.callMethod<jboolean>(
			"getDetachWallpaper",
			"()Z"
		);
	}
	jlong Animation::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jboolean Animation::getFillAfter()
	{
		return __thiz.callMethod<jboolean>(
			"getFillAfter",
			"()Z"
		);
	}
	jboolean Animation::getFillBefore()
	{
		return __thiz.callMethod<jboolean>(
			"getFillBefore",
			"()Z"
		);
	}
	QAndroidJniObject Animation::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	jint Animation::getRepeatCount()
	{
		return __thiz.callMethod<jint>(
			"getRepeatCount",
			"()I"
		);
	}
	jint Animation::getRepeatMode()
	{
		return __thiz.callMethod<jint>(
			"getRepeatMode",
			"()I"
		);
	}
	jlong Animation::getStartOffset()
	{
		return __thiz.callMethod<jlong>(
			"getStartOffset",
			"()J"
		);
	}
	jlong Animation::getStartTime()
	{
		return __thiz.callMethod<jlong>(
			"getStartTime",
			"()J"
		);
	}
	jboolean Animation::getTransformation(jlong arg0, android::view::animation::Transformation arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Animation::getTransformation(jlong arg0, android::view::animation::Transformation arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"getTransformation",
			"(JLandroid/view/animation/Transformation;F)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint Animation::getZAdjustment()
	{
		return __thiz.callMethod<jint>(
			"getZAdjustment",
			"()I"
		);
	}
	jboolean Animation::hasEnded()
	{
		return __thiz.callMethod<jboolean>(
			"hasEnded",
			"()Z"
		);
	}
	jboolean Animation::hasStarted()
	{
		return __thiz.callMethod<jboolean>(
			"hasStarted",
			"()Z"
		);
	}
	void Animation::initialize(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean Animation::isFillEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isFillEnabled",
			"()Z"
		);
	}
	jboolean Animation::isInitialized()
	{
		return __thiz.callMethod<jboolean>(
			"isInitialized",
			"()Z"
		);
	}
	void Animation::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Animation::restrictDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"restrictDuration",
			"(J)V",
			arg0
		);
	}
	void Animation::scaleCurrentDuration(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"scaleCurrentDuration",
			"(F)V",
			arg0
		);
	}
	void Animation::setAnimationListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationListener",
			"(Landroid/view/animation/Animation$AnimationListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Animation::setBackgroundColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void Animation::setDetachWallpaper(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDetachWallpaper",
			"(Z)V",
			arg0
		);
	}
	void Animation::setDuration(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setDuration",
			"(J)V",
			arg0
		);
	}
	void Animation::setFillAfter(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillAfter",
			"(Z)V",
			arg0
		);
	}
	void Animation::setFillBefore(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillBefore",
			"(Z)V",
			arg0
		);
	}
	void Animation::setFillEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFillEnabled",
			"(Z)V",
			arg0
		);
	}
	void Animation::setInterpolator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void Animation::setInterpolator(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Animation::setRepeatCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatCount",
			"(I)V",
			arg0
		);
	}
	void Animation::setRepeatMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setRepeatMode",
			"(I)V",
			arg0
		);
	}
	void Animation::setStartOffset(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartOffset",
			"(J)V",
			arg0
		);
	}
	void Animation::setStartTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setStartTime",
			"(J)V",
			arg0
		);
	}
	void Animation::setZAdjustment(jint arg0)
	{
		__thiz.callMethod<void>(
			"setZAdjustment",
			"(I)V",
			arg0
		);
	}
	void Animation::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	void Animation::startNow()
	{
		__thiz.callMethod<void>(
			"startNow",
			"()V"
		);
	}
	jboolean Animation::willChangeBounds()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeBounds",
			"()Z"
		);
	}
	jboolean Animation::willChangeTransformationMatrix()
	{
		return __thiz.callMethod<jboolean>(
			"willChangeTransformationMatrix",
			"()Z"
		);
	}
} // namespace android::view::animation

