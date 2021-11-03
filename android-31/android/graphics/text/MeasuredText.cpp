#include "../Rect.hpp"
#include "./MeasuredText.hpp"

namespace android::graphics::text
{
	// Fields
	
	// QAndroidJniObject forward
	MeasuredText::MeasuredText(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MeasuredText::getBounds(jint arg0, jint arg1, android::graphics::Rect arg2) const
	{
		callMethod<void>(
			"getBounds",
			"(IILandroid/graphics/Rect;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jfloat MeasuredText::getCharWidthAt(jint arg0) const
	{
		return callMethod<jfloat>(
			"getCharWidthAt",
			"(I)F",
			arg0
		);
	}
	jfloat MeasuredText::getWidth(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"getWidth",
			"(II)F",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::text

