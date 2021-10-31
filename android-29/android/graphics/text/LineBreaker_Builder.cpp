#include "./LineBreaker.hpp"
#include "./LineBreaker_Builder.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QAndroidJniObject forward
	LineBreaker_Builder::LineBreaker_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LineBreaker_Builder::LineBreaker_Builder()
		: __JniBaseClass(
			"android.graphics.text.LineBreaker$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject LineBreaker_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/text/LineBreaker;"
		);
	}
	QAndroidJniObject LineBreaker_Builder::setBreakStrategy(jint arg0)
	{
		return callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setHyphenationFrequency(jint arg0)
	{
		return callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setIndents(jintArray arg0)
	{
		return callObjectMethod(
			"setIndents",
			"([I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setJustificationMode(jint arg0)
	{
		return callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

