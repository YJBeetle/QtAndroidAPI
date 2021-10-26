#pragma once

#ifndef ANDROID_TEXT_DYNAMICLAYOUT_BUILDER
#define ANDROID_TEXT_DYNAMICLAYOUT_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class DynamicLayout;
}
namespace __jni_impl::android::text
{
	class TextUtils_TruncateAt;
}
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
	class DynamicLayout_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBreakStrategy(jint arg0);
		QAndroidJniObject setHyphenationFrequency(jint arg0);
		QAndroidJniObject setTextDirection(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setJustificationMode(jint arg0);
		QAndroidJniObject setLineSpacing(jfloat arg0, jfloat arg1);
		QAndroidJniObject setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0);
		static QAndroidJniObject obtain(jstring arg0, __jni_impl::android::text::TextPaint arg1, jint arg2);
		static QAndroidJniObject obtain(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jint arg2);
		QAndroidJniObject setDisplayText(jstring arg0);
		QAndroidJniObject setDisplayText(const QString &arg0);
		QAndroidJniObject setAlignment(__jni_impl::android::text::Layout_Alignment arg0);
		QAndroidJniObject setIncludePad(jboolean arg0);
		QAndroidJniObject setUseLineSpacingFromFallbacks(jboolean arg0);
		QAndroidJniObject setEllipsizedWidth(jint arg0);
	};
} // namespace __jni_impl::android::text

#include "DynamicLayout.hpp"
#include "TextUtils_TruncateAt.hpp"
#include "TextPaint.hpp"
#include "Layout_Alignment.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void DynamicLayout_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.DynamicLayout$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DynamicLayout_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/DynamicLayout;"
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setBreakStrategy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setHyphenationFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setTextDirection(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/DynamicLayout$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setJustificationMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setLineSpacing(jfloat arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setLineSpacing",
			"(FF)Landroid/text/DynamicLayout$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setEllipsize(__jni_impl::android::text::TextUtils_TruncateAt arg0)
	{
		return __thiz.callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/DynamicLayout$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicLayout_Builder::obtain(jstring arg0, __jni_impl::android::text::TextPaint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.DynamicLayout$Builder",
			"obtain",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;I)Landroid/text/DynamicLayout$Builder;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject DynamicLayout_Builder::obtain(const QString &arg0, __jni_impl::android::text::TextPaint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.DynamicLayout$Builder",
			"obtain",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;I)Landroid/text/DynamicLayout$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setDisplayText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDisplayText",
			"(Ljava/lang/CharSequence;)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setDisplayText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDisplayText",
			"(Ljava/lang/CharSequence;)Landroid/text/DynamicLayout$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setAlignment(__jni_impl::android::text::Layout_Alignment arg0)
	{
		return __thiz.callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/DynamicLayout$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setIncludePad(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setIncludePad",
			"(Z)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setUseLineSpacingFromFallbacks(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setUseLineSpacingFromFallbacks",
			"(Z)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setEllipsizedWidth(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setEllipsizedWidth",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class DynamicLayout_Builder : public __jni_impl::android::text::DynamicLayout_Builder
	{
	public:
		DynamicLayout_Builder(QAndroidJniObject obj) { __thiz = obj; }
		DynamicLayout_Builder()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_DYNAMICLAYOUT_BUILDER

