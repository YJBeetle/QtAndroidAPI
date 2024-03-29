#pragma once

#include "../../../JCharArray.hpp"
#include "../Paint.def.hpp"
#include "./MeasuredText.def.hpp"
#include "./MeasuredText_Builder.def.hpp"

namespace android::graphics::text
{
	// Fields
	
	// Constructors
	inline MeasuredText_Builder::MeasuredText_Builder(JCharArray arg0)
		: JObject(
			"android.graphics.text.MeasuredText$Builder",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	inline MeasuredText_Builder::MeasuredText_Builder(android::graphics::text::MeasuredText arg0)
		: JObject(
			"android.graphics.text.MeasuredText$Builder",
			"(Landroid/graphics/text/MeasuredText;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::text::MeasuredText_Builder MeasuredText_Builder::appendReplacementRun(android::graphics::Paint arg0, jint arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"appendReplacementRun",
			"(Landroid/graphics/Paint;IF)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::graphics::text::MeasuredText_Builder MeasuredText_Builder::appendStyleRun(android::graphics::Paint arg0, jint arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"appendStyleRun",
			"(Landroid/graphics/Paint;IZ)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::graphics::text::MeasuredText MeasuredText_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/text/MeasuredText;"
		);
	}
	inline android::graphics::text::MeasuredText_Builder MeasuredText_Builder::setComputeHyphenation(jboolean arg0) const
	{
		return callObjectMethod(
			"setComputeHyphenation",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
	inline android::graphics::text::MeasuredText_Builder MeasuredText_Builder::setComputeLayout(jboolean arg0) const
	{
		return callObjectMethod(
			"setComputeLayout",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::text;
#endif
