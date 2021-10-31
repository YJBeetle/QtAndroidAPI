#include "./Layout_Alignment.hpp"
#include "./StaticLayout.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "./StaticLayout_Builder.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	StaticLayout_Builder::StaticLayout_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject StaticLayout_Builder::obtain(jstring arg0, jint arg1, jint arg2, android::text::TextPaint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.StaticLayout$Builder",
			"obtain",
			"(Ljava/lang/CharSequence;IILandroid/text/TextPaint;I)Landroid/text/StaticLayout$Builder;",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
	QAndroidJniObject StaticLayout_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/StaticLayout;"
		);
	}
	QAndroidJniObject StaticLayout_Builder::setAlignment(android::text::Layout_Alignment arg0)
	{
		return callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/StaticLayout$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject StaticLayout_Builder::setBreakStrategy(jint arg0)
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject StaticLayout_Builder::setEllipsize(android::text::TextUtils_TruncateAt arg0)
	{
		return callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/StaticLayout$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject StaticLayout_Builder::setEllipsizedWidth(jint arg0)
	{
		return callObjectMethod(
			"setEllipsizedWidth",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject StaticLayout_Builder::setHyphenationFrequency(jint arg0)
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject StaticLayout_Builder::setIncludePad(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludePad",
			"(Z)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject StaticLayout_Builder::setIndents(jintArray arg0, jintArray arg1)
	{
		return callObjectMethod(
			"setIndents",
			"([I[I)Landroid/text/StaticLayout$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StaticLayout_Builder::setJustificationMode(jint arg0)
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject StaticLayout_Builder::setLineSpacing(jfloat arg0, jfloat arg1)
	{
		return callObjectMethod(
			"setLineSpacing",
			"(FF)Landroid/text/StaticLayout$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject StaticLayout_Builder::setMaxLines(jint arg0)
	{
		return callObjectMethod(
			"setMaxLines",
			"(I)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject StaticLayout_Builder::setText(jstring arg0)
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
	QAndroidJniObject StaticLayout_Builder::setTextDirection(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/StaticLayout$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject StaticLayout_Builder::setUseLineSpacingFromFallbacks(jboolean arg0)
	{
		return callObjectMethod(
			"setUseLineSpacingFromFallbacks",
			"(Z)Landroid/text/StaticLayout$Builder;",
			arg0
		);
	}
} // namespace android::text
