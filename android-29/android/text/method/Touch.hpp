#pragma once

#include "../Layout.def.hpp"
#include "../../view/MotionEvent.def.hpp"
#include "../../widget/TextView.def.hpp"
#include "./Touch.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint Touch::getInitialScrollX(android::widget::TextView arg0, JObject arg1)
	{
		return callStaticMethod<jint>(
			"android.text.method.Touch",
			"getInitialScrollX",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Touch::getInitialScrollY(android::widget::TextView arg0, JObject arg1)
	{
		return callStaticMethod<jint>(
			"android.text.method.Touch",
			"getInitialScrollY",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Touch::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2)
	{
		return callStaticMethod<jboolean>(
			"android.text.method.Touch",
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Touch::scrollTo(android::widget::TextView arg0, android::text::Layout arg1, jint arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.text.method.Touch",
			"scrollTo",
			"(Landroid/widget/TextView;Landroid/text/Layout;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
} // namespace android::text::method

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
