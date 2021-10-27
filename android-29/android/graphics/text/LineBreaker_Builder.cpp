#include "./LineBreaker.hpp"
#include "./LineBreaker_Builder.hpp"

namespace android::graphics::text
{
	// Fields
	
	LineBreaker_Builder::LineBreaker_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LineBreaker_Builder::LineBreaker_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.LineBreaker$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject LineBreaker_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/text/LineBreaker;"
		);
	}
	QAndroidJniObject LineBreaker_Builder::setBreakStrategy(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setBreakStrategy",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setHyphenationFrequency(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setHyphenationFrequency",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setIndents(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"setIndents",
			"([I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
	QAndroidJniObject LineBreaker_Builder::setJustificationMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setJustificationMode",
			"(I)Landroid/graphics/text/LineBreaker$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

