#pragma once

#include "../content/Context.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./ZoomButton.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ZoomButton::ZoomButton(android::content::Context arg0)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ZoomButton::ZoomButton(android::content::Context arg0, JObject arg1)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ZoomButton::ZoomButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ZoomButton::ZoomButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ImageButton(
			"android.widget.ZoomButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jboolean ZoomButton::dispatchUnhandledMove(android::view::View arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledMove",
			"(Landroid/view/View;I)Z",
			arg0.object(),
			arg1
		);
	}
	inline JString ZoomButton::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ZoomButton::onKeyUp(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean ZoomButton::onLongClick(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"onLongClick",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean ZoomButton::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void ZoomButton::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomButton::setZoomSpeed(jlong arg0) const
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./ImageView.hpp"
#include "./ImageButton.hpp"

