#include "../Paint.hpp"
#include "./MeasuredText.hpp"
#include "./MeasuredText_Builder.hpp"

namespace android::graphics::text
{
	// Fields
	
	MeasuredText_Builder::MeasuredText_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MeasuredText_Builder::MeasuredText_Builder(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.MeasuredText$Builder",
			"([C)V",
			arg0
		);
	}
	MeasuredText_Builder::MeasuredText_Builder(android::graphics::text::MeasuredText arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.text.MeasuredText$Builder",
			"(Landroid/graphics/text/MeasuredText;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MeasuredText_Builder::appendReplacementRun(android::graphics::Paint arg0, jint arg1, jfloat arg2)
	{
		return __thiz.callObjectMethod(
			"appendReplacementRun",
			"(Landroid/graphics/Paint;IF)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MeasuredText_Builder::appendStyleRun(android::graphics::Paint arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"appendStyleRun",
			"(Landroid/graphics/Paint;IZ)Landroid/graphics/text/MeasuredText$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MeasuredText_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/graphics/text/MeasuredText;"
		);
	}
	QAndroidJniObject MeasuredText_Builder::setComputeHyphenation(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setComputeHyphenation",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
	QAndroidJniObject MeasuredText_Builder::setComputeLayout(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setComputeLayout",
			"(Z)Landroid/graphics/text/MeasuredText$Builder;",
			arg0
		);
	}
} // namespace android::graphics::text

