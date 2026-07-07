#pragma once

#include "../../view/KeyEvent.def.hpp"
#include "../../view/MotionEvent.def.hpp"
#include "../../widget/TextView.def.hpp"
#include "./BaseMovementMethod.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline BaseMovementMethod::BaseMovementMethod()
		: JObject(
			"android.text.method.BaseMovementMethod",
			"()V"
		) {}
	
	// Methods
	inline jboolean BaseMovementMethod::canSelectArbitrarily() const
	{
		return callMethod<jboolean>(
			"canSelectArbitrarily",
			"()Z"
		);
	}
	inline void BaseMovementMethod::initialize(android::widget::TextView arg0, JObject arg1) const
	{
		callMethod<void>(
			"initialize",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean BaseMovementMethod::nextParagraph(android::widget::TextView arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"nextParagraph",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean BaseMovementMethod::onGenericMotionEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean BaseMovementMethod::onKeyDown(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean BaseMovementMethod::onKeyOther(android::widget::TextView arg0, JObject arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean BaseMovementMethod::onKeyUp(android::widget::TextView arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline void BaseMovementMethod::onTakeFocus(android::widget::TextView arg0, JObject arg1, jint arg2) const
	{
		callMethod<void>(
			"onTakeFocus",
			"(Landroid/widget/TextView;Landroid/text/Spannable;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jboolean BaseMovementMethod::onTouchEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean BaseMovementMethod::onTrackballEvent(android::widget::TextView arg0, JObject arg1, android::view::MotionEvent arg2) const
	{
		return callMethod<jboolean>(
			"onTrackballEvent",
			"(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jboolean BaseMovementMethod::previousParagraph(android::widget::TextView arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"previousParagraph",
			"(Landroid/widget/TextView;Landroid/text/Spannable;)Z",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::text::method

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
