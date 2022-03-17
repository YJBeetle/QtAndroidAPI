#pragma once

#include "./Layout_Alignment.def.hpp"
#include "./Layout_Directions.def.hpp"
#include "./TextPaint.def.hpp"
#include "./TextUtils_TruncateAt.def.hpp"
#include "../../JString.hpp"
#include "./DynamicLayout.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline DynamicLayout::DynamicLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6)
		: android::text::Layout(
			"android.text.DynamicLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6
		) {}
	inline DynamicLayout::DynamicLayout(JString arg0, JString arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7)
		: android::text::Layout(
			"android.text.DynamicLayout",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3,
			arg4.object(),
			arg5,
			arg6,
			arg7
		) {}
	inline DynamicLayout::DynamicLayout(JString arg0, JString arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
		: android::text::Layout(
			"android.text.DynamicLayout",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3,
			arg4.object(),
			arg5,
			arg6,
			arg7,
			arg8.object(),
			arg9
		) {}
	
	// Methods
	inline jint DynamicLayout::getBottomPadding() const
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	inline jint DynamicLayout::getEllipsisCount(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	inline jint DynamicLayout::getEllipsisStart(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	inline jint DynamicLayout::getEllipsizedWidth() const
	{
		return callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	inline jboolean DynamicLayout::getLineContainsTab(jint arg0) const
	{
		return callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	inline jint DynamicLayout::getLineCount() const
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	inline jint DynamicLayout::getLineDescent(jint arg0) const
	{
		return callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	inline android::text::Layout_Directions DynamicLayout::getLineDirections(jint arg0) const
	{
		return callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	inline jint DynamicLayout::getLineStart(jint arg0) const
	{
		return callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	inline jint DynamicLayout::getLineTop(jint arg0) const
	{
		return callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	inline jint DynamicLayout::getParagraphDirection(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	inline jint DynamicLayout::getTopPadding() const
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
} // namespace android::text

// Base class headers
#include "./Layout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
