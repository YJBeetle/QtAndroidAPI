#include "../Rect.hpp"
#include "./MeasuredText.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QAndroidJniObject forward
	MeasuredText::MeasuredText(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MeasuredText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2)
	{
		callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jfloat MeasuredText::getCharWidthAt(jint arg0)
	{
		return callMethod<jfloat>(
			"getCharWidthAt",
			"(I)F",
			arg0
		);
	}
	jfloat MeasuredText::getWidth(jint arg0, jint arg1)
	{
		return callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::text

