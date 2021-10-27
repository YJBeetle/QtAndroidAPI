#include "./DynamicLayout.hpp"
#include "./Layout_Alignment.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "./DynamicLayout_Builder.hpp"

namespace android::text
{
	// Fields
	
	DynamicLayout_Builder::DynamicLayout_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject DynamicLayout_Builder::obtain(jstring arg0, android::text::TextPaint arg1, jint arg2)
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
	QAndroidJniObject DynamicLayout_Builder::obtain(const QString &arg0, android::text::TextPaint arg1, jint arg2)
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
	QAndroidJniObject DynamicLayout_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/DynamicLayout;"
		);
	}
	QAndroidJniObject DynamicLayout_Builder::setAlignment(android::text::Layout_Alignment arg0)
	{
		return __thiz.callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/DynamicLayout$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject DynamicLayout_Builder::setEllipsize(android::text::TextUtils_TruncateAt arg0)
	{
		return __thiz.callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/DynamicLayout$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject DynamicLayout_Builder::setHyphenationFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
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
	QAndroidJniObject DynamicLayout_Builder::setTextDirection(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/DynamicLayout$Builder;",
			arg0.__jniObject().object()
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
} // namespace android::text

