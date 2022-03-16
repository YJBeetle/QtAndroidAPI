#pragma once

#include "../../../JIntArray.hpp"
#include "./LineBreaker.def.hpp"
#include "./LineBreaker_Builder.def.hpp"

namespace android::graphics::text
{
	// Fields
	
	// Constructors
	inline LineBreaker_Builder::LineBreaker_Builder()
		: JObject(
			"android.graphics.text.LineBreaker$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::text::LineBreaker LineBreaker_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/text/LineBreaker;"
		);
	}
	inline android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setBreakStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	inline android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setHyphenationFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	inline android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setIndents(JIntArray arg0) const
	{
		return callObjectMethod(
			"setIndents",
			"([I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setJustificationMode(jint arg0) const
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

// Base class headers

