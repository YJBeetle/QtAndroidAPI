#pragma once

#include "../../graphics/MaskFilter.def.hpp"
#include "../TextPaint.def.hpp"
#include "../../../JString.hpp"
#include "./MaskFilterSpan.def.hpp"

namespace android::text::style
{
	// Fields
	
	// Constructors
	inline MaskFilterSpan::MaskFilterSpan(android::graphics::MaskFilter arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.MaskFilterSpan",
			"(Landroid/graphics/MaskFilter;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::MaskFilter MaskFilterSpan::getMaskFilter() const
	{
		return callObjectMethod(
			"getMaskFilter",
			"()Landroid/graphics/MaskFilter;"
		);
	}
	inline JString MaskFilterSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MaskFilterSpan::updateDrawState(android::text::TextPaint arg0) const
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
