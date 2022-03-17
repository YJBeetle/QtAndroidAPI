#pragma once

#include "./Choreographer.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::view::Choreographer Choreographer::getInstance()
	{
		return callStaticObjectMethod(
			"android.view.Choreographer",
			"getInstance",
			"()Landroid/view/Choreographer;"
		);
	}
	inline void Choreographer::postFrameCallback(JObject arg0) const
	{
		callMethod<void>(
			"postFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.object()
		);
	}
	inline void Choreographer::postFrameCallbackDelayed(JObject arg0, jlong arg1) const
	{
		callMethod<void>(
			"postFrameCallbackDelayed",
			"(Landroid/view/Choreographer$FrameCallback;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void Choreographer::removeFrameCallback(JObject arg0) const
	{
		callMethod<void>(
			"removeFrameCallback",
			"(Landroid/view/Choreographer$FrameCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

