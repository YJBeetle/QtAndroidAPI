#pragma once

#include "./LineBreakConfig.def.hpp"
#include "./LineBreakConfig_Builder.def.hpp"

namespace android::graphics::text
{
	// Fields
	
	// Constructors
	inline LineBreakConfig_Builder::LineBreakConfig_Builder()
		: JObject(
			"android.graphics.text.LineBreakConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::text::LineBreakConfig LineBreakConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/text/LineBreakConfig;"
		);
	}
	inline android::graphics::text::LineBreakConfig_Builder LineBreakConfig_Builder::setLineBreakStyle(jint arg0) const
	{
		return callObjectMethod(
			"setLineBreakStyle",
			"(I)Landroid/graphics/text/LineBreakConfig$Builder;",
			arg0
		);
	}
	inline android::graphics::text::LineBreakConfig_Builder LineBreakConfig_Builder::setLineBreakWordStyle(jint arg0) const
	{
		return callObjectMethod(
			"setLineBreakWordStyle",
			"(I)Landroid/graphics/text/LineBreakConfig$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::text;
#endif
