#pragma once

#include "../TextPaint.def.hpp"
#include "../../view/View.def.hpp"
#include "./ClickableSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline ClickableSpan::ClickableSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.ClickableSpan",
			"()V"
		) {}
	
	// Methods
	inline void ClickableSpan::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void ClickableSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

// Base class headers
#include "./CharacterStyle.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
