#include "../Paint.hpp"
#include "./MeasuredText.hpp"
#include "./MeasuredText_Builder.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QAndroidJniObject forward
	MeasuredText_Builder::MeasuredText_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MeasuredText_Builder::MeasuredText_Builder(jcharArray arg0)
		: __JniBaseClass(
			"android.graphics.text.MeasuredText$Builder",
			"([C)V",
			arg0
		) {}
	MeasuredText_Builder::MeasuredText_Builder(android::graphics::text::MeasuredText arg0)
		: __JniBaseClass(
			"android.graphics.text.MeasuredText$Builder",
			"(Landroid/graphics/text/MeasuredText;)V",
			arg0.object()
		) {}
	
	// Methods
	android::graphics::text::MeasuredText_Builder MeasuredText_Builder::appendReplacementRun(android::graphics::Paint arg0, jint arg1, jfloat arg2)
	{
		return callObjectMethod(
			"appendReplacementRun",
			"(Landroid/graphics/Paint;IF)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::graphics::text::MeasuredText_Builder MeasuredText_Builder::appendStyleRun(android::graphics::Paint arg0, jint arg1, jboolean arg2)
	{
		return callObjectMethod(
			"appendStyleRun",
			"(Landroid/graphics/Paint;IZ)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::graphics::text::MeasuredText MeasuredText_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/graphics/text/MeasuredText;"
		);
	}
	android::graphics::text::MeasuredText_Builder MeasuredText_Builder::setComputeHyphenation(jboolean arg0)
	{
		return callObjectMethod(
			"setComputeHyphenation",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
	android::graphics::text::MeasuredText_Builder MeasuredText_Builder::setComputeLayout(jboolean arg0)
	{
		return callObjectMethod(
			"setComputeLayout",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text
