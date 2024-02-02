#pragma once

#include "../graphics/text/LineBreakConfig.def.hpp"
#include "./PrecomputedText_Params.def.hpp"
#include "./TextPaint.def.hpp"
#include "./PrecomputedText_Params_Builder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(android::text::PrecomputedText_Params arg0)
		: JObject(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.object()
		) {}
	inline PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(android::text::TextPaint arg0)
		: JObject(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::text::PrecomputedText_Params PrecomputedText_Params_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	inline android::text::PrecomputedText_Params_Builder PrecomputedText_Params_Builder::setBreakStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	inline android::text::PrecomputedText_Params_Builder PrecomputedText_Params_Builder::setHyphenationFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	inline android::text::PrecomputedText_Params_Builder PrecomputedText_Params_Builder::setLineBreakConfig(android::graphics::text::LineBreakConfig arg0) const
	{
		return callObjectMethod(
			"setLineBreakConfig",
			"(Landroid/graphics/text/LineBreakConfig;)Landroid/text/PrecomputedText$Params$Builder;",
			arg0.object()
		);
	}
	inline android::text::PrecomputedText_Params_Builder PrecomputedText_Params_Builder::setTextDirection(JObject arg0) const
	{
		return callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/PrecomputedText$Params$Builder;",
			arg0.object()
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
