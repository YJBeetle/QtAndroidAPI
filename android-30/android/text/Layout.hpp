#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::text
{
	class Layout : public __JniBaseClass
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
		static jint HYPHENATION_FREQUENCY_NONE();
		static jint HYPHENATION_FREQUENCY_NORMAL();
		static jint JUSTIFICATION_MODE_INTER_WORD();
		static jint JUSTIFICATION_MODE_NONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Layout(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Layout(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jfloat getDesiredWidth(jstring arg0, android::text::TextPaint arg1);
		static jfloat getDesiredWidth(jstring arg0, jint arg1, jint arg2, android::text::TextPaint arg3);
		void draw(android::graphics::Canvas arg0);
		void draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3);
		android::text::Layout_Alignment getAlignment();
		jint getBottomPadding();
		void getCursorPath(jint arg0, android::graphics::Path arg1, jstring arg2);
		jint getEllipsisCount(jint arg0);
		jint getEllipsisStart(jint arg0);
		jint getEllipsizedWidth();
		jint getHeight();
		jint getLineAscent(jint arg0);
		jint getLineBaseline(jint arg0);
		jint getLineBottom(jint arg0);
		jint getLineBounds(jint arg0, android::graphics::Rect arg1);
		jboolean getLineContainsTab(jint arg0);
		jint getLineCount();
		jint getLineDescent(jint arg0);
		android::text::Layout_Directions getLineDirections(jint arg0);
		jint getLineEnd(jint arg0);
		jint getLineForOffset(jint arg0);
		jint getLineForVertical(jint arg0);
		jfloat getLineLeft(jint arg0);
		jfloat getLineMax(jint arg0);
		jfloat getLineRight(jint arg0);
		jint getLineStart(jint arg0);
		jint getLineTop(jint arg0);
		jint getLineVisibleEnd(jint arg0);
		jfloat getLineWidth(jint arg0);
		jint getOffsetForHorizontal(jint arg0, jfloat arg1);
		jint getOffsetToLeftOf(jint arg0);
		jint getOffsetToRightOf(jint arg0);
		android::text::TextPaint getPaint();
		android::text::Layout_Alignment getParagraphAlignment(jint arg0);
		jint getParagraphDirection(jint arg0);
		jint getParagraphLeft(jint arg0);
		jint getParagraphRight(jint arg0);
		jfloat getPrimaryHorizontal(jint arg0);
		jfloat getSecondaryHorizontal(jint arg0);
		void getSelectionPath(jint arg0, jint arg1, android::graphics::Path arg2);
		jfloat getSpacingAdd();
		jfloat getSpacingMultiplier();
		jstring getText();
		jint getTopPadding();
		jint getWidth();
		void increaseWidthTo(jint arg0);
		jboolean isRtlCharAt(jint arg0);
	};
} // namespace android::text

