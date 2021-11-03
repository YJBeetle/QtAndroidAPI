#include "./LineBreaker.hpp"
#include "./LineBreaker_Builder.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QAndroidJniObject forward
	LineBreaker_Builder::LineBreaker_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LineBreaker_Builder::LineBreaker_Builder()
		: JObject(
			"android.graphics.text.LineBreaker$Builder",
			"()V"
		) {}
	
	// Methods
	android::graphics::text::LineBreaker LineBreaker_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/text/LineBreaker;"
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setBreakStrategy(jint arg0)
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setHyphenationFrequency(jint arg0)
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setIndents(jintArray arg0)
	{
		return callObjectMethod(
			"setIndents",
			"([I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setJustificationMode(jint arg0)
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

