#pragma once

#include "../content/Context.def.hpp"
#include "./OverScroller.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline OverScroller::OverScroller(android::content::Context arg0)
		: JObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline OverScroller::OverScroller(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline OverScroller::OverScroller(android::content::Context arg0, JObject arg1, jfloat arg2, jfloat arg3)
		: JObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FF)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline OverScroller::OverScroller(android::content::Context arg0, JObject arg1, jfloat arg2, jfloat arg3, jboolean arg4)
		: JObject(
			"android.widget.OverScroller",
			"(Landroid/content/Context;Landroid/view/animation/Interpolator;FFZ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline void OverScroller::abortAnimation() const
	{
		callMethod<void>(
			"abortAnimation",
			"()V"
		);
	}
	inline jboolean OverScroller::computeScrollOffset() const
	{
		return callMethod<jboolean>(
			"computeScrollOffset",
			"()Z"
		);
	}
	inline void OverScroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7) const
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
	inline void OverScroller::fling(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9) const
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
	inline void OverScroller::forceFinished(jboolean arg0) const
	{
		callMethod<void>(
			"forceFinished",
			"(Z)V",
			arg0
		);
	}
	inline jfloat OverScroller::getCurrVelocity() const
	{
		return callMethod<jfloat>(
			"getCurrVelocity",
			"()F"
		);
	}
	inline jint OverScroller::getCurrX() const
	{
		return callMethod<jint>(
			"getCurrX",
			"()I"
		);
	}
	inline jint OverScroller::getCurrY() const
	{
		return callMethod<jint>(
			"getCurrY",
			"()I"
		);
	}
	inline jint OverScroller::getFinalX() const
	{
		return callMethod<jint>(
			"getFinalX",
			"()I"
		);
	}
	inline jint OverScroller::getFinalY() const
	{
		return callMethod<jint>(
			"getFinalY",
			"()I"
		);
	}
	inline jint OverScroller::getStartX() const
	{
		return callMethod<jint>(
			"getStartX",
			"()I"
		);
	}
	inline jint OverScroller::getStartY() const
	{
		return callMethod<jint>(
			"getStartY",
			"()I"
		);
	}
	inline jboolean OverScroller::isFinished() const
	{
		return callMethod<jboolean>(
			"isFinished",
			"()Z"
		);
	}
	inline jboolean OverScroller::isOverScrolled() const
	{
		return callMethod<jboolean>(
			"isOverScrolled",
			"()Z"
		);
	}
	inline void OverScroller::notifyHorizontalEdgeReached(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"notifyHorizontalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void OverScroller::notifyVerticalEdgeReached(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"notifyVerticalEdgeReached",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void OverScroller::setFriction(jfloat arg0) const
	{
		callMethod<void>(
			"setFriction",
			"(F)V",
			arg0
		);
	}
	inline jboolean OverScroller::springBack(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const
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
	inline void OverScroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void OverScroller::startScroll(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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

// Base class headers

