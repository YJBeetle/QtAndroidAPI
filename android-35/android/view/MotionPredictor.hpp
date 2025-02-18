#pragma once

#include "../content/Context.def.hpp"
#include "./MotionEvent.def.hpp"
#include "./MotionPredictor.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	inline MotionPredictor::MotionPredictor(android::content::Context arg0)
		: JObject(
			"android.view.MotionPredictor",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean MotionPredictor::isPredictionAvailable(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isPredictionAvailable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline android::view::MotionEvent MotionPredictor::predict(jlong arg0) const
	{
		return callObjectMethod(
			"predict",
			"(J)Landroid/view/MotionEvent;",
			arg0
		);
	}
	inline void MotionPredictor::record(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"record",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
