#include "./PrecomputedText_Params.hpp"
#include "./TextPaint.hpp"
#include "./PrecomputedText_Params_Builder.hpp"

namespace android::text
{
	// Fields
	
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(android::text::PrecomputedText_Params &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/PrecomputedText$Params;)V",
			arg0.__jniObject().object()
		);
	}
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(android::text::TextPaint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrecomputedText_Params_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setBreakStrategy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setHyphenationFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	QAndroidJniObject PrecomputedText_Params_Builder::setTextDirection(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/PrecomputedText$Params$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::text

