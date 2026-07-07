#pragma once

#include "../../JIntArray.hpp"
#include "../graphics/Paint_FontMetrics.def.hpp"
#include "../graphics/text/LineBreakConfig.def.hpp"
#include "./Layout.def.hpp"
#include "./Layout_Alignment.def.hpp"
#include "./TextPaint.def.hpp"
#include "./TextUtils_TruncateAt.def.hpp"
#include "../../JString.hpp"
#include "./Layout_Builder.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline Layout_Builder::Layout_Builder(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4)
		: JObject(
			"android.text.Layout$Builder",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;I)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4
		) {}
	
	// Methods
	inline android::text::Layout Layout_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/Layout;"
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setAlignment(android::text::Layout_Alignment arg0) const
	{
		return callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/Layout$Builder;",
			arg0.object()
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setBreakStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setEllipsize(android::text::TextUtils_TruncateAt arg0) const
	{
		return callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/Layout$Builder;",
			arg0.object()
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setEllipsizedWidth(jint arg0) const
	{
		return callObjectMethod(
			"setEllipsizedWidth",
			"(I)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setFallbackLineSpacingEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setFallbackLineSpacingEnabled",
			"(Z)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setFontPaddingIncluded(jboolean arg0) const
	{
		return callObjectMethod(
			"setFontPaddingIncluded",
			"(Z)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setHyphenationFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setJustificationMode(jint arg0) const
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setLeftIndents(JIntArray arg0) const
	{
		return callObjectMethod(
			"setLeftIndents",
			"([I)Landroid/text/Layout$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setLineBreakConfig(android::graphics::text::LineBreakConfig arg0) const
	{
		return callObjectMethod(
			"setLineBreakConfig",
			"(Landroid/graphics/text/LineBreakConfig;)Landroid/text/Layout$Builder;",
			arg0.object()
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setLineSpacingAmount(jfloat arg0) const
	{
		return callObjectMethod(
			"setLineSpacingAmount",
			"(F)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setLineSpacingMultiplier(jfloat arg0) const
	{
		return callObjectMethod(
			"setLineSpacingMultiplier",
			"(F)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setMaxLines(jint arg0) const
	{
		return callObjectMethod(
			"setMaxLines",
			"(I)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setMinimumFontMetrics(android::graphics::Paint_FontMetrics arg0) const
	{
		return callObjectMethod(
			"setMinimumFontMetrics",
			"(Landroid/graphics/Paint$FontMetrics;)Landroid/text/Layout$Builder;",
			arg0.object()
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setRightIndents(JIntArray arg0) const
	{
		return callObjectMethod(
			"setRightIndents",
			"([I)Landroid/text/Layout$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setShiftDrawingOffsetForStartOverhang(jboolean arg0) const
	{
		return callObjectMethod(
			"setShiftDrawingOffsetForStartOverhang",
			"(Z)Landroid/text/Layout$Builder;",
			arg0
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setTextDirectionHeuristic(JObject arg0) const
	{
		return callObjectMethod(
			"setTextDirectionHeuristic",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/Layout$Builder;",
			arg0.object()
		);
	}
	inline android::text::Layout_Builder Layout_Builder::setUseBoundsForWidth(jboolean arg0) const
	{
		return callObjectMethod(
			"setUseBoundsForWidth",
			"(Z)Landroid/text/Layout$Builder;",
			arg0
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
