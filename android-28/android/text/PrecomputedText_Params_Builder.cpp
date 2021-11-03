#include "./PrecomputedText_Params.hpp"
#include "./TextPaint.hpp"
#include "./PrecomputedText_Params_Builder.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrecomputedText_Params_Builder::PrecomputedText_Params_Builder(android::text::TextPaint arg0)
		: JObject(
			"android.text.PrecomputedText$Params$Builder",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		) {}
	
	// Methods
	android::text::PrecomputedText_Params PrecomputedText_Params_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/text/PrecomputedText$Params;"
		);
	}
	android::text::PrecomputedText_Params_Builder PrecomputedText_Params_Builder::setBreakStrategy(jint arg0)
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	android::text::PrecomputedText_Params_Builder PrecomputedText_Params_Builder::setHyphenationFrequency(jint arg0)
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/text/PrecomputedText$Params$Builder;",
			arg0
		);
	}
	android::text::PrecomputedText_Params_Builder PrecomputedText_Params_Builder::setTextDirection(JObject arg0)
	{
		return callObjectMethod(
			"setTextDirection",
			"(Landroid/text/TextDirectionHeuristic;)Landroid/text/PrecomputedText$Params$Builder;",
			arg0.object()
		);
	}
} // namespace android::text

