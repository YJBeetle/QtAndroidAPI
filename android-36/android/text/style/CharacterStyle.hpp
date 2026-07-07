#pragma once

#include "../TextPaint.def.hpp"
#include "./CharacterStyle.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline CharacterStyle::CharacterStyle()
		: JObject(
			"android.text.style.CharacterStyle",
			"()V"
		) {}
	
	// Methods
	inline android::text::style::CharacterStyle CharacterStyle::wrap(android::text::style::CharacterStyle arg0)
	{
		return callStaticObjectMethod(
			"android.text.style.CharacterStyle",
			"wrap",
			"(Landroid/text/style/CharacterStyle;)Landroid/text/style/CharacterStyle;",
			arg0.object()
		);
	}
	inline android::text::style::CharacterStyle CharacterStyle::getUnderlying() const
	{
		return callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/CharacterStyle;"
		);
	}
	inline void CharacterStyle::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
} // namespace android::text::style

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
