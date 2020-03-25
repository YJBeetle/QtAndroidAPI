#pragma once

#ifndef ANDROID_TEXT_STATICLAYOUT_BUILDER
#define ANDROID_TEXT_STATICLAYOUT_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class StaticLayout;
}
namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt;
}
namespace __jni_impl::android::text
{
	class Layout_Alignment;
}
namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text
{
	class StaticLayout_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setText(jstring arg0);
		QAndroidJniObject setJustificationMode(jint arg0);
		QAndroidJniObject setMaxLines(jint arg0);
		QAndroidJniObject setLineSpacing(jfloat arg0, jfloat arg1);
		QAndroidJniObject setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0);
		QAndroidJniObject setTextDirection(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setAlignment(__jni_impl::android::text::Layout_Alignment arg0);
		QAndroidJniObject setIncludePad(jboolean arg0);
		QAndroidJniObject setUseLineSpacingFromFallbacks(jboolean arg0);
		QAndroidJniObject setEllipsizedWidth(jint arg0);
		QAndroidJniObject setIndents(jintArray arg0, jintArray arg1);
		static QAndroidJniObject obtain(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4);
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
	};
} // namespace __jni_impl::android::text

#include "StaticLayout.hpp"
#include "TextUtils_TruncateAt.hpp"
#include "Layout_Alignment.hpp"
#include "TextPaint.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void StaticLayout_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.StaticLayout$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject StaticLayout_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/StaticLayout;");
	}
	QAndroidJniObject StaticLayout_Builder::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
	QAndroidJniObject StaticLayout_Builder::setJustificationMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
	QAndroidJniObject StaticLayout_Builder::setMaxLines(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMaxLines",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
	QAndroidJniObject StaticLayout_Builder::setLineSpacing(jfloat arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setLineSpacing",
			"(FF)Landroid/text/StaticLayout$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject StaticLayout_Builder::setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0)
	{
		return __thiz.callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/StaticLayout$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject StaticLayout_Builder::setTextDirection(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/StaticLayout$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject StaticLayout_Builder::setAlignment(__jni_impl::android::text::Layout_Alignment arg0)
	{
		return __thiz.callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/StaticLayout$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject StaticLayout_Builder::setIncludePad(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludePad",
			"(Z)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
	QAndroidJniObject StaticLayout_Builder::setUseLineSpacingFromFallbacks(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUseLineSpacingFromFallbacks",
			"(Z)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
	QAndroidJniObject StaticLayout_Builder::setEllipsizedWidth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setEllipsizedWidth",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
	QAndroidJniObject StaticLayout_Builder::setIndents(jintArray arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"setIndents",
			"([I[I)Landroid/text/StaticLayout$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject StaticLayout_Builder::obtain(jstring arg0, jint arg1, jint arg2, __jni_impl::android::text::TextPaint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.StaticLayout$Builder",
			"obtain",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;I)Landroid/text/StaticLayout$Builder;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4);
	}
	QAndroidJniObject StaticLayout_Builder::setBreakStrategy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
	QAndroidJniObject StaticLayout_Builder::setHyphenationFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class StaticLayout_Builder : public __jni_impl::android::text::StaticLayout_Builder
	{
	public:
		StaticLayout_Builder(QAndroidJniObject obj) { __thiz = obj; }
		StaticLayout_Builder()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_STATICLAYOUT_BUILDER

