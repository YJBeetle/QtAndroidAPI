#pragma once

#ifndef ANDROID_TEXT_STATICLAYOUT
#define ANDROID_TEXT_STATICLAYOUT

#include "../../__JniBaseClass.hpp"
#include "Layout.hpp"

namespace __jni_impl::android::text
{
	class TextPaint;
}
namespace __jni_impl::android::text
{
	class Layout_Alignment;
}
namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt;
}
namespace __jni_impl::android::text
{
	class Layout_Directions;
}

namespace __jni_impl::android::text
{
	class StaticLayout : public __jni_impl::android::text::Layout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4, __jni_impl::android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8, __jni_impl::android::text::TextUtils_TruncateAt arg9, jint arg10);
		void __constructor(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4, __jni_impl::android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8);
		void __constructor(jstring arg0, __jni_impl::android::text::TextPaint arg1, jint arg2, __jni_impl::android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		
		// Methods
		jint getLineCount();
		jint getLineTop(jint arg0);
		jint getLineDescent(jint arg0);
		jint getLineStart(jint arg0);
		jint getParagraphDirection(jint arg0);
		jboolean getLineContainsTab(jint arg0);
		QAndroidJniObject getLineDirections(jint arg0);
		jint getTopPadding();
		jint getBottomPadding();
		jint getEllipsisCount(jint arg0);
		jint getEllipsisStart(jint arg0);
		jint getEllipsizedWidth();
		jint getLineForVertical(jint arg0);
	};
} // namespace __jni_impl::android::text

#include "TextPaint.hpp"
#include "Layout_Alignment.hpp"
#include "TextUtils_TruncateAt.hpp"
#include "Layout_Directions.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void StaticLayout::__constructor(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4, __jni_impl::android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8, __jni_impl::android::text::TextUtils_TruncateAt arg9, jint arg10)
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
			arg10);
	}
	void StaticLayout::__constructor(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4, __jni_impl::android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8)
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
			arg8);
	}
	void StaticLayout::__constructor(jstring arg0, __jni_impl::android::text::TextPaint arg1, jint arg2, __jni_impl::android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6)
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
			arg6);
	}
	
	// Methods
	jint StaticLayout::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I"
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
	jint StaticLayout::getLineDescent(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineDescent",
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
	jint StaticLayout::getParagraphDirection(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0
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
	QAndroidJniObject StaticLayout::getLineDirections(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
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
	jint StaticLayout::getLineForVertical(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineForVertical",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class StaticLayout : public __jni_impl::android::text::StaticLayout
	{
	public:
		StaticLayout(QAndroidJniObject obj) { __thiz = obj; }
		StaticLayout(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4, __jni_impl::android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8, __jni_impl::android::text::TextUtils_TruncateAt arg9, jint arg10)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9,
				arg10);
		}
		StaticLayout(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4, __jni_impl::android::text::Layout_Alignment arg5, jfloat arg6, jfloat arg7, jboolean arg8)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8);
		}
		StaticLayout(jstring arg0, __jni_impl::android::text::TextPaint arg1, jint arg2, __jni_impl::android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_STATICLAYOUT

