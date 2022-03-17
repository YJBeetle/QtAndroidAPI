#pragma once

#include "./Layout_Alignment.def.hpp"
#include "./Layout_Directions.def.hpp"
#include "./TextPaint.def.hpp"
#include "./TextUtils_TruncateAt.def.hpp"
#include "../../JString.hpp"
#include "./StaticLayout.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline StaticLayout::StaticLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6)
		: android::text::Layout(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6
		) {}
	inline StaticLayout::StaticLayout(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4, android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8)
		: android::text::Layout(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5.object(),
			arg6,
			arg7,
			arg8
		) {}
	inline StaticLayout::StaticLayout(JString arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4, android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8, android::text::TextUtils_TruncateAt arg9, jint arg10)
		: android::text::Layout(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5.object(),
			arg6,
			arg7,
			arg8,
			arg9.object(),
			arg10
		) {}
	
	// Methods
	inline jint StaticLayout::getBottomPadding() const
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	inline jint StaticLayout::getEllipsisCount(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	inline jint StaticLayout::getEllipsisStart(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	inline jint StaticLayout::getEllipsizedWidth() const
	{
		return callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	inline jboolean StaticLayout::getLineContainsTab(jint arg0) const
	{
		return callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	inline jint StaticLayout::getLineCount() const
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	inline jint StaticLayout::getLineDescent(jint arg0) const
	{
		return callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	inline android::text::Layout_Directions StaticLayout::getLineDirections(jint arg0) const
	{
		return callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	inline jint StaticLayout::getLineForVertical(jint arg0) const
	{
		return callMethod<jint>(
			"getLineForVertical",
			"(I)I",
			arg0
		);
	}
	inline jint StaticLayout::getLineStart(jint arg0) const
	{
		return callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	inline jint StaticLayout::getLineTop(jint arg0) const
	{
		return callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	inline jint StaticLayout::getParagraphDirection(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	inline jint StaticLayout::getTopPadding() const
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
} // namespace android::text

// Base class headers
#include "./Layout.hpp"

