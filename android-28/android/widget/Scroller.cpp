#include "../content/Context.hpp"
#include "./Scroller.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Scroller::Scroller(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Scroller::Scroller(android::content::Context arg0)
		: __JniBaseClass(
			"android.widget.Scroller",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Scroller::Scroller(android::content::Context arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.object(),
			arg1.object()
		) {}
	Scroller::Scroller(android::content::Context arg0, __JniBaseClass arg1, jboolean arg2)
		: __JniBaseClass(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	void Scroller::abortAnimation()
	{
		callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	jboolean Scroller::computeScrollOffset()
	{
		return callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	void Scroller::extendDuration(jint arg0)
	{
		callMethod<void>(
			"extendDuration",
			"(I)V",
			arg0
		);
	}
	void Scroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
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
	void Scroller::forceFinished(jboolean arg0)
	{
		callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	jfloat Scroller::getCurrVelocity()
	{
		return callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	jint Scroller::getCurrX()
	{
		return callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	jint Scroller::getCurrY()
	{
		return callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	jint Scroller::getDuration()
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jint Scroller::getFinalX()
	{
		return callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	jint Scroller::getFinalY()
	{
		return callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	jint Scroller::getStartX()
	{
		return callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	jint Scroller::getStartY()
	{
		return callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	jboolean Scroller::isFinished()
	{
		return callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	void Scroller::setFinalX(jint arg0)
	{
		callMethod<void>(
			"setFinalX",
			"(I)V",
			arg0
		);
	}
	void Scroller::setFinalY(jint arg0)
	{
		callMethod<void>(
			"setFinalY",
			"(I)V",
			arg0
		);
	}
	void Scroller::setFriction(jfloat arg0)
	{
		callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
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
	jint Scroller::timePassed()
	{
		return callMethod<jint>(
			"timePassed",
			"()I"
		);
	}
} // namespace android::widget

