#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./AdapterViewFlipper.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AdapterViewFlipper::AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterViewAnimator(
			"android.widget.AdapterViewFlipper",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void AdapterViewFlipper::fyiWillBeAdvancedByHostKThx() const
	{
		callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	inline JString AdapterViewFlipper::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AdapterViewFlipper::getFlipInterval() const
	{
		return callMethod<jint>(
			"getFlipInterval",
			"()I"
		);
	}
	inline jboolean AdapterViewFlipper::isAutoStart() const
	{
		return callMethod<jboolean>(
			"isAutoStart",
			"()Z"
		);
	}
	inline jboolean AdapterViewFlipper::isFlipping() const
	{
		return callMethod<jboolean>(
			"isFlipping",
			"()Z"
		);
	}
	inline void AdapterViewFlipper::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void AdapterViewFlipper::setAutoStart(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoStart",
			"(Z)V",
			arg0
		);
	}
	inline void AdapterViewFlipper::setFlipInterval(jint arg0) const
	{
		callMethod<void>(
			"setFlipInterval",
			"(I)V",
			arg0
		);
	}
	inline void AdapterViewFlipper::showNext() const
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	inline void AdapterViewFlipper::showPrevious() const
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
	inline void AdapterViewFlipper::startFlipping() const
	{
		callMethod<void>(
			"startFlipping",
			"()V"
		);
	}
	inline void AdapterViewFlipper::stopFlipping() const
	{
		callMethod<void>(
			"stopFlipping",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AdapterViewAnimator.hpp"

