#include "./DynamicLayout.hpp"
#include "./Layout_Alignment.hpp"
#include "./TextPaint.hpp"
#include "./TextUtils_TruncateAt.hpp"
#include "./DynamicLayout_Builder.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	DynamicLayout_Builder::DynamicLayout_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::text::DynamicLayout_Builder DynamicLayout_Builder::obtain(jstring arg0, android::text::TextPaint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.DynamicLayout$Builder",
			"obtain",
			"(Ljava/lang/CharSequence;Landroid/text/TextPaint;I)Landroid/text/DynamicLayout$Builder;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::text::DynamicLayout DynamicLayout_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/DynamicLayout;"
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setAlignment(android::text::Layout_Alignment arg0)
	{
		return callObjectMethod(
			"setAlignment",
			"(Landroid/text/Layout$Alignment;)Landroid/text/DynamicLayout$Builder;",
			arg0.object()
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setBreakStrategy(jint arg0)
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setDisplayText(jstring arg0)
	{
		return callObjectMethod(
			"setDisplayText",
			"(Ljava/lang/CharSequence;)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setEllipsize(android::text::TextUtils_TruncateAt arg0)
	{
		return callObjectMethod(
			"setEllipsize",
			"(Landroid/text/TextUtils$TruncateAt;)Landroid/text/DynamicLayout$Builder;",
			arg0.object()
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setEllipsizedWidth(jint arg0)
	{
		return callObjectMethod(
			"setEllipsizedWidth",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setHyphenationFrequency(jint arg0)
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setIncludePad(jboolean arg0)
	{
		return callObjectMethod(
			"setIncludePad",
			"(Z)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setJustificationMode(jint arg0)
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setLineSpacing(jfloat arg0, jfloat arg1)
	{
		return callObjectMethod(
			"setLineSpacing",
			"(FF)Landroid/text/DynamicLayout$Builder;",
			arg0,
			arg1
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setTextDirection(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/DynamicLayout$Builder;",
			arg0.object()
		);
	}
	android::text::DynamicLayout_Builder DynamicLayout_Builder::setUseLineSpacingFromFallbacks(jboolean arg0)
	{
		return callObjectMethod(
			"setUseLineSpacingFromFallbacks",
			"(Z)Landroid/text/DynamicLayout$Builder;",
			arg0
		);
	}
} // namespace android::text

