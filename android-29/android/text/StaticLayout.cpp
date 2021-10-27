#include "./Layout_Alignment.hpp"
#include "./Layout_Directions.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "./StaticLayout.hpp"

namespace android::text
{
	// Fields
	
	StaticLayout::StaticLayout(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StaticLayout::StaticLayout(jstring &arg0, android::text::TextPaint &arg1, jint &arg2, android::text::Layout_Alignment &arg3, jfloat &arg4, jfloat &arg5, jboolean &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6
		);
	}
	StaticLayout::StaticLayout(const QString &arg0, android::text::TextPaint &arg1, jint &arg2, android::text::Layout_Alignment &arg3, jfloat &arg4, jfloat &arg5, jboolean &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6
		);
	}
	StaticLayout::StaticLayout(jstring &arg0, jint &arg1, jint &arg2, android::text::TextPaint &arg3, jint &arg4, android::text::Layout_Alignment &arg5, jfloat &arg6, jfloat &arg7, jboolean &arg8)
	{
		__thiz = QAndroidJniObject(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8
		);
	}
	StaticLayout::StaticLayout(const QString &arg0, jint &arg1, jint &arg2, android::text::TextPaint &arg3, jint &arg4, android::text::Layout_Alignment &arg5, jfloat &arg6, jfloat &arg7, jboolean &arg8)
	{
		__thiz = QAndroidJniObject(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8
		);
	}
	StaticLayout::StaticLayout(jstring &arg0, jint &arg1, jint &arg2, android::text::TextPaint &arg3, jint &arg4, android::text::Layout_Alignment &arg5, jfloat &arg6, jfloat &arg7, jboolean &arg8, android::text::TextUtils_TruncateAt &arg9, jint &arg10)
	{
		__thiz = QAndroidJniObject(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8,
			arg9.__jniObject().object(),
			arg10
		);
	}
	StaticLayout::StaticLayout(const QString &arg0, jint &arg1, jint &arg2, android::text::TextPaint &arg3, jint &arg4, android::text::Layout_Alignment &arg5, jfloat &arg6, jfloat &arg7, jboolean &arg8, android::text::TextUtils_TruncateAt &arg9, jint &arg10)
	{
		__thiz = QAndroidJniObject(
			"android.text.StaticLayout",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8,
			arg9.__jniObject().object(),
			arg10
		);
	}
	
	// Methods
	jint StaticLayout::getBottomPadding()
	{
		return __thiz.callMethod<jint>(
			"getBottomPadding",
			"()I"
		);
	}
	jint StaticLayout::getEllipsisCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0
		);
	}
	jint StaticLayout::getEllipsisStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0
		);
	}
	jint StaticLayout::getEllipsizedWidth()
	{
		return __thiz.callMethod<jint>(
			"getEllipsizedWidth",
			"()I"
		);
	}
	jboolean StaticLayout::getLineContainsTab(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0
		);
	}
	jint StaticLayout::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I"
		);
	}
	jint StaticLayout::getLineDescent(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject StaticLayout::getLineDirections(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0
		);
	}
	jint StaticLayout::getLineForVertical(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineForVertical",
			"(I)I",
			arg0
		);
	}
	jint StaticLayout::getLineStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0
		);
	}
	jint StaticLayout::getLineTop(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0
		);
	}
	jint StaticLayout::getParagraphDirection(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
		);
	}
	jint StaticLayout::getTopPadding()
	{
		return __thiz.callMethod<jint>(
			"getTopPadding",
			"()I"
		);
	}
} // namespace android::text

