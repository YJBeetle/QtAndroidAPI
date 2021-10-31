#include "../../graphics/MaskFilter.hpp"
#include "../TextPaint.hpp"
#include "./MaskFilterSpan.hpp"

namespace android::text::style
{
	// Fields
	
	MaskFilterSpan::MaskFilterSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MaskFilterSpan::MaskFilterSpan(android::graphics::MaskFilter arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.MaskFilterSpan",
			"(Landroid/graphics/MaskFilter;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MaskFilterSpan::getMaskFilter()
	{
		return __thiz.callObjectMethod(
			"getMaskFilter",
			"()Landroid/graphics/MaskFilter;"
		);
	}
	void MaskFilterSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::text::style

