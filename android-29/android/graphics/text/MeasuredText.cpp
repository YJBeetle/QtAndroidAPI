#include "../Rect.hpp"
#include "./MeasuredText.hpp"

namespace android::graphics::text
{
	// Fields
	
	MeasuredText::MeasuredText(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MeasuredText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2)
	{
		__thiz.callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jfloat MeasuredText::getCharWidthAt(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getCharWidthAt",
			"(I)F",
			arg0
		);
	}
	jfloat MeasuredText::getWidth(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::text

