#pragma once

#include "./ScaleGestureDetector.def.hpp"
#include "./ScaleGestureDetector_SimpleOnScaleGestureListener.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline ScaleGestureDetector_SimpleOnScaleGestureListener::ScaleGestureDetector_SimpleOnScaleGestureListener()
		: JObject(
			"android.view.ScaleGestureDetector$SimpleOnScaleGestureListener",
			"()V"
		) {}
	
	// Methods
	inline jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScale(android::view::ScaleGestureDetector arg0) const
	{
		return callMethod<jboolean>(
			"onScale",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.object()
		);
	}
	inline jboolean ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleBegin(android::view::ScaleGestureDetector arg0) const
	{
		return callMethod<jboolean>(
			"onScaleBegin",
			"(Landroid/view/ScaleGestureDetector;)Z",
			arg0.object()
		);
	}
	inline void ScaleGestureDetector_SimpleOnScaleGestureListener::onScaleEnd(android::view::ScaleGestureDetector arg0) const
	{
		callMethod<void>(
			"onScaleEnd",
			"(Landroid/view/ScaleGestureDetector;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

