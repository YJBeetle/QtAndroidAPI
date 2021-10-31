#include "../content/Context.hpp"
#include "./OverScroller.hpp"

namespace android::widget
{
	// Fields
	
	OverScroller::OverScroller(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OverScroller::OverScroller(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	OverScroller::OverScroller(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	OverScroller::OverScroller(android::content::Context arg0, __JniBaseClass arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FF)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	OverScroller::OverScroller(android::content::Context arg0, __JniBaseClass arg1, jfloat arg2, jfloat arg3, jboolean arg4)
	{
		__thiz = QAndroidJniObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FFZ)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	void OverScroller::abortAnimation()
	{
		__thiz.callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	jboolean OverScroller::computeScrollOffset()
	{
		return __thiz.callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	void OverScroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"fling",
			"(IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	void OverScroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"fling",
			"(IIIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		);
	}
	void OverScroller::forceFinished(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	jfloat OverScroller::getCurrVelocity()
	{
		return __thiz.callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	jint OverScroller::getCurrX()
	{
		return __thiz.callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	jint OverScroller::getCurrY()
	{
		return __thiz.callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	jint OverScroller::getFinalX()
	{
		return __thiz.callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	jint OverScroller::getFinalY()
	{
		return __thiz.callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	jint OverScroller::getStartX()
	{
		return __thiz.callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	jint OverScroller::getStartY()
	{
		return __thiz.callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	jboolean OverScroller::isFinished()
	{
		return __thiz.callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	jboolean OverScroller::isOverScrolled()
	{
		return __thiz.callMethod<jboolean>(
			"isOverScrolled",
			"()Z"
		);
	}
	void OverScroller::notifyHorizontalEdgeReached(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"notifyHorizontalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OverScroller::notifyVerticalEdgeReached(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"notifyVerticalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OverScroller::setFriction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	jboolean OverScroller::springBack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return __thiz.callMethod<jboolean>(
			"springBack",
			"(IIIIII)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void OverScroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"startScroll",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void OverScroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz.callMethod<void>(
			"startScroll",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace android::widget

