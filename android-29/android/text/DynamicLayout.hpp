#pragma once

#ifndef ANDROID_TEXT_DYNAMICLAYOUT
#define ANDROID_TEXT_DYNAMICLAYOUT

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
	class DynamicLayout : public __jni_impl::android::text::Layout
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, __jni_impl::android::text::TextPaint arg2, jint arg3, __jni_impl::android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::text::TextUtils_TruncateAt arg8, jint arg9);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::android::text::TextPaint arg2, jint arg3, __jni_impl::android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7);
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
	void DynamicLayout::__constructor(jstring arg0, jstring arg1, __jni_impl::android::text::TextPaint arg2, jint arg3, __jni_impl::android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::text::TextUtils_TruncateAt arg8, jint arg9)
	{
		__thiz = QAndroidJniObject(
			"android.text.DynamicLayout",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7,
			arg8.__jniObject().object(),
			arg9);
	}
	void DynamicLayout::__constructor(jstring arg0, jstring arg1, __jni_impl::android::text::TextPaint arg2, jint arg3, __jni_impl::android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7)
	{
		__thiz = QAndroidJniObject(
			"android.text.DynamicLayout",
			"(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7);
	}
	void DynamicLayout::__constructor(jstring arg0, __jni_impl::android::text::TextPaint arg1, jint arg2, __jni_impl::android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6)
	{
		__thiz = QAndroidJniObject(
			"android.text.DynamicLayout",
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
	jint DynamicLayout::getLineCount()
	{
		return __thiz.callMethod<jint>(
			"getLineCount",
			"()I");
	}
	jint DynamicLayout::getLineTop(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineTop",
			"(I)I",
			arg0);
	}
	jint DynamicLayout::getLineDescent(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineDescent",
			"(I)I",
			arg0);
	}
	jint DynamicLayout::getLineStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLineStart",
			"(I)I",
			arg0);
	}
	jint DynamicLayout::getParagraphDirection(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getParagraphDirection",
			"(I)I",
			arg0);
	}
	jboolean DynamicLayout::getLineContainsTab(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLineContainsTab",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject DynamicLayout::getLineDirections(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLineDirections",
			"(I)Landroid/text/Layout$Directions;",
			arg0);
	}
	jint DynamicLayout::getTopPadding()
	{
		return __thiz.callMethod<jint>(
			"getTopPadding",
			"()I");
	}
	jint DynamicLayout::getBottomPadding()
	{
		return __thiz.callMethod<jint>(
			"getBottomPadding",
			"()I");
	}
	jint DynamicLayout::getEllipsisCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisCount",
			"(I)I",
			arg0);
	}
	jint DynamicLayout::getEllipsisStart(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getEllipsisStart",
			"(I)I",
			arg0);
	}
	jint DynamicLayout::getEllipsizedWidth()
	{
		return __thiz.callMethod<jint>(
			"getEllipsizedWidth",
			"()I");
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class DynamicLayout : public __jni_impl::android::text::DynamicLayout
	{
	public:
		DynamicLayout(QAndroidJniObject obj) { __thiz = obj; }
		DynamicLayout(jstring arg0, jstring arg1, __jni_impl::android::text::TextPaint arg2, jint arg3, __jni_impl::android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7, __jni_impl::android::text::TextUtils_TruncateAt arg8, jint arg9)
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
				arg9);
		}
		DynamicLayout(jstring arg0, jstring arg1, __jni_impl::android::text::TextPaint arg2, jint arg3, __jni_impl::android::text::Layout_Alignment arg4, jfloat arg5, jfloat arg6, jboolean arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
		DynamicLayout(jstring arg0, __jni_impl::android::text::TextPaint arg1, jint arg2, __jni_impl::android::text::Layout_Alignment arg3, jfloat arg4, jfloat arg5, jboolean arg6)
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

#endif // ANDROID_TEXT_DYNAMICLAYOUT

