#pragma once

#include "../content/Context.def.hpp"
#include "./Scroller.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Scroller::Scroller(android::content::Context arg0)
		: JObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Scroller::Scroller(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Scroller::Scroller(android::content::Context arg0, JObject arg1, jboolean arg2)
		: JObject(
			"android.widget.Scroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline void Scroller::abortAnimation() const
	{
		callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	inline jboolean Scroller::computeScrollOffset() const
	{
		return callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	inline void Scroller::extendDuration(jint arg0) const
	{
		callMethod<void>(
			"extendDuration",
			"(I)V",
			arg0
		);
	}
	inline void Scroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7) const
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
	inline void Scroller::forceFinished(jboolean arg0) const
	{
		callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	inline jfloat Scroller::getCurrVelocity() const
	{
		return callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	inline jint Scroller::getCurrX() const
	{
		return callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	inline jint Scroller::getCurrY() const
	{
		return callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	inline jint Scroller::getDuration() const
	{
		return callMethod<jint>(
			"getDuration",
			"()I"
		);
	}
	inline jint Scroller::getFinalX() const
	{
		return callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	inline jint Scroller::getFinalY() const
	{
		return callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	inline jint Scroller::getStartX() const
	{
		return callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	inline jint Scroller::getStartY() const
	{
		return callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	inline jboolean Scroller::isFinished() const
	{
		return callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	inline void Scroller::setFinalX(jint arg0) const
	{
		callMethod<void>(
			"setFinalX",
			"(I)V",
			arg0
		);
	}
	inline void Scroller::setFinalY(jint arg0) const
	{
		callMethod<void>(
			"setFinalY",
			"(I)V",
			arg0
		);
	}
	inline void Scroller::setFriction(jfloat arg0) const
	{
		callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	inline void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void Scroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline jint Scroller::timePassed() const
	{
		return callMethod<jint>(
			"timePassed",
			"()I"
		);
	}
} // namespace android::widget

// Base class headers

