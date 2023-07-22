#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class Rect;
}
namespace android::text
{
	class Layout_Alignment;
}
namespace android::text
{
	class Layout_Directions;
}
namespace android::text
{
	class TextPaint;
}
class JString;

namespace android::text
{
	class Layout : public JObject
	{
	public:
		// Fields
		static jint BREAK_STRATEGY_BALANCED();
		static jint BREAK_STRATEGY_HIGH_QUALITY();
		static jint BREAK_STRATEGY_SIMPLE();
		static jfloat DEFAULT_LINESPACING_ADDITION();
		static jfloat DEFAULT_LINESPACING_MULTIPLIER();
		static jint DIR_LEFT_TO_RIGHT();
		static jint DIR_RIGHT_TO_LEFT();
		static jint HYPHENATION_FREQUENCY_FULL();
		static jint HYPHENATION_FREQUENCY_FULL_FAST();
		static jint HYPHENATION_FREQUENCY_NONE();
		static jint HYPHENATION_FREQUENCY_NORMAL();
		static jint HYPHENATION_FREQUENCY_NORMAL_FAST();
		static jint JUSTIFICATION_MODE_INTER_WORD();
		static jint JUSTIFICATION_MODE_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Layout(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Layout(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jfloat getDesiredWidth(JString arg0, android::text::TextPaint arg1);
		static jfloat getDesiredWidth(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3);
		void draw(android::graphics::Canvas arg0) const;
		void draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3) const;
		android::text::Layout_Alignment getAlignment() const;
		jint getBottomPadding() const;
		void getCursorPath(jint arg0, android::graphics::Path arg1, JString arg2) const;
		jint getEllipsisCount(jint arg0) const;
		jint getEllipsisStart(jint arg0) const;
		jint getEllipsizedWidth() const;
		jint getHeight() const;
		jint getLineAscent(jint arg0) const;
		jint getLineBaseline(jint arg0) const;
		jint getLineBottom(jint arg0) const;
		jint getLineBounds(jint arg0, android::graphics::Rect arg1) const;
		jboolean getLineContainsTab(jint arg0) const;
		jint getLineCount() const;
		jint getLineDescent(jint arg0) const;
		android::text::Layout_Directions getLineDirections(jint arg0) const;
		jint getLineEnd(jint arg0) const;
		jint getLineForOffset(jint arg0) const;
		jint getLineForVertical(jint arg0) const;
		jfloat getLineLeft(jint arg0) const;
		jfloat getLineMax(jint arg0) const;
		jfloat getLineRight(jint arg0) const;
		jint getLineStart(jint arg0) const;
		jint getLineTop(jint arg0) const;
		jint getLineVisibleEnd(jint arg0) const;
		jfloat getLineWidth(jint arg0) const;
		jint getOffsetForHorizontal(jint arg0, jfloat arg1) const;
		jint getOffsetToLeftOf(jint arg0) const;
		jint getOffsetToRightOf(jint arg0) const;
		android::text::TextPaint getPaint() const;
		android::text::Layout_Alignment getParagraphAlignment(jint arg0) const;
		jint getParagraphDirection(jint arg0) const;
		jint getParagraphLeft(jint arg0) const;
		jint getParagraphRight(jint arg0) const;
		jfloat getPrimaryHorizontal(jint arg0) const;
		jfloat getSecondaryHorizontal(jint arg0) const;
		void getSelectionPath(jint arg0, jint arg1, android::graphics::Path arg2) const;
		jfloat getSpacingAdd() const;
		jfloat getSpacingMultiplier() const;
		JString getText() const;
		jint getTopPadding() const;
		jint getWidth() const;
		void increaseWidthTo(jint arg0) const;
		jboolean isFallbackLineSpacingEnabled() const;
		jboolean isRtlCharAt(jint arg0) const;
	};
} // namespace android::text

