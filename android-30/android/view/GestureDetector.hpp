#pragma once

#include "../content/Context.def.hpp"
#include "../os/Handler.def.hpp"
#include "./MotionEvent.def.hpp"
#include "./GestureDetector.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline GestureDetector::GestureDetector(JObject arg0)
		: JObject(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.object()
		) {}
	inline GestureDetector::GestureDetector(android::content::Context arg0, JObject arg1)
		: JObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GestureDetector::GestureDetector(JObject arg0, android::os::Handler arg1)
		: JObject(
			"android.view.GestureDetector",
			"(Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline GestureDetector::GestureDetector(android::content::Context arg0, JObject arg1, android::os::Handler arg2)
		: JObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	inline GestureDetector::GestureDetector(android::content::Context arg0, JObject arg1, android::os::Handler arg2, jboolean arg3)
		: JObject(
			"android.view.GestureDetector",
			"(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline jboolean GestureDetector::isLongpressEnabled() const
	{
		return callMethod<jboolean>(
			"isLongpressEnabled",
			"()Z"
		);
	}
	inline jboolean GestureDetector::onGenericMotionEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean GestureDetector::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void GestureDetector::setContextClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setContextClickListener",
			"(Landroid/view/GestureDetector$OnContextClickListener;)V",
			arg0.object()
		);
	}
	inline void GestureDetector::setIsLongpressEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setIsLongpressEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void GestureDetector::setOnDoubleTapListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDoubleTapListener",
			"(Landroid/view/GestureDetector$OnDoubleTapListener;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

