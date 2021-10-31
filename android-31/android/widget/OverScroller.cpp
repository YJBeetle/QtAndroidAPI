#include "../content/Context.hpp"
#include "./OverScroller.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	OverScroller::OverScroller(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	OverScroller::OverScroller(android::content::Context arg0)
		: __JniBaseClass(
			"android.widget.OverScroller",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	OverScroller::OverScroller(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.object(),
			arg1.object()
		) {}
	OverScroller::OverScroller(android::content::Context arg0, __JniBaseClass arg1, jfloat arg2, jfloat arg3)
		: __JniBaseClass(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FF)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	OverScroller::OverScroller(android::content::Context arg0, __JniBaseClass arg1, jfloat arg2, jfloat arg3, jboolean arg4)
		: __JniBaseClass(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FFZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	void OverScroller::abortAnimation()
	{
		callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	jboolean OverScroller::computeScrollOffset()
	{
		return callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	void OverScroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		callMethod<void>(
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
		callMethod<void>(
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
		callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	jfloat OverScroller::getCurrVelocity()
	{
		return callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	jint OverScroller::getCurrX()
	{
		return callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	jint OverScroller::getCurrY()
	{
		return callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	jint OverScroller::getFinalX()
	{
		return callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	jint OverScroller::getFinalY()
	{
		return callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	jint OverScroller::getStartX()
	{
		return callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	jint OverScroller::getStartY()
	{
		return callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	jboolean OverScroller::isFinished()
	{
		return callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	jboolean OverScroller::isOverScrolled()
	{
		return callMethod<jboolean>(
			"isOverScrolled",
			"()Z"
		);
	}
	void OverScroller::notifyHorizontalEdgeReached(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"notifyHorizontalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OverScroller::notifyVerticalEdgeReached(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"notifyVerticalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void OverScroller::setFriction(jfloat arg0)
	{
		callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	jboolean OverScroller::springBack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return callMethod<jboolean>(
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
		callMethod<void>(
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
		callMethod<void>(
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

