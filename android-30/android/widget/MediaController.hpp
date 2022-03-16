#pragma once

#include "../content/Context.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./MediaController.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline MediaController::MediaController(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.MediaController",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline MediaController::MediaController(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.MediaController",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline MediaController::MediaController(android::content::Context arg0, jboolean arg1)
		: android::widget::FrameLayout(
			"android.widget.MediaController",
			"(Landroid/content/Context;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jboolean MediaController::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline JString MediaController::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void MediaController::hide() const
	{
		callMethod<void>(
			"hide",
			"()V"
		);
	}
	inline jboolean MediaController::isShowing() const
	{
		return callMethod<jboolean>(
			"isShowing",
			"()Z"
		);
	}
	inline void MediaController::onFinishInflate() const
	{
		callMethod<void>(
			"onFinishInflate",
			"()V"
		);
	}
	inline jboolean MediaController::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean MediaController::onTrackballEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void MediaController::setAnchorView(android::view::View arg0) const
	{
		callMethod<void>(
			"setAnchorView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void MediaController::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void MediaController::setMediaPlayer(JObject arg0) const
	{
		callMethod<void>(
			"setMediaPlayer",
			"(Landroid/widget/MediaController$MediaPlayerControl;)V",
			arg0.object()
		);
	}
	inline void MediaController::setPrevNextListeners(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setPrevNextListeners",
			"(Landroid/view/View$OnClickListener;Landroid/view/View$OnClickListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaController::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
	inline void MediaController::show(jint arg0) const
	{
		callMethod<void>(
			"show",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

