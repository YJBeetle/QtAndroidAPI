#include "../content/Context.hpp"
#include "./Scroller.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Scroller::Scroller(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Scroller::Scroller(android::content::Context arg0)
		: JObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Scroller::Scroller(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.object(),
			arg1.object()
		) {}
	Scroller::Scroller(android::content::Context arg0, JObject arg1, jboolean arg2)
		: JObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	void Scroller::abortAnimation() const
	{
		callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	jboolean Scroller::computeScrollOffset() const
	{
		return callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	void Scroller::extendDuration(jint arg0) const
	{
		callMethod<void>(
			"extendDuration",
			"(I)V",
			arg0
		);
	}
	void Scroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7) const
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
	void Scroller::forceFinished(jboolean arg0) const
	{
		callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	jfloat Scroller::getCurrVelocity() const
	{
		return callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	jint Scroller::getCurrX() const
	{
		return callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	jint Scroller::getCurrY() const
	{
		return callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	jint Scroller::getDuration() const
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	jint Scroller::getFinalX() const
	{
		return callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	jint Scroller::getFinalY() const
	{
		return callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	jint Scroller::getStartX() const
	{
		return callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	jint Scroller::getStartY() const
	{
		return callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	jboolean Scroller::isFinished() const
	{
		return callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	void Scroller::setFinalX(jint arg0) const
	{
		callMethod<void>(
			"setFinalX",
			"(I)V",
			arg0
		);
	}
	void Scroller::setFinalY(jint arg0) const
	{
		callMethod<void>(
			"setFinalY",
			"(I)V",
			arg0
		);
	}
	void Scroller::setFriction(jfloat arg0) const
	{
		callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	jint Scroller::timePassed() const
	{
		return callMethod<jint>(
			"timePassed",
			"()I"
		);
	}
} // namespace android::widget

