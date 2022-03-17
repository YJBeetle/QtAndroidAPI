#pragma once

#include "../graphics/Canvas.def.hpp"
#include "../graphics/Paint.def.hpp"
#include "../graphics/Path.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./Layout_Alignment.def.hpp"
#include "./Layout_Directions.def.hpp"
#include "./TextPaint.def.hpp"
#include "../../JString.hpp"
#include "./Layout.def.hpp"

namespace android::text
{
	// Fields
	inline jint Layout::BREAK_STRATEGY_BALANCED()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_BALANCED"
		);
	}
	inline jint Layout::BREAK_STRATEGY_HIGH_QUALITY()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_HIGH_QUALITY"
		);
	}
	inline jint Layout::BREAK_STRATEGY_SIMPLE()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"BREAK_STRATEGY_SIMPLE"
		);
	}
	inline jfloat Layout::DEFAULT_LINESPACING_ADDITION()
	{
		return getStaticField<jfloat>(
			"android.text.Layout",
			"DEFAULT_LINESPACING_ADDITION"
		);
	}
	inline jfloat Layout::DEFAULT_LINESPACING_MULTIPLIER()
	{
		return getStaticField<jfloat>(
			"android.text.Layout",
			"DEFAULT_LINESPACING_MULTIPLIER"
		);
	}
	inline jint Layout::DIR_LEFT_TO_RIGHT()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"DIR_LEFT_TO_RIGHT"
		);
	}
	inline jint Layout::DIR_RIGHT_TO_LEFT()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"DIR_RIGHT_TO_LEFT"
		);
	}
	inline jint Layout::HYPHENATION_FREQUENCY_FULL()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_FULL"
		);
	}
	inline jint Layout::HYPHENATION_FREQUENCY_NONE()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_NONE"
		);
	}
	inline jint Layout::HYPHENATION_FREQUENCY_NORMAL()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"HYPHENATION_FREQUENCY_NORMAL"
		);
	}
	inline jint Layout::JUSTIFICATION_MODE_INTER_WORD()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"JUSTIFICATION_MODE_INTER_WORD"
		);
	}
	inline jint Layout::JUSTIFICATION_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.text.Layout",
			"JUSTIFICATION_MODE_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jfloat Layout::getDesiredWidth(JString arg0, android::text::TextPaint arg1)
	{
		return callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)F",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jfloat Layout::getDesiredWidth(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3)
	{
		return callStaticMethod<jfloat>(
			"android.text.Layout",
			"getDesiredWidth",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;)F",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline void Layout::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void Layout::draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3) const
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
	inline android::text::Layout_Alignment Layout::getAlignment() const
	{
		return callObjectMethod(
			"getAlignment",
			"()Landroid/text/Layout$Alignment;"
		);
	}
	inline jint Layout::getBottomPadding() const
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	inline void Layout::getCursorPath(jint arg0, android::graphics::Path arg1, JString arg2) const
	{
		callMethod<void>(
			"getCursorPath",
			"(ILandroid/graphics/Path;Ljava/lang/CharSequence;)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline jint Layout::getEllipsisCount(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getEllipsisStart(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getEllipsizedWidth() const
	{
		return callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	inline jint Layout::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint Layout::getLineAscent(jint arg0) const
	{
		return callMethod<jint>(
			"getLineAscent",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getLineBaseline(jint arg0) const
	{
		return callMethod<jint>(
			"getLineBaseline",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getLineBottom(jint arg0) const
	{
		return callMethod<jint>(
			"getLineBottom",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getLineBounds(jint arg0, android::graphics::Rect arg1) const
	{
		return callMethod<jint>(
			"getLineBounds",
			"(ILandroid/graphics/Rect;)I",
			arg0,
			arg1.object()
		);
	}
	inline jboolean Layout::getLineContainsTab(jint arg0) const
	{
		return callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	inline jint Layout::getLineCount() const
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	inline jint Layout::getLineDescent(jint arg0) const
	{
		return callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	inline android::text::Layout_Directions Layout::getLineDirections(jint arg0) const
	{
		return callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	inline jint Layout::getLineEnd(jint arg0) const
	{
		return callMethod<jint>(
			"getLineEnd",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getLineForOffset(jint arg0) const
	{
		return callMethod<jint>(
			"getLineForOffset",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getLineForVertical(jint arg0) const
	{
		return callMethod<jint>(
			"getLineForVertical",
			"(I)I",
			arg0
		);
	}
	inline jfloat Layout::getLineLeft(jint arg0) const
	{
		return callMethod<jfloat>(
			"getLineLeft",
			"(I)F",
			arg0
		);
	}
	inline jfloat Layout::getLineMax(jint arg0) const
	{
		return callMethod<jfloat>(
			"getLineMax",
			"(I)F",
			arg0
		);
	}
	inline jfloat Layout::getLineRight(jint arg0) const
	{
		return callMethod<jfloat>(
			"getLineRight",
			"(I)F",
			arg0
		);
	}
	inline jint Layout::getLineStart(jint arg0) const
	{
		return callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getLineTop(jint arg0) const
	{
		return callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getLineVisibleEnd(jint arg0) const
	{
		return callMethod<jint>(
			"getLineVisibleEnd",
			"(I)I",
			arg0
		);
	}
	inline jfloat Layout::getLineWidth(jint arg0) const
	{
		return callMethod<jfloat>(
			"getLineWidth",
			"(I)F",
			arg0
		);
	}
	inline jint Layout::getOffsetForHorizontal(jint arg0, jfloat arg1) const
	{
		return callMethod<jint>(
			"getOffsetForHorizontal",
			"(IF)I",
			arg0,
			arg1
		);
	}
	inline jint Layout::getOffsetToLeftOf(jint arg0) const
	{
		return callMethod<jint>(
			"getOffsetToLeftOf",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getOffsetToRightOf(jint arg0) const
	{
		return callMethod<jint>(
			"getOffsetToRightOf",
			"(I)I",
			arg0
		);
	}
	inline android::text::TextPaint Layout::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/text/TextPaint;"
		);
	}
	inline android::text::Layout_Alignment Layout::getParagraphAlignment(jint arg0) const
	{
		return callObjectMethod(
			"getParagraphAlignment",
			"(I)Landroid/text/Layout$Alignment;",
			arg0
		);
	}
	inline jint Layout::getParagraphDirection(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getParagraphLeft(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphLeft",
			"(I)I",
			arg0
		);
	}
	inline jint Layout::getParagraphRight(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphRight",
			"(I)I",
			arg0
		);
	}
	inline jfloat Layout::getPrimaryHorizontal(jint arg0) const
	{
		return callMethod<jfloat>(
			"getPrimaryHorizontal",
			"(I)F",
			arg0
		);
	}
	inline jfloat Layout::getSecondaryHorizontal(jint arg0) const
	{
		return callMethod<jfloat>(
			"getSecondaryHorizontal",
			"(I)F",
			arg0
		);
	}
	inline void Layout::getSelectionPath(jint arg0, jint arg1, android::graphics::Path arg2) const
	{
		callMethod<void>(
			"getSelectionPath",
			"(IILandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jfloat Layout::getSpacingAdd() const
	{
		return callMethod<jfloat>(
			"getSpacingAdd",
			"()F"
		);
	}
	inline jfloat Layout::getSpacingMultiplier() const
	{
		return callMethod<jfloat>(
			"getSpacingMultiplier",
			"()F"
		);
	}
	inline JString Layout::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint Layout::getTopPadding() const
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	inline jint Layout::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline void Layout::increaseWidthTo(jint arg0) const
	{
		callMethod<void>(
			"increaseWidthTo",
			"(I)V",
			arg0
		);
	}
	inline jboolean Layout::isRtlCharAt(jint arg0) const
	{
		return callMethod<jboolean>(
			"isRtlCharAt",
			"(I)Z",
			arg0
		);
	}
} // namespace android::text

// Base class headers

