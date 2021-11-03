#include "../graphics/Canvas.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Path.hpp"
#include "../graphics/Rect.hpp"
#include "./Layout_Alignment.hpp"
#include "./Layout_Directions.hpp"
#include "./TextPaint.hpp"
#include "./Layout.hpp"

namespace android::text
{
	// Fields
	jint Layout::BREAK_STRATEGY_BALANCED()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_BALANCED"
		);
	}
	jint Layout::BREAK_STRATEGY_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_HIGH_QUALITY"
		);
	}
	jint Layout::BREAK_STRATEGY_SIMPLE()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_SIMPLE"
		);
	}
	jfloat Layout::DEFAULT_LINESPACING_ADDITION()
	{
		return getStaticField<jfloat>(
			"android.text.Layout",
			"DEFAULT_LINESPACING_ADDITION"
		);
	}
	jfloat Layout::DEFAULT_LINESPACING_MULTIPLIER()
	{
		return getStaticField<jfloat>(
			"android.text.Layout",
			"DEFAULT_LINESPACING_MULTIPLIER"
		);
	}
	jint Layout::DIR_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"DIR_LEFT_TO_RIGHT"
		);
	}
	jint Layout::DIR_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"DIR_RIGHT_TO_LEFT"
		);
	}
	jint Layout::HYPHENATION_FREQUENCY_FULL()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_FULL"
		);
	}
	jint Layout::HYPHENATION_FREQUENCY_NONE()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_NONE"
		);
	}
	jint Layout::HYPHENATION_FREQUENCY_NORMAL()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_NORMAL"
		);
	}
	jint Layout::JUSTIFICATION_MODE_INTER_WORD()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"JUSTIFICATION_MODE_INTER_WORD"
		);
	}
	jint Layout::JUSTIFICATION_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"JUSTIFICATION_MODE_NONE"
		);
	}
	
	// QJniObject forward
	Layout::Layout(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jfloat Layout::getDesiredWidth(jstring arg0, android::text::TextPaint arg1)
	{
		return callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F",
			arg0,
			arg1.object()
		);
	}
	jfloat Layout::getDesiredWidth(jstring arg0, jint arg1, jint arg2, android::text::TextPaint arg3)
	{
		return callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;)F",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Layout::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void Layout::draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;Landroid/graphics/Path;Landroid/graphics/Paint;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::text::Layout_Alignment Layout::getAlignment()
	{
		return callObjectMethod(
			"getAlignment",
			"()Landroid/text/Layout$Alignment;"
		);
	}
	jint Layout::getBottomPadding()
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	void Layout::getCursorPath(jint arg0, android::graphics::Path arg1, jstring arg2)
	{
		callMethod<void>(
			"getCursorPath",
			"(ILandroid/graphics/Path;Ljava/lang/CharSequence;)V",
			arg0,
			arg1.object(),
			arg2
		);
	}
	jint Layout::getEllipsisCount(jint arg0)
	{
		return callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	jint Layout::getEllipsisStart(jint arg0)
	{
		return callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	jint Layout::getEllipsizedWidth()
	{
		return callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	jint Layout::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint Layout::getLineAscent(jint arg0)
	{
		return callMethod<jint>(
			"getLineAscent",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineBaseline(jint arg0)
	{
		return callMethod<jint>(
			"getLineBaseline",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineBottom(jint arg0)
	{
		return callMethod<jint>(
			"getLineBottom",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineBounds(jint arg0, android::graphics::Rect arg1)
	{
		return callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.object()
		);
	}
	jboolean Layout::getLineContainsTab(jint arg0)
	{
		return callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	jint Layout::getLineCount()
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint Layout::getLineDescent(jint arg0)
	{
		return callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	android::text::Layout_Directions Layout::getLineDirections(jint arg0)
	{
		return callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	jint Layout::getLineEnd(jint arg0)
	{
		return callMethod<jint>(
			"getLineEnd",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineForOffset(jint arg0)
	{
		return callMethod<jint>(
			"getLineForOffset",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineForVertical(jint arg0)
	{
		return callMethod<jint>(
			"getLineForVertical",
			"(I)I",
			arg0
		);
	}
	jfloat Layout::getLineLeft(jint arg0)
	{
		return callMethod<jfloat>(
			"getLineLeft",
			"(I)F",
			arg0
		);
	}
	jfloat Layout::getLineMax(jint arg0)
	{
		return callMethod<jfloat>(
			"getLineMax",
			"(I)F",
			arg0
		);
	}
	jfloat Layout::getLineRight(jint arg0)
	{
		return callMethod<jfloat>(
			"getLineRight",
			"(I)F",
			arg0
		);
	}
	jint Layout::getLineStart(jint arg0)
	{
		return callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineTop(jint arg0)
	{
		return callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	jint Layout::getLineVisibleEnd(jint arg0)
	{
		return callMethod<jint>(
			"getLineVisibleEnd",
			"(I)I",
			arg0
		);
	}
	jfloat Layout::getLineWidth(jint arg0)
	{
		return callMethod<jfloat>(
			"getLineWidth",
			"(I)F",
			arg0
		);
	}
	jint Layout::getOffsetForHorizontal(jint arg0, jfloat arg1)
	{
		return callMethod<jint>(
			"getOffsetForHorizontal",
			"(IF)I",
			arg0,
			arg1
		);
	}
	jint Layout::getOffsetToLeftOf(jint arg0)
	{
		return callMethod<jint>(
			"getOffsetToLeftOf",
			"(I)I",
			arg0
		);
	}
	jint Layout::getOffsetToRightOf(jint arg0)
	{
		return callMethod<jint>(
			"getOffsetToRightOf",
			"(I)I",
			arg0
		);
	}
	android::text::TextPaint Layout::getPaint()
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	android::text::Layout_Alignment Layout::getParagraphAlignment(jint arg0)
	{
		return callObjectMethod(
			"getParagraphAlignment",
			"(I)Landroid/text/Layout$Alignment;",
			arg0
		);
	}
	jint Layout::getParagraphDirection(jint arg0)
	{
		return callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	jint Layout::getParagraphLeft(jint arg0)
	{
		return callMethod<jint>(
			"getParagraphLeft",
			"(I)I",
			arg0
		);
	}
	jint Layout::getParagraphRight(jint arg0)
	{
		return callMethod<jint>(
			"getParagraphRight",
			"(I)I",
			arg0
		);
	}
	jfloat Layout::getPrimaryHorizontal(jint arg0)
	{
		return callMethod<jfloat>(
			"getPrimaryHorizontal",
			"(I)F",
			arg0
		);
	}
	jfloat Layout::getSecondaryHorizontal(jint arg0)
	{
		return callMethod<jfloat>(
			"getSecondaryHorizontal",
			"(I)F",
			arg0
		);
	}
	void Layout::getSelectionPath(jint arg0, jint arg1, android::graphics::Path arg2)
	{
		callMethod<void>(
			"getSelectionPath",
			"(IILandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jfloat Layout::getSpacingAdd()
	{
		return callMethod<jfloat>(
			"getSpacingAdd",
			"()F"
		);
	}
	jfloat Layout::getSpacingMultiplier()
	{
		return callMethod<jfloat>(
			"getSpacingMultiplier",
			"()F"
		);
	}
	jstring Layout::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Layout::getTopPadding()
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	jint Layout::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void Layout::increaseWidthTo(jint arg0)
	{
		callMethod<void>(
			"increaseWidthTo",
			"(I)V",
			arg0
		);
	}
	jboolean Layout::isRtlCharAt(jint arg0)
	{
		return callMethod<jboolean>(
			"isRtlCharAt",
			"(I)Z",
			arg0
		);
	}
} // namespace android::text

