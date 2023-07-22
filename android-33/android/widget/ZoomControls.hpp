#pragma once

#include "../content/Context.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../../JString.hpp"
#include "./ZoomControls.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ZoomControls::ZoomControls(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ZoomControls::ZoomControls(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.ZoomControls",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JString ZoomControls::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ZoomControls::hasFocus() const
	{
		return callMethod<jboolean>(
			"hasFocus",
			"()Z"
		);
	}
	inline void ZoomControls::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	inline jboolean ZoomControls::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void ZoomControls::setIsZoomInEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setIsZoomInEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomControls::setIsZoomOutEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setIsZoomOutEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void ZoomControls::setOnZoomInClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnZoomInClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void ZoomControls::setOnZoomOutClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnZoomOutClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void ZoomControls::setZoomSpeed(jlong arg0) const
	{
		callMethod<void>(
			"setZoomSpeed",
			"(J)V",
			arg0
		);
	}
	inline void ZoomControls::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
