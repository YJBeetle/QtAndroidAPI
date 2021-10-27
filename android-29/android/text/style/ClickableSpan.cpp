#include "../TextPaint.hpp"
#include "../../view/View.hpp"
#include "./ClickableSpan.hpp"

namespace android::text::style
{
	// Fields
	
	ClickableSpan::ClickableSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClickableSpan::ClickableSpan()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ClickableSpan",
			"()V"
		);
	}
	
	// Methods
	void ClickableSpan::onClick(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ClickableSpan::updateDrawState(android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::text::style

