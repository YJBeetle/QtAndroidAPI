#include "../../../JIntArray.hpp"
#include "./LineBreaker.hpp"
#include "./LineBreaker_Builder.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QJniObject forward
	LineBreaker_Builder::LineBreaker_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LineBreaker_Builder::LineBreaker_Builder()
		: JObject(
			"android.graphics.text.LineBreaker$Builder",
			"()V"
		) {}
	
	// Methods
	android::graphics::text::LineBreaker LineBreaker_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/text/LineBreaker;"
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setBreakStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setHyphenationFrequency(jint arg0) const
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setIndents(JIntArray arg0) const
	{
		return callObjectMethod(
			"setIndents",
			"([I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0.object<jintArray>()
		);
	}
	android::graphics::text::LineBreaker_Builder LineBreaker_Builder::setJustificationMode(jint arg0) const
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

