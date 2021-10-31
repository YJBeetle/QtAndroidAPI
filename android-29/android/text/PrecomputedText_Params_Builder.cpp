#include "./PrecomputedText_Params.hpp"
#include "./TextPaint.hpp"
#include "./PrecomputedText_Params_Builder.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(android::text::PrecomputedText_Params arg0)
		: __JniBaseClass(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.object()
		) {}
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(android::text::TextPaint arg0)
		: __JniBaseClass(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject PrecomputedText_Params_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setBreakStrategy(jint arg0)
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setHyphenationFrequency(jint arg0)
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setTextDirection(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/PrecomputedText$Params$Builder;",
			arg0.object()
		);
	}
} // namespace android::text

