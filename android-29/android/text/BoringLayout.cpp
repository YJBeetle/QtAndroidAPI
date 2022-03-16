#include "../graphics/Canvas.hpp"
#include "../graphics/Paint.hpp"
#include "../graphics/Path.hpp"
#include "./BoringLayout_Metrics.hpp"
#include "./Layout_Alignment.hpp"
#include "./Layout_Directions.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "../../JString.hpp"
#include "./BoringLayout.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	BoringLayout::BoringLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7)
		: android::text::Layout(
			"android.text.BoringLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object(),
			arg7
		) {}
	BoringLayout::BoringLayout(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
		: android::text::Layout(
			"android.text.BoringLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object(),
			arg7,
			arg8.object(),
			arg9
		) {}
	
	// Methods
	android::text::BoringLayout_Metrics BoringLayout::isBoring(JString arg0, android::text::TextPaint arg1)
	{
		return callStaticObjectMethod(
			"android.text.BoringLayout",
			"isBoring",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;)Landroid/text/BoringLayout$Metrics;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::text::BoringLayout_Metrics BoringLayout::isBoring(JString arg0, android::text::TextPaint arg1, android::text::BoringLayout_Metrics arg2)
	{
		return callStaticObjectMethod(
			"android.text.BoringLayout",
			"isBoring",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;Landroid/text/BoringLayout$Metrics;)Landroid/text/BoringLayout$Metrics;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	android::text::BoringLayout BoringLayout::make(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7)
	{
		return callStaticObjectMethod(
			"android.text.BoringLayout",
			"make",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object(),
			arg7
		);
	}
	android::text::BoringLayout BoringLayout::make(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9)
	{
		return callStaticObjectMethod(
			"android.text.BoringLayout",
			"make",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object(),
			arg7,
			arg8.object(),
			arg9
		);
	}
	void BoringLayout::draw(android::graphics::Canvas arg0, android::graphics::Path arg1, android::graphics::Paint arg2, jint arg3) const
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
	void BoringLayout::ellipsized(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"ellipsized",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint BoringLayout::getBottomPadding() const
	{
		return callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint BoringLayout::getEllipsisCount(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getEllipsisStart(jint arg0) const
	{
		return callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getEllipsizedWidth() const
	{
		return callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	jint BoringLayout::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jboolean BoringLayout::getLineContainsTab(jint arg0) const
	{
		return callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	jint BoringLayout::getLineCount() const
	{
		return callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint BoringLayout::getLineDescent(jint arg0) const
	{
		return callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	android::text::Layout_Directions BoringLayout::getLineDirections(jint arg0) const
	{
		return callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	jfloat BoringLayout::getLineMax(jint arg0) const
	{
		return callMethod<jfloat>(
			"getLineMax",
			"(I)F",
			arg0
		);
	}
	jint BoringLayout::getLineStart(jint arg0) const
	{
		return callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getLineTop(jint arg0) const
	{
		return callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	jfloat BoringLayout::getLineWidth(jint arg0) const
	{
		return callMethod<jfloat>(
			"getLineWidth",
			"(I)F",
			arg0
		);
	}
	jint BoringLayout::getParagraphDirection(jint arg0) const
	{
		return callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	jint BoringLayout::getTopPadding() const
	{
		return callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
	android::text::BoringLayout BoringLayout::replaceOrMake(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7) const
	{
		return callObjectMethod(
			"replaceOrMake",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;Z)Landroid/text/BoringLayout;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object(),
			arg7
		);
	}
	android::text::BoringLayout BoringLayout::replaceOrMake(JString arg0, android::text::TextPaint arg1, jint arg2, android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, android::text::BoringLayout_Metrics arg6, jboolean arg7, android::text::TextUtils_TruncateAt arg8, jint arg9) const
	{
		return callObjectMethod(
			"replaceOrMake",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFLandroid/text/BoringLayout$Metrics;ZLandroid/text/TextUtils$TruncateAt;I)Landroid/text/BoringLayout;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5,
			arg6.object(),
			arg7,
			arg8.object(),
			arg9
		);
	}
} // namespace android::text

