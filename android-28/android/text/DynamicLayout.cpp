#include "./Layout_Alignment.hpp"
#include "./Layout_Directions.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "../../JString.hpp"
#include "./DynamicLayout.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	DynamicLayout::DynamicLayout(QAndroidJniObject obj) : android::text::Layout(obj) {}
	
	// Constructors
	DynamicLayout::DynamicLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6)
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
	DynamicLayout::DynamicLayout(JString arg0, JString arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7)
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
	DynamicLayout::DynamicLayout(JString arg0, JString arg1, android::text::TextPaint arg2, jint arg3, android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
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
	jint DynamicLayout::getBottomPadding()
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint DynamicLayout::getEllipsisCount(jint arg0)
	{
		return callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	jint DynamicLayout::getEllipsisStart(jint arg0)
	{
		return callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	jint DynamicLayout::getEllipsizedWidth()
	{
		return callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	jboolean DynamicLayout::getLineContainsTab(jint arg0)
	{
		return callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	jint DynamicLayout::getLineCount()
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint DynamicLayout::getLineDescent(jint arg0)
	{
		return callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	android::text::Layout_Directions DynamicLayout::getLineDirections(jint arg0)
	{
		return callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	jint DynamicLayout::getLineStart(jint arg0)
	{
		return callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	jint DynamicLayout::getLineTop(jint arg0)
	{
		return callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	jint DynamicLayout::getParagraphDirection(jint arg0)
	{
		return callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	jint DynamicLayout::getTopPadding()
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
} // namespace android::text

