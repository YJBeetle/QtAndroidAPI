#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::graphics
{
	class Paint_FontMetrics;
}
namespace android::graphics::text
{
	class LineBreakConfig;
}
namespace android::text
{
	class Layout;
}
namespace android::text
{
	class Layout_Alignment;
}
namespace android::text
{
	class TextPaint;
}
namespace android::text
{
	class TextUtils_TruncateAt;
}
class JString;

namespace android::text
{
	class Layout_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Layout_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Layout_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Layout_Builder(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4);
		
		// Methods
		android::text::Layout build() const;
		android::text::Layout_Builder setAlignment(android::text::Layout_Alignment arg0) const;
		android::text::Layout_Builder setBreakStrategy(jint arg0) const;
		android::text::Layout_Builder setEllipsize(android::text::TextUtils_TruncateAt arg0) const;
		android::text::Layout_Builder setEllipsizedWidth(jint arg0) const;
		android::text::Layout_Builder setFallbackLineSpacingEnabled(jboolean arg0) const;
		android::text::Layout_Builder setFontPaddingIncluded(jboolean arg0) const;
		android::text::Layout_Builder setHyphenationFrequency(jint arg0) const;
		android::text::Layout_Builder setJustificationMode(jint arg0) const;
		android::text::Layout_Builder setLeftIndents(JIntArray arg0) const;
		android::text::Layout_Builder setLineBreakConfig(android::graphics::text::LineBreakConfig arg0) const;
		android::text::Layout_Builder setLineSpacingAmount(jfloat arg0) const;
		android::text::Layout_Builder setLineSpacingMultiplier(jfloat arg0) const;
		android::text::Layout_Builder setMaxLines(jint arg0) const;
		android::text::Layout_Builder setMinimumFontMetrics(android::graphics::Paint_FontMetrics arg0) const;
		android::text::Layout_Builder setRightIndents(JIntArray arg0) const;
		android::text::Layout_Builder setShiftDrawingOffsetForStartOverhang(jboolean arg0) const;
		android::text::Layout_Builder setTextDirectionHeuristic(JObject arg0) const;
		android::text::Layout_Builder setUseBoundsForWidth(jboolean arg0) const;
	};
} // namespace android::text

